#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <Windows.h>
#include<string.h>
#define null -32

void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
int main()
{
    char ch;
    char menu[3][10]={"new","display","exit"};
    int t,cursor=0,flag=0;
   do { system("cls");
    for(t=0;t<3;t++)
    {
        gotoxy(10,5+t);
        if(t==cursor)
            textattr(0x37);
        printf("%s",menu[t]);
        textattr(0x07);
    }

    ch=getch();
    switch(ch)
    {
       case -32:
          ch=getch();
          switch(ch)
           {
           case 72: //up
            cursor--;
            if(cursor<0)
                cursor=2;
            break;
           case 71: //home
            cursor=0;
            break;
           case 80://down
            cursor++;
            if(cursor>2)
                cursor=0;
            break;
           case 79://end
            cursor=2;
            break;
           }
           break;
        case 27: //esc
            flag=1;
            break;
        case 13://enter
            system("cls");
            printf("%s",menu[cursor]);
            getch();
            if(cursor==2)
                flag=1;
            break;
    }

   }
   while(flag==0);



    return 0;
}

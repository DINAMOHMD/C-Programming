#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32
void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

int main()
{
    int size,total_size,col,row,i;
    printf("enter size of magic box: ");
    scanf("%d",&size);
    total_size=size*size;



    for(i=1;i<=total_size;i++)
    {
        if(size%2==0)
    {
       printf("that is not allowed plz enter odd size");
       break;
    }
        if(i==1)
        {
            row=1;
            col=(size+1)/2;


        }
        else if(((i-1)%size)==0)
        {
            row++;

        }
        else
        {
            row--;
            col--;
        }


        if(row==0)
           row=size;
        if(col==0)
           col=size;


        gotoxy(col*5,row*5);
        printf("%d",i) ;


    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int flag=0;

    do
    {
        system("cls");
        printf("New \n Display \n Exit \n ");
        ch=getch();

        switch(ch)
        {
          case 'n':
          case 'N':
            printf("new selected");
            getch();
            break;
          case 'd':
          case 'D':
            printf("display selected");
            getch();
            break;
          case 'e':
          case 'E':
            printf("exit selected");
            flag=1;
            break;
          case 27:
             flag=1;
             break;

        }}

    while (flag==0);

    return 0;
}

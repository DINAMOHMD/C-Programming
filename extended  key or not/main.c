#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter character ");
    ch=getch();
    if(ch==-32)
    {
        printf("\nextended key ");
        ch=getch();
        printf("%c:%d",ch,ch);

    }
    else
    {
        printf("\nnormal key %c:%d",ch,ch);

    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i, count,j;

    printf("enter number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
       count=0;
        for(j=1;j<=num;j++)
        {
            if(i%j==0)
           count++;

        }


    if(count==2)
        printf("%d ,",i);
    }

    return 0;
}

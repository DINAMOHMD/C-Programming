#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,count=0;

    printf("enter number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
           count++;
    }
    if(count==2)
        printf("the number is prime");
    else
        printf("the number is not prime");

    return 0;
}

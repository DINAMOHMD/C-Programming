#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,factorial=1;
    printf("enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        factorial*=i;
    }
    printf("the factorial of the number %d is %d",num,factorial);

    return 0;
}

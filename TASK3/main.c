#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int x;
    do
    {
        printf("enter number");
        scanf("%d",&x);
        sum+=x;

    }
    while(sum <100);
    printf("sum=%d",sum);
    return 0;
}

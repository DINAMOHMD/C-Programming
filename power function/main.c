#include <stdio.h>
#include <stdlib.h>
int power(int a,int b);

int main()
{
    int pow=1 ,n,m;
     printf("enter basis: ");
    scanf("%d",&n);
    printf("enter alas: ");
    scanf("%d",&m);
    pow=power(n,m);
    printf("power= %d",pow);

    return 0;
}

int power(int a,int b)
{
    int i , result=1;

    for(i=0;i<b;i++)
    {
        result*=a;
    }
    return result;
}

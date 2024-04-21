#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b);
int main()
{
    int n ,m;
    printf("enter 1st number: ");
    scanf("%d",&n);
    printf("enter 2nd number: ");
    scanf("%d",&m);
    swap(&n,&m);
    printf("number1=%d , number2=%d",n,m);

    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

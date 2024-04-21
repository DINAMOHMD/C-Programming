#include <stdio.h>
#include <stdlib.h>
void calc(int num1,int num2,int * sum,int *sub,int *mul);
int main()
{
    int a,b,sum,sub,mul;
    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    calc(a,b,& sum,&sub,&mul);
    printf("sum= %d\n",sum);
    printf("mul= %d\n",mul);
    printf("sub= %d\n",sub);
    return 0;
}
void calc(int num1,int num2,int * sum,int *sub,int *mul)
{
    *sum=num1+num2;
    *sub=num1-num2;
    *mul=num1*num2;
}

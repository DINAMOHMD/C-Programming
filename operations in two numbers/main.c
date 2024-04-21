#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int sum;
    sum=num1+num2;
    printf("%d + %d = %d \n",num1,num2,sum );
    int sub;
    sub=num1-num2;
    printf("%d - %d = %d \n",num1,num2,sub);
    int mul;
    mul=num1* num2;
    printf("%d * %d = %d\n",num1,num2,mul);

    return 0;
}

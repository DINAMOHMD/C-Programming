#include <stdio.h>
#include <stdlib.h>
struct Result
{
    int sum;
    int mul;
    int sub;
};
struct Result calc(int a, int b);
int main()
{
    int n ,m;
    printf("enter 1st number: ");
    scanf("%d",&n);
    printf("enter 2nd number: ");
    scanf("%d",&m);
    struct Result result=calc(n,m);
    printf("sum= %d\n",result.sum);
    printf("mul= %d\n",result.mul);
    printf("sub= %d\n",result.sub);

    return 0;
}
struct Result calc(int a, int b)
{
   struct Result res;
   res.sum=a+b;
   res.mul=a*b;
   res.sub=a-b;
   return res;
}

#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
    int m,f;
    f=factorial(m);
    printf("factorial= %d",f);

    return 0;
}
int factorial(int n)
{
    int f=1,i;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       f*=i ;
    }
    return f;

}

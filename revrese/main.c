#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,reverse=0,reminder;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=n%10;
        reverse=reverse*10+reminder;
        n/=10;

    }
    printf("the reverse number is %d",reverse);
    return 0;
}

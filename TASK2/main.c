#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree;
    printf("enter your degree: ");
    scanf("%d",&degree);
    if(degree>90 && degree<=100)
        printf("Excellent");
    else if(degree>80 && degree<=90 )
        printf("Verygood");
    else if(degree>70 && degree<=80)
        printf("good");
    else if(degree>60 && degree<=70)
        printf("Acceptable");
    else if(degree>=0 && degree<=60)
        printf("Fail");
    else
        printf("invalid");

return 0;
}

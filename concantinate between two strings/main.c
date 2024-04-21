#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char fname[20] , lname[20] , fullname[40] ;
    printf("enter first name ");
    scanf("%s",fname);
    printf("enter last name ");
    scanf("%s",lname);
    strcpy(fullname,fname);
    strcat(fullname," ");
    strcat(fullname,lname);
    printf("the fullname = %s",fullname);
    return 0;
}

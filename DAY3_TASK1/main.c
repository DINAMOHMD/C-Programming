#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int arr[size];
    int i;
    for(i=0;i<size;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<size;i++)
    {
        printf("enter value no %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\n arr[%d]= %d",i,arr[i]);
    }
    int sum=0;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
        printf("\n sum= %d",sum);
    int max=arr[0];
    for(i=1;i<size;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("\nthe max number is: %d",max);
    int min=arr[0];
    for(i=1;i<size;i++)
    {
        if(min>arr[i])
          min=arr[i];

    }
    printf("\nthe min number is: %d",min);
    int target;
    printf("\n enter the number you want to search ");
    scanf("%d",&target);
    for(i=0;i<size;i++)
    {
        if(target==arr[i])
        {
            printf("the index of target value is %d",i);
            break;
        }
    }





    return 0;
}

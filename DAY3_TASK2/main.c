#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define cols 4

int main()
{
    int arr[rows][cols]={{0}};
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("enter student no %d in subject %d:  ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum[rows]={0};
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
           sum[i]+=arr[i][j];
        }
        printf("\nthe sum of row %d is %d",i+1,sum[i]);
    }
    int avg[cols]={0};
    int sum2[cols]={0};
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
           sum2[i]+=arr[j][i];

        }
        avg[i]+=sum2[i]/rows;
        printf("\nthe avg of col %d is %d",i+1,avg[i]);
    }


    return 0;
}

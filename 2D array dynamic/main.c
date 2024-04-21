#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,cols,i,j;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    printf("enter number of cols: ");
    scanf("%d",&cols);
    int ** ptr=(int**) malloc(rows*sizeof(int*));
    for(i=0;i<rows;i++)
    {
        ptr[i]=(int*) malloc(cols*sizeof(int));
    }
    if(ptr != NULL)
    {
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                printf("enter the element no [%d][%d]: ",i+1,j+1);
                scanf("%d",&ptr[i][j]);
            }
        }
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                printf("%d  ",ptr[i][j]);
            }
            printf("\n");
        }

    }
    for (i=0;i<rows;i++)
        free(ptr[i]);
    free(ptr);
    return 0;
}

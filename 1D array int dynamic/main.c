#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size ,i;
    printf("plz enter size of array: ");
    scanf("%d",&size);
    int * arr=(int*)malloc(size*sizeof(int));
    if(arr != NULL)
    {
        for(i=0;i<size;i++)
        {
           printf("\nenter element no: %d",i+1);
            scanf("%d",&arr[i]);
        }

        for(i=0;i<size;i++)
            printf("%d  ",arr[i]);
        free(arr) ;
    }
    return 0;
}

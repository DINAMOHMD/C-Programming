#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct emp
{
    int id;
    char name[10];
    int age;
    int salary;
    int over_time;
    int deduction;
};
int checkId(struct emp arr[5], int n, int id);


int checkId(struct emp arr[5], int n, int id)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        if (arr[i].id == id)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    struct emp arr[5];
    int i = 0, j = 0;
    int total_salary[10] = {0};

    for (i = 0; i < 5; i++)
    {
        int validId = 0;

        while (validId==0)
        {
            printf("enter id of emp no %d: ", i + 1);
            scanf("%d", &arr[i].id);

            validId = checkId(arr, i, arr[i].id);

            if (validId==0)
            {
                printf("please enter a correct id. This id is already taken.\n");
            }
        }

        printf("enter name of emp no %d: ", i + 1);
        scanf("%s", arr[i].name);
        printf("enter age of emp no %d: ", i + 1);
        scanf("%d", &arr[i].age);
        printf("enter salary of emp no %d: ", i + 1);
        scanf("%d", &arr[i].salary);
        printf("enter num of over time no %d: ", i + 1);
        scanf("%d", &arr[i].over_time);
        printf("enter num of deduction no %d: ", i + 1);
        scanf("%d", &arr[i].deduction);
    }

    for (i = 0; i < 5; i++)
    {
        total_salary[i] = arr[i].salary + arr[i].over_time - arr[i].deduction;

        printf("\nid: %d, name: %s, age: %d, total salary: %d\n", arr[i].id, arr[i].name, arr[i].age, total_salary[i]);
    }

    return 0;
}

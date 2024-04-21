#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[10];
    int age;
    int salary;
    int over_time;
    int deduction;
};

int main()
{
    int i;

   struct emp e1;
    struct emp* ptr=&e1;


    printf("plz enter number of id: ");
    scanf("%d",&(ptr->id));
    printf("plz enter your name: ");
    scanf("%s",ptr->name);
    printf("plz enter your age: ");
    scanf("%d",&(ptr->age));
    printf("plz enter your salary: ");
    scanf("%d",&(ptr->salary));
    printf("plz enter over time: ");
    scanf("%d",&(ptr->over_time));
    printf("plz enter deduction: ");
    scanf("%d",&(ptr->deduction));
    int total_salary=0;
    total_salary=e1.salary+e1.over_time-e1.deduction;
    printf("id:%d ,name:%s ,age:%d ,total salary:%d ",ptr->id,ptr->name,ptr->age,total_salary);
    free(ptr);
    return 0;
}

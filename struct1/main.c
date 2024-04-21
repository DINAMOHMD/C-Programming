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
    struct emp e1;
    printf("plz enter number of id: ");
    scanf("%d",&e1.id);
    printf("plz enter your name: ");
    scanf("%s",e1.name);
    printf("plz enter your age: ");
    scanf("%d",&e1.age);
    printf("plz enter your salary: ");
    scanf("%d",&e1.salary);
    printf("plz enter over time: ");
    scanf("%d",&e1.over_time);
    printf("plz enter deduction: ");
    scanf("%d",&e1.deduction);
    int total_salary=0;
    total_salary=e1.salary+e1.over_time-e1.deduction;
    printf("id:%d ,name:%s ,age:%d ,total salary:%d ",e1.id,e1.name,e1.age,total_salary);

    return 0;
}

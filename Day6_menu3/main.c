#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <string.h>

struct emp
{
    int id;
    char name[10];
    int age;
    int salary;
};

void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
void textattr(int i)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
int checkId(struct emp arr[], int n, int id);
void New(struct emp arr[], int size);
void DisplayAll(struct emp arr[], int size);
void Delete_by_Id(struct emp arr[], int size);
void Delete_by_Name(struct emp arr[],  char name[], int size);

int main()
{
    int size,t,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    struct emp *arr = (struct emp *)malloc(size * sizeof(struct emp));

    for (t = 0; t < size; t++)
    {
        arr[t].id = -1;
    }

    char ch;
     char menu[5][100] = {"new", "display_all", "delete_by_id", "delete_by_name", "exit"};
    int flag = 0;
    int cursor = 0;

    do
    {
        system("cls");




            for ( t = 0; t < 5; t++)
            {
                gotoxy(10, 5 + t);
                if (t == cursor)
                    textattr(0x37);
                printf("%s", menu[t]);
                textattr(0x07);
            }

            ch = getch();
            switch (ch)
            {
            case -32:
                ch = getch();
                switch (ch)
                {
                case 72: // up
                    cursor--;
                    if (cursor < 0)
                        cursor = 4;
                    break;
                case 71: // home
                    cursor = 0;
                    break;
                case 80: // down
                    cursor++;
                    if (cursor > 4)
                        cursor = 0;
                    break;
                case 79: // end
                    cursor = 4;
                    break;
                }
                break;
            case 27: // esc
                flag = 1;
                break;
            case 13: // enter
                system("cls");

                if (cursor == 0)
                {
                    New(arr, i);
                    getch();
                    cursor=0;
                }
                else if (cursor == 1)
                {
                    DisplayAll(arr, size);
                    getch();
                    cursor=1;
                }
                else if (cursor == 2)
                {
                    int id;
                    Delete_by_Id(arr, id);
                    getch();
                    cursor=2;
                }
                else if (cursor == 3)
                {
                    char name[20];
                    printf("enter the name to delete:");
                    scanf("%s",name);
                    Delete_by_Name(arr,name ,size);
                    getch();
                    cursor=3;
                }
                 if (cursor == 4)
                {
                    free(arr);
                    flag = 1;
                    break;
                }

            }
        } while (flag == 0);




    return 0;
}
int checkId(struct emp arr[], int n, int id)
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
void New(struct emp arr[],int index)
    {
        int i = 0;
        int validId = 0;
        int Override=0;
        printf("enter index of the array: ");
        scanf("%d",&index);

        if(arr[index].id==-1)

            {
               while (validId==0)
            {
                 printf("enter id of emp ");
                 scanf("%d", &arr[index].id);

                 validId = checkId(arr, index, arr[index].id);

                 if (validId==0)
                {
                    printf("please enter a correct id. This id is already taken.\n");
                }
              }

                printf("\n enter name of emp no %d: ",index);
                scanf("%s", arr[index].name);
                printf("\n enter age of emp no %d: ",index);
                scanf("%d", &arr[index].age);
                printf("\n enter salary of emp no %d: ", index);
                scanf("%d", &arr[index].salary);


            }
       else
       {
           printf("this index have data ...do you want replace this data?\n");
           printf("press 1 for YES.....press 0 for NO");
           scanf("%d",&Override);
           switch(Override)
           {
           case 1:

               while (validId==0)
              {
                 printf("enter id of emp ");
                 scanf("%d", &arr[i].id);

                 validId = checkId(arr, i, arr[i].id);

                 if (validId==0)
                {
                    printf("please enter a correct id. This id is already taken.\n");
                }
              }

                printf("\n enter name of emp no %d: ",index);
                scanf("%s", arr[index].name);
                printf("\n enter age of emp no %d: ",index);
                scanf("%d", &arr[index].age);
                printf("\n enter salary of emp no %d: ", index);
                scanf("%d", &arr[index].salary);

                break;
           case 0:
             break;
           }
       }
    }
void DisplayAll(struct emp arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i].id != -1)
        {
            printf("\nid: %d, name: %s, age: %d, salary: %d\n", arr[i].id, arr[i].name, arr[i].age, arr[i].salary);
        }
    }
}
void Delete_by_Id(struct emp arr[],int id)
{
    printf("plz enter your id: ");
    scanf("%d",&id);
    int i;
    int deleted = 0;
    for (i = 0; i <10; i++)
    {
      if(arr[i].id==id)
      {
          arr[i].id=-1;
          deleted = 1;

      }
}
    if (deleted)
    {
        printf("Employees with id \"%d\" have been deleted.\n", id);
    }
    else
    {
        printf("No employees with id \"%d\" found in the database.\n", id);
    }
}
void Delete_by_Name(struct emp arr[],  char name[], int size)
{
    int i;
    int deleted = 0;
    for (i = 0; i < size; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
        {
            arr[i].id = -1;
            deleted = 1;
        }
    }

    if (deleted)
    {
        printf("Employees with name \"%s\" have been deleted.\n", name);
    }
    else
    {
        printf("No employees with the name \"%s\" found in the database.\n", name);
    }
}

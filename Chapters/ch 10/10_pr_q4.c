#include<stdio.h>

typedef struct employee
{
    char str[10];
    int salary;
} emp;


int main()
{
    emp e1, e2;

    printf("Enter the name of first employee : ");
    scanf("%s", e1.str);

    printf("Enter the salary of first employee : ");
    scanf("%d", &e1.salary);

    printf("Enter the name of second employee : ");
    scanf("%s", e2.str);

    printf("Enter the salary of second employee : ");
    scanf("%d", &e2.salary);

    FILE *ptr;

    ptr = fopen("emp.txt", "w");

    fprintf(ptr, "%s --> %d\n", e1.str, e1.salary);
    fprintf(ptr, "%s --> %d\n", e2.str, e2.salary);

    fclose(ptr);

    return 0;
}
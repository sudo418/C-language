#include <stdio.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;

void show(struct employee e)
{
    printf("%d\n", e.code);
    printf("%f\n", e.salary);
}

int main()
{
    emp e1;

    e1.code = 77;
    e1.salary = 3000000.50;

    show(e1);

    return 0;
}
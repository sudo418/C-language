#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee e)
{
    printf("%d\n", e.code);
    e.code = 101;
}

int main()
{
    struct employee e1;

    e1.code = 77;
    e1.salary = 3000000.50;

    show(e1);

    printf("%d", e1.code); // it will not change because we didn't gave the address of e1 to the function and also the function is not of the pointer variable type

    return 0;
}
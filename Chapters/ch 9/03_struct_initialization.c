#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1 = {100, 200.3, "Chirayu"};

    printf("code : %d\n", e1.code);
    printf("salary : %f\n", e1.salary);
    printf("name : %s\n", e1.name);

    struct employee e2 = {0};

    printf("code : %d\n", e2.code);
    printf("salary : %f\n", e2.salary);
    printf("name : %s\n", e2.name);

    return 0;
}
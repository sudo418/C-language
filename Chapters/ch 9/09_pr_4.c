#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    char name[10];
} emp;

int main()
{
    emp e1, *ptr;

    ptr = &e1;
    (*ptr).code = 100;
    strcpy((*ptr).name, "chirayu");

    printf("%d\n", (*ptr).code);
    printf("%s\n", (*ptr).name);

    ptr->code = 103;
    strcpy(ptr->name, "shah");

    printf("%d\n", ptr->code);
    printf("%s\n", ptr->name);

    return 0;
}
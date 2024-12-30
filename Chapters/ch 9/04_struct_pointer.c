#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2;

    struct employee *ptr;    // *ptr is a struct employee type pointer variable that can store address of struct employee data type like int *ptr is a integer type pointer variale that can store integers. 
    ptr = &e1;

    (*ptr).code = 100;

    printf("%d\n", (*ptr).code);

    struct employee *ptr2;
    ptr2 = &e2;

    ptr2->code = 101;  // Arrow operator. another way of writing (*ptr2).code = 100;

    printf("%d\n", ptr2->code); // all are same
    printf("%d\n", e2.code);
    printf("%d", (*ptr2).code);

    return 0;
}
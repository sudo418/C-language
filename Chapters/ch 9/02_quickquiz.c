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
    struct employee e[3];  // Array to store 3 employees
    // struct employee e1,e2,e3; --> wrong in this senerio explained below

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the code of %d employee : ", i + 1);
        scanf("%d", &e[i].code);

        printf("Enter the salary of %d employee : ", i + 1);
        scanf("%f", &e[i].salary);

        printf("Enter the name of %d employee : ", i + 1);
        scanf("%s", e[i].name);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("code %d : %d\n", i + 1, e[i].code);
        printf("salary %d: %f\n", i + 1, e[i].salary);
        printf("name %d : %s\n", i + 1, e[i].name);
    }

    return 0;
}
/*
--> Arrays in C:

In C, the name of an array (e.g., e1.name) is a pointer to the first element of the array.
When you pass e1.name to a function like scanf, it already points to the memory location where the string should be stored.

--> scanf for Strings:

The %s format specifier in scanf expects a pointer to the first character of the string.
e1.name is already such a pointer, so there's no need to use & (which would add another level of indirection).
*/

/*
struct employee e[3]; allows storing multiple employees using an array.

In loops you cannot use struct employee e1,e2,e3;
e1, e2, and e3 are independent variables, each capable of storing data for one employee.
You have to access each of them individually (e.g., e1.code, e2.salary, etc.).

Drawbacks:
Less scalable. If you want to handle more employees, you need to manually create more variables (e.g., e4, e5, etc.).
Difficult to use in loops since there is no indexed way to access these variables.
*/

/*
Cannot use this condition for (int i = 1; i < 4; i++) here because we made e[3] and in c array are starting from 0. In for loop we changed to 1 to 4 but still it will not work because the array e[3] we made we cannot change the index where to start from like we did in for loop so in c we it made array it start from 0.  
*/
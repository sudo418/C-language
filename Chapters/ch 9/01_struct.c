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
    struct employee e1;
    e1.code = 77;
    e1.salary = 3000000.50;
    // e1.name = "Chirayu";  ---> This wont work because we have made a string and in string we cannot change the whole string. An array name represents a fixed address, so you cannot reassign str to point to a different string. Refer to 5_ch8
    strcpy(e1.name, "Chirayu");

    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}
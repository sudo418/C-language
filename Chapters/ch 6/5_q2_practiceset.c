#include <stdio.h>

void address(int a);

int main()
{
    int i;
    printf("The address of i is %u\n", &i);
    address(i);
    return 0;
}

void address(int a)
{
    printf("The address of i is %u\n", &a);
}
// address is not same of both i because the copy is send to the function and the address of copy will be diffrernt
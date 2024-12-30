#include <stdio.h>

int main()
{
    int i = 10;
    int *ptr = &i;

    printf("The address of i is %u\n", &i);
    printf("The value of ptr is %u\n", ptr);

    ptr++;
    // ptr = ptr + 1; other way of writing p++

    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", ptr);

    return 0;
}
// When you do ptr++, the pointer ptr moves to point to the next memory location of the same data type (in this case, an int). The value of ptr changes, but the memory address of i remains the same.

// When you increment a pointer with ptr++, it doesn't just increase the address by 1. Instead, it increases the address by the size of the data type it is pointing to. The size depends on the data type of the pointer.
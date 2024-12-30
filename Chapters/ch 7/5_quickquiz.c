#include <stdio.h>

int main()
{
    // subtraction of a number from a pointer
    // int a = 5;
    // int *ptr = &a;

    // printf("The value of ptr is %u\n", ptr);
    // ptr--;

    // printf("The value of ptr is %u\n", ptr);

    // Subtraction of a pointer from another pointer

    int arr[4] = {1,2,3,4};

    int *i = &arr[0];
    int *j = &arr[1];

    int a = j-i;

    printf("The difference between the two pointers is %d", a);

    return 0;
}
/* The difference between pointers is measured in terms of the number of elements between them, not the number of bytes.
 
When you subtract j - i:

Pointer arithmetic divides the byte difference (4 bytes) by the size of the array element (sizeof(int) = 4 bytes).

Result: 
4/4 = 1  */
#include <stdio.h>

void printarr(int ptr[], int n);

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    printarr(arr, 5);
    printf("the value of 2nd element is %d",arr[2]);
    return 0;
}

void printarr(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is : %d \n", i + 1, ptr[i]);
    }
    ptr[2] = 5555;
}

// When you use the name of an array (e.g., arr), it decays into a pointer to its first element. So, when you pass arr to a function, you are indeed passing the address of the first element (&arr[0]).
// However, this does not mean you can only access the first element; it just means that you are starting from the address of the first element.

// Pointer Arithmetic:
// In C, pointers allow you to perform arithmetic operations. If you have a pointer to the first element of an array, you can use that pointer to access any element of the array by using an index.
// For example, if ptr is a pointer to the first element of an array, then:
// ptr[0] accesses the first element.
// ptr[1] accesses the second element.
// ptr[2] accesses the third element.
// This indexing works because ptr[i] is equivalent to *(ptr + i). It means "get the value at the address of ptr plus i times the size of the type being pointed to."
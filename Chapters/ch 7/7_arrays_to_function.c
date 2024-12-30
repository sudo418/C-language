#include <stdio.h>

void printarr(int *ptr, int n);

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    printarr(arr, 5);
    return 0;
}

void printarr(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is : %d \n", i + 1, *(ptr + i));
    }
}

// *(ptr + 0):
// ptr + 0 → points to arr[0] (value 1).
// *(ptr + 0) dereferences this pointer to get 1.
// Output: The value of 1 element is 1

// Iteration 2 (i = 1):
// *(ptr + 1):
// ptr + 1 → points to arr[1] (value 2).
// *(ptr + 1) dereferences this pointer to get 2.
// Output: The value of 2 element is 2
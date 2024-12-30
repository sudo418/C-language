#include <stdio.h>

void reverse(int *arr, int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    reverse(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is : %d\n", i + 1, arr[i]);
    }

    return 0;
}
/*
Swap arr[0] with arr[6] (1 ↔ 7)
Swap arr[1] with arr[5] (2 ↔ 6)
Swap arr[2] with arr[4] (3 ↔ 5)
arr[3] remains unchanged (it's the middle element in odd-sized arrays).

Continuing beyond 𝑛/2 would reverse the elements back to their original positions.
*/
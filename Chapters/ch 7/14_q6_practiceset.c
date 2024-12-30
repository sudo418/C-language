#include <stdio.h>

int count(int *arr, int n)
{
    int positive = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive += 1;
        }
    }
    return positive;
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d elements in the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    int total = count(arr, 10);
    printf("The number of positive numbers in the array is %d", total);
    return 0;
}
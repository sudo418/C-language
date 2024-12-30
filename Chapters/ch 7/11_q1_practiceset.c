#include<stdio.h>

int main()
{
    int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    int *ptr = arr;

    printf("The first element of the array is : %d\n", *ptr);

    ptr = ptr + 2;

    printf("The third element of the array is : %d\n", *ptr);

    // comparision operation of two pointer varaible

    if(ptr == &arr[2])
    {
        printf("These are pointing to the same memory address");
    }
    else{
        printf("These are not pointing to the same memory address");
    }

    if(*ptr == arr[2])
    {
        printf("These are pointing to the same value");
    }
    else{
        printf("These are not pointing to the same value");
    }

    return 0;
}
#include <stdio.h>

void display(int arr[][2], int row, int column);
// Here, arr[][2] indicates that the function accepts a 2D array with 2 columns. You need to specify the number of columns because, in C, when passing a 2D array to a function, the size of the second dimension (columns) must be known.
// At Compile-Time: When you define a function like void displayArray(int arr[][2], int rows, int columns), the [2] part (or any specific number) tells the compiler that each row in the array has exactly 2 elements. This information is essential at compile-time because C does not have any built-in mechanism to deduce the number of columns from just a pointer. Without this, the compiler cannot correctly interpret expressions like arr[i][j] inside the function.

int main()
{
    int row = 3, column = 2;
    int arr[3][2];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the value of %d row and %d column : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    display(arr, row, column);
    return 0;
}

void display(int arr[][2], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
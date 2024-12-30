#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements you want to enter : ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i+1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of first element is : %d\n", ptr[i]);
    }
    
    
    return 0;
}
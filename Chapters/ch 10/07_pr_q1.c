#include <stdio.h>

int main()
{
    int a, b;

    FILE *ptr;
    ptr = fopen("sample.txt", "r");

    fscanf(ptr, "%d %d", &a, &b);
    printf("The values are %d %d ", a, b);

    return 0;
}
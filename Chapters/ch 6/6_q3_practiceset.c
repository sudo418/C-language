#include <stdio.h>

void tenx(int *a);

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    tenx(&a);
    printf("Ten times the value of a is %d", a);

    return 0;
}

void tenx(int *a)
{
    *a = 10 * (*a);
}
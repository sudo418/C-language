#include <stdio.h>

int tenx(int a);

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    tenx(a);
    printf("Ten times the value of a is %d", a);

    return 0;
}

int tenx(int a)
{
    int result = 10 * (a);
    return result;
}
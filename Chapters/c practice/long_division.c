#include <stdio.h>

int main()
{
    int a, b, rem;

    printf("Enter two numbers(a > b): ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        rem = a % b;
        a = b;
        b = rem;
    }

    printf("HCF = %d", a);
}
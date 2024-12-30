#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("enter the value of a: ");
    scanf("%d", &a);

    printf("enter the value of b: ");
    scanf("%d", &b);

    printf("enter the value of c: ");
    scanf("%d", &c);

    printf("enter the value of d: ");
    scanf("%d", &d);

    int largest = a;
    if (b > largest)
    {
        largest = b;
    }
    if (c > largest)
    {
        largest = c;
    }
    if (d > largest)
    {
        largest = d;
    }
    printf("the largest is %d",largest);
    return 0;
}
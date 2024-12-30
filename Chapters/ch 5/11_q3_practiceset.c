#include <stdio.h>

int fib(int x);

int main()
{
    int a;

    printf("Enter a num : ");
    scanf("%d", &a);

    int result = fib(a);
    
    printf("%d", result);
    return 0;
}

int fib(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return fib(x - 1) + fib(x - 2);
    }
}
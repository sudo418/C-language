// This is not the best way to solve it. Its a question of DSA

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);

    int i = 2, prime = 1;

    for (i; i < a; i++)
    {
        if (a % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (a == 1)
    {
        printf("1 is neither prime nor composite");
    }
    else if (prime)
    {
        printf("your number is a prime number");
    }
    else
    {
        printf("your number is not a prime number");
    }
    return 0;
}

/* Why i <= a is unnecessary:

If you include i <= a, it means the loop will also check if a is divisible by itself, which is always true (since a % a == 0 is true for any number a), and doesn't give us any useful information about whether the number is prime. */
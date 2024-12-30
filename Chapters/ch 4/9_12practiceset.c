#include <stdio.h>

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);

    int i = 2, prime = 1;
    if (a == 2)
    {
        printf("your number is a prime number");
        return 0;
    }
    do
    {
        if (a % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < a);

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
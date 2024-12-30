#include <stdio.h>

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);

    int i = 2, prime = 1;
    while (i < a)
    {
        if (a % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
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
/* Let’s see a quick example with a = 10:

Initialization:

i = 2, prime = 1.
First Iteration:

Check 10 % 2 == 0 → True.
Set prime = 0.
Execute break; → Exit the loop immediately.
*/
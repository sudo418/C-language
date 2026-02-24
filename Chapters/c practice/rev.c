#include<stdio.h>

int main()
{
    int n, rev = 0, digit;

    printf("Enter a num: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    int even_sum = 0, odd_sum = 0, even_count = 0, odd_count = 0, even_prod = 1, odd_prod = 1;


    printf("Even digits: ");
    int temp = rev;

    while (temp > 0) {
        digit = temp % 10;

        if (digit % 2 == 0)
        {
            printf("%d ", digit);
            even_sum += digit;
            even_prod *= digit;
            even_count++;
        }

        temp /= 10;
    }

    printf("\nOdd digits: ");
    temp = rev;

    while (temp > 0)
    {
        digit = temp % 10;

        if (digit % 2 != 0)
        {
            printf("%d ", digit);
            odd_sum += digit;
            odd_prod *= digit;
            odd_count++;
        }

        temp /= 10;
    }

    // Averages
    float even_avg = (float)even_sum / even_count;
    float odd_avg = (float)odd_sum / odd_count;

    // Results
    printf("\nEven sum = %d", even_sum);
    printf("\nOdd sum = %d", odd_sum);

    printf("\nEven product = %d", even_prod);
    printf("\nOdd product = %d", odd_prod);

    printf("\nEven average = %.2f", even_avg);
    printf("\nOdd average = %.2f", odd_avg);

    return 0;
}

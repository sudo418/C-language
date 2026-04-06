#include<stdio.h>

int main()
{
    // q3
    int n = 645645;
    int sum = 0, count = 0, digit = 0;
    float avg;

    int temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += digit;
        count++;
        temp /= 10;
    }
    
    avg = (float)sum / count;
    printf("The avg = %.2f\n", avg);

    // q4
    n = 56765;
    int remainder, reverse = 0;

    temp = n;

    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    
    if (n == reverse)
    {
        printf("num is palindrome\n");
    }
    else printf("num is not palindrome");

    // q5
    n = 24;
    int rem = 0, place = 1;
    long long binary = 0;

    while (n > 0)
    {
        rem = n % 2;
        binary = binary + rem * place;
        place *= 10;
        n /= 2;
    }

    printf("Binary = %lld\n", binary);
    
    // q7
    int n1 = 4, k = 1;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n1; j++)
        {
            printf("%2d ", k++);
        }
        printf("\n");
    }
    
    return 0;
}
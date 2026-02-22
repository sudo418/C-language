#include <stdio.h>

int main()
{
    int n, sum = 0, digit, count = 0;
    float avg;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;   // convert to positive
    }

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10; 
        count++;
    }

    avg = (float)sum / count;
    
    printf("sum = %d\n", sum);
    printf("avg = %.2f", avg);
    return 0;
}
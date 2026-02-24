#include<stdio.h>

int main()
{
    int n, rev = 0, digit, sum = 0, prod = 1, count = 0, temp;
    float avg;
    int sum1 = 0, prod1 = 1, count1 = 0;
    float avg1;
    printf("Enter a num: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 == 0) {
            sum += digit;
            prod *= digit;
            count++;
        } else {
            sum1 += digit;
            prod1 *= digit;
            count1++;
        }
        rev = rev * 10 + digit;
        n /= 10;
    }
    printf("%d\n", rev);
    
    avg = (float)sum/count;
    avg1 = (float)sum1/count1;

    printf("even nums: \n");
    printf("%d\n", sum);
    printf("%d\n", prod);
    printf("%.2f\n", avg);
    
    printf("odd nums: \n");
    printf("%d\n", sum1);
    printf("%d\n", prod1);
    printf("%.2f", avg1);
     
    return 0;
}
#include<stdio.h>

int main()
{
    // Q1) Print numbers from 1 to 10 -->
    int i = 1;

    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");


    // Q2) Print even numbers from 2 to 20 -->
    i = 2;  // reset

    while (i <= 20) {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;   
    }
    printf("\n");


    // Q3) Print odd numbers from 1 to 20 -->
    i = 1; // reset

    while (i <= 20) {
        printf("%d ", i);
        i += 2;   
    }
    printf("\n");


    // Q4)  Print numbers from 10 to 1 (reverse order) -->
    i = 10; // reset

    while (i > 0) {
        printf("%d ", i);
        i--;
    }
    printf("\n");


    // Q5) Print numbers from 1 to 100 divisible by 5 -->
    i = 1; // reset

    while (i <= 100) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");


    // Q6) Sum of integers from 1 to N -->
    int j = 1, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    while (j <= n)
    {
        sum += j;
        j++;
    }
    printf("Sum = %d\n", sum);


    // Q7) Sum of all even numbers between 1 and 100 -->
    j = 1, sum = 0; // reset

    while (j <= 100) {
        if (j % 2 == 0) {
            sum += j;
        }
        j++;
    }

    printf("Sum = %d\n", sum);


    // Q8) Sum of digits of a number -->
    int num ,digit;
    sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    

    // Q9) Average of n entered by user  -->
    int num1, digit1, count = 0;
    sum = 0; 
    float avg;

    printf("Enter a number: ");
    scanf("%d", &num1);

    if (num1 == 0) {
    avg = 0;
    } else {

        while (num1 != 0) {
            digit1 = num1 % 10;     
            sum += digit1;    
            num1 /= 10;       
            count ++;    
        }
        avg = (float)sum / count;
    }
    printf("Average of digits = %.2f\n", avg);


    // Q10) Sum of all multiples of 7 between 1 and 500 -->
    i = 7, sum = 0; // reset

    while (i <= 500) {
        sum += i;
        i += 7;   // optimized for multiples of 7
    }

    printf("Sum = %d\n", sum);


    // Q11) Factorial of a number -->
    int n1, k = 1, fact = 1;

    printf("Enter number: ");
    scanf("%d", &n1);

    while (k <= n1) {
        fact *= k;
        k++;
    }
    printf("Factorial = %d\n", fact);


    // Q12) Product of all odd numbers from 1 to n -->
    int number, x = 1, product = 1;

    printf("Enter n: ");
    scanf("%d", &number);

    while (x <= number) {
        if (x % 2 != 0) {
            product *= x;
        }
        x++;
    }
    printf("Product = %d\n", product);


    // Q13) Check prime number -->
    int n3;
    i = 1, count = 0;

    printf("Enter number: ");
    scanf("%d", &n3);

    while (i <= n3) {
        if (n3 % i == 0) {
            count += 1;
        }
        i++;
    }

    if (count == 2) {
        printf("Prime number\n");
    } else {
        printf("Not prime\n");
    }


    // Q14) First N Fibonacci numbers -->
    int n4, a = 0, b = 1, c;
    i = 1;

    printf("Enter n: ");
    scanf("%d", &n4);

    while (i <= n4) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    printf("\n");


    // Q15) Power of a number (x^y) -->
    int x1, y, result = 1;
    i = 1; 

    printf("Enter base and power (comma separated): ");
    scanf("%d,%d", &x1, &y);

    while (i <= y) {
        result *= x1;
        i++;
    }
    printf("Result = %d\n", result);

    return 0;
}
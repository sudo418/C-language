#include<stdio.h>

int main()
{
    // Q1) square root of n -->
    int n, i = 1;  
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i*i <= n) {
        i++;
    }
    printf("square root of %d = %d\n", n, --i);


    // Q2) prime factors of m -->
    int m;
    i = 2;    // reset
    printf("Enter a number: ");
    scanf("%d", &m);

    printf("prime factors of %d: ", m);
    while (m > 1) {
        if (m % i == 0) {
            printf("%d ", i);
            m /= i;
        } else {
            i++;
        }
    }


    // Q3) Prime factors, LCM and HCF of x & y -->
    int x, y, lcm = 1, hcf = 1;
    i = 2;
    printf("\nEnter 2 numbers (comma separated): ");
    scanf("%d,%d", &x, &y);

    printf("prime factors of %d and %d: ", x, y);
    while (x > 1 || y > 1) {
        if (x % i == 0 || y % i == 0) {
            printf("%d ", i);
            lcm *= i;

            if (x % i == 0 && y % i == 0) {
                hcf *= i;
            }

            if(x % i == 0) x /= i;
            if(y % i == 0) y /= i;
        } 
        else {
            i++;
        }
    } 

    printf("\nLCM = %d\n", lcm);
    printf("HCF = %d", hcf);

    return 0;
}
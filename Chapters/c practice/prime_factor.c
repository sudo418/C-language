#include<stdio.h>

int main()
{
    // Q1) square root of n -->
    int n, ans = 0, i = 1;
    // printf("Enter n: ");
    // scanf("%d", &n);

    // while (i*i <= n) {
    //     ans = i;
    //     i++;
    // }
    // printf("%d", ans);


    // Q2) prime factors of n -->
    i = 2;
    printf("Enter n: ");
    scanf("%d", &n);

    while (n > 1) {
        if (n % i == 0) {
            printf("%d ", i);
            n /= i;
        } else {
            i++;
        }
    }
    if (n > 1) {
        printf("%d", n);
    }


    // Q3) prime factors of m & n -->
    int m;
    i = 2;
    printf("Enter n and m (comma separated): ");
    scanf("%d,%d", &n, &m);

    while (i * i <= n, m)
    {
        
    }
    


    return 0;
}
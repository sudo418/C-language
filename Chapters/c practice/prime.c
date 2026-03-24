#include<stdio.h>

int main()
{
    // q1) Prime numbers between 1 - n:- 
    int n, i = 2;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Prime numbers from 1 to %d are:\n", n);
    while (i <= n) {
        int j = 1, count = 0;
        
        while (j <= i) {
            if (i % j == 0) {
                count++;
            }
            j++;
        }

        if (count == 2) {
            printf("%d ", i);
        }
        i++;
    }

    // q2) Prime Numbers between m - n:-
    int m;
    printf("\nEnter m and n: ");
    scanf("%d %d", &m, &n);
    
    printf("Prime numbers from %d to %d are:\n", m, n);
    while (m <= n) {
        int j = 1, count = 0;

        while (j <= m) {
            if (m % j == 0) {
                count++;
            }
            j++;
        }
        
        if (count == 2) {
            printf("%d ", m);
        }
        m++;
    }
    
    return 0;
}
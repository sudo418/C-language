#include<stdio.h>

int main()
{
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
    
    return 0;
}
#include<stdio.h>

int main()
{
    // Q1) print 1 - 100 -->
    int i = 1;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    
    
    // Q2) print 100 - 1 -->   
    i = 100;  // reset
    while (i > 0) {
        printf("%d ", i);
        i--;
    }
    
    
    // Q3) print 1 - n -->
    int n;
    i = 1;  // reset
    printf("Enter the num till u wanna print: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    
    
    // Q4) print n - 1 -->
    int n1;
    printf("Enter the num till u wanna print(in descending order): ");
    scanf("%d", &n1);

    while (n1 > 0) {
        printf("%d ", n1);
        n1--;
    }


    // Q5) print m - n -->
    int n2, m;
    printf("Enter the starting and ending value (comma separated): ");
    scanf("%d,%d", &n2, &m);

    while (n2 <= m) {
        printf("%d ", n2);
        n2++;
    }
    
    
    //Q6) print n - m -->
    int n3, m1;
    printf("Enter the starting and ending value (comma separated): ");
    scanf("%d,%d", &n3, &m1);

    while (n3 >= m1) {
        printf("%d ", n3);
        n3--;
    }


    // Q7) print 1 - 100 even/odd -->
    int j = 1;

    printf("Even numbers: ");
    while(j <= 100) {
        if(j % 2 == 0) {
            printf("%d ", j);
        }
        j++;
    }

    j = 1; // reset
    
    printf("\nOdd numbers: ");
    while(j <= 100) {
        if(j % 2 != 0) {
            printf("%d ", j);
        }
        j++;
    }
    
    
    // Q8 print 100 - 1 even numbers -->
    int j2 = 100;
    while(j2 > 0) {
        if(j2 % 2 == 0) {
            printf("%d ", j2);
        }
        j2--;
    }
    
    
    // Q9) m - n even/odd numbers -->
    int n4, m2,k;
    printf("Enter the starting and ending value (comma separated): ");
    scanf("%d,%d", &n4, &m2);

    k = n4;

    printf("Even numbers from %d to %d: ", n4, m2);
    while(k <= m2) {
        if(k % 2 == 0) {
            printf("%d ", k);
        }
        k++;
    }
    
    k = n4; // reset
    
    printf("\nOdd numbers from %d to %d: ", n4, m2);
    while(k <= 100) {
        if(k % 2 != 0) {
            printf("%d ", k);
        }
        k++;
    }
    

    // Q10) print 1 - 500 only multiples of n -->
    int x = 1, y;

    printf("Enter any num between 1 - 10: ");
    scanf("%d", &y);

    if(y <= 0 || y > 10) {
        printf("Invalid input");
    } 
    else {
        x = y;  // start from first multiple
        while (x <= 500) {
            if (x % y == 0) {
                printf("%d ", x);
            }
            x++;
        } 
    }
    return 0;
}
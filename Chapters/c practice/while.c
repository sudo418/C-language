#include<stdio.h>

int main()
{
    // Q1) print 1 - 100 -->
    int i = 1;
    while (i <= 100)
    {
        printf("%d ", i);
        i++;
    }
    
    
    // Q2) 
    int i1 = 100;
    while (i1 > 0)
    {
        printf("%d ", i1);
        i1--;
    }
    
    
    // Q3)
    int i2 = 1, n;
    printf("Enter the num till u wanna print: ");
    scanf("%d", &n);

    while (i2 <= n)
    {
        printf("%d ", i2);
        i2++;
    }
    
    
    // Q4)
    int n1;
    printf("Enter the num till u wanna print(in descending order): ");
    scanf("%d", &n1);

    while (n > 0)
    {
        printf("%d ", n1);
        n1--;
    }


    // Q5)
    int n2, m;
    printf("Enter the starting and ending value (comma separated): ");
    scanf("%d,%d", &n2, &m);

    while (n2 <= m)
    {
        printf("%d ", n2);
        n2++;
    }
    
    
    //Q6)
    int n3, m1;
    printf("Enter the starting and ending value (comma separated): ");
    scanf("%d,%d", &n3, &m1);

    while (n3 >= m1)
    {
        printf("%d ", n3);
        n3--;
    }


    // Q7)
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
    
    
    // Q8
    int j2 = 100;
    while(j2 > 0) {
        if(j2 % 2 == 0) {
            printf("%d ", j2);
        }
        j2--;
    }
    
    
    // Q9)
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
    

    // Q10) 
    int x = 1, y;

    printf("Enter any num between 1 - 10: ");
    scanf("%d", &y);

    if(y <= 0 || y > 11) {
        printf("Invalid input");
    } 
    else {
        x = y;  // start from first multiple
        while (x <= 500)
        {
            if (x % y == 0)
            {
                printf("%d ", x);
            }
            x++;
        } 
        /* while(x <= 500) {
            printf("%d ", x);
            x += y; // jump directly to next multiple  
        } */
    
    }
    return 0;
}
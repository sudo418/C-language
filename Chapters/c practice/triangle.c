#include<stdio.h>

int main()
{
    int n = 4;
    // printf("Enter n: ");
    // scanf("%d", &n);

    // q1) 1 12 123 1234
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");


    // q2) 1 22 333 4444 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");
    
    // q3) 4 33 222 1111
    int num = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
        }
        num--;
        printf("\n");
    }
    printf("\n");

    // q4) 1 23 456 7,8,9,10
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
    printf("\n");

    // q5) 10  9,8   7,6,5  4,3,2,1
    num = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%-3d ", num--);
        }
        printf("\n");
    }
    printf("\n");

    // q6) 1  3,5  7,9,11  13,15,17,19
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%-2d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q7) 19  17,15  13,11,9  7,5,3,1
    int total = n * (n + 1) / 2;
    num = 2 * total - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%-3d ", num);
            num -= 2;
        }
        printf("\n");
    }   
    printf("\n");

    // q8)  2  4,6  8,10,12  14,16,18,20
    num = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%-2d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");
    
    // q9) 20  18,16  14,12,10  8,6,4,2
    num = n * (n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%-3d ", num);
            num -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q10) 1,2,3,4  1,2,3  1,2  1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            printf("%-2d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // another method of doing the above prob :-
    int count = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            printf("%-2d ", j);
        }
        count--;
        printf("\n");
    }
    printf("\n");

    // q11)  1,1,1,1  2,2,2  3,3,3  4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    // q12) 4,4,4,4  3,3,3  2,2  1
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    // q13)  1,2,3,4  5,6,7  8,9  10
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            printf("%-2d ", num++);
        }
        printf("\n");
    }
    printf("\n");

    // q14)   10,9,8,7  6,5,4  3,2  1
    num = n * (n + 1) / 2; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            printf("%-3d ", num--);
        }
        printf("\n");
    }
    printf("\n");

    // q15)  1,3,5,7  9,11,13  15,17  19
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            printf("%-2d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q16)   19,17,15,13  11,9,7  5,3  1  
    num = n * (n + 1) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            printf("%-3d ", num);
            num -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q17)  2,4,6,8  10,12,14  16,18  20
    num = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            printf("%-3d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q18)  20,18,16,14  12,10,8  6,4  2
    num = n * (n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            printf("%-3d ", num);
            num -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q19)  1  21  321  4321
    for (int i = 1; i <= n; i++)
    {
        int num = 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
    printf("\n");

    // q20)  1  22  333  4444
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    // q21)  4  33  222  1111
    num = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
        }
        num--;
        printf("\n");
    }
    printf("\n");

    // q22)  1  23  456  7,8,9,10
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
    printf("\n");

    // q23)  10  9,8  7,6,5  4,3,2,1  
    num = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num--);
        }
        printf("\n");
    }    
    printf("\n");

    // q24)  1  3,5  7,9,11  13,15,17,19
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%-2d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q25)  19  17,15  13,11,9  7,5,3,1
    num = n * (n + 1) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%-2d ", num);
            num -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q26)  2  4,6  8,10,12  14,16,18,20
    num = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%-2d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q27)  20  18,16  14,12,10  8,6,4,2
    num = n * (n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%-2d ", num);
            num -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q28)  4321  321  21  1
    num = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        
        for (int j = num; j > 0; j--)
        {
            printf("%d ", j);
        }
        num--;
        printf("\n");
    }
    printf("\n");

    // q29)  1111  222  33  4
    num = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        
        for (int j = num; j > 0; j--)
        {
            printf("%d ", i);
        }
        num--;
        printf("\n");
    }
    printf("\n");

    // q30)   4444  333  22  1
    num = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        
        for (int j = num; j > 0; j--)
        {
            printf("%d ", num);
        }
        num--;
        printf("\n");
    }
    printf("\n");

    // q31) 1,2,3,4  5,6,7  8,9  10
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
    printf("\n");

    // q32)  10,9,8,7  6,5,4  3,2  1
    num = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("   ");
        }
        
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%2d ", num--);
        }
        printf("\n");
    }
    printf("\n");

    // q33)  1,3,5,7  9,11,13  15,17  19
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("   ");
        }
        
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%2d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q34)  19,17,15,13  11,9,7  5,3  1
    num = n * (n + 1) -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("   ");
        }
        
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%2d ", num);
            num -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q35)  2,4,6,8  10,12,14  16,18  20
    num = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("   ");
        }

        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%2d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q36)  20,18,16,14  12,10,8  6,4  2
    num = n * (n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("   ");
        }
        
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%2d ", num);
            num -= 2;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
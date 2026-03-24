#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // q1   1234 1234
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // q2  1111 2222
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    // q3   4444 3333
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    // q4    4321 4321
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // q5    1357 1357
    for (int i = 1; i <= n; i++)
    {
        int val = 1;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", val);
            val += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q6  7531 7531
    for (int i = 1; i <= n; i++)
    {
        int val = 2 * n - 1;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", val);
            val -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q7   2468 2468
    for (int i = 1; i <= n; i++)
    {
        int val = 2;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", val);
            val += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q8  8642 8642
    for (int i = 1; i <= n; i++)
    {
        int val = 2 * n;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", val);
            val -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q9   1234 5678
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%2d ", num++);
        }
        printf("\n");
    }
    printf("\n");

    // q10  16,15,14,13
    num = n * n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%2d ", num--);
        }
        printf("\n");
    }
    printf("\n");

    // q11   1357 9,11,13,15
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%2d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");

    // 12   31,29,27,25
    num = 2 * n * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%2d ", num);
            num -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q13    2468 10,12,14,16
    num = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%2d ", num);
            num += 2;
        }
        printf("\n");
    }
    printf("\n");

    // q14    32,30,28,26
    num = 2 * n * n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%2d ", num);
            num -= 2;
        }
        printf("\n");
    }
    printf("\n");

    // q15    ABCD ABCD
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    printf("\n");

    // q16   AAAA BBBB
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }
    printf("\n");

    // q17    ABCD EFGH
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    printf("\n");

    // q18   PONM LKJI
    ch = 'A' + (n * n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", ch--);
        }
        printf("\n");
    }
    return 0;
}
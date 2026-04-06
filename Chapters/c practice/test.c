#include <stdio.h>

int main()
{
    int n = 4;

    // q1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    // q2
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    printf("\n");

    // q3
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                if ((i + j) % 2 == 0)
                {
                    printf("1 ");
                }
                else
                    printf("0 ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // q4
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%d ", j);
            }
            else printf("  ");
        }

        for (int k = 2; k <= n; k++)
        {
            if (k <= i)
            {
                printf("%d ", k);
            }
            
        }
        printf("\n");
    }

    // q5
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
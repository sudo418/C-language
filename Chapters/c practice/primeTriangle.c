#include <stdio.h>

int main()
{
    int n = 4;
    int num = 2; 

    for (int i = 1; i <= n; i++)
    {
        int count = 0;

        while (count < i)
        {
            int isPrime = 1;

            for (int j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    isPrime = 0;
                }
            }

            if (isPrime)
            {
                printf("%d ", num);
                count++;
            }
            num++;
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char a, char b)
{
    if (a == b)
    {
        return 0;
    }

    if (a == 's' && b == 'p')
    {
        return -1;
    }
    else if (a == 'p' && b == 's')
    {
        return 1;
    }

    if (a == 's' && b == 'c')
    {
        return 1;
    }
    else if (a == 'c' && b == 's')
    {
        return -1;
    }

    if (a == 'c' && b == 'p')
    {
        return 1;
    }
    else if (a == 'p' && b == 'c')
    {
        return -1;
    }
}

int main()
{
    char comp;

    int number;
    srand(time(0));
    number = rand() % 100 + 1;

    if (number <= 33)
    {
        comp = 's';
    }
    else if (number <= 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 'c';
    }

    char a;
    printf("Enter s for stone p for paper and c for sissors : ");
    scanf("%c", &a);

    printf("Computer chose: %c\n", comp);

    int num = game(a, comp);

    if (num == 1)
    {
        printf("you win");
    }
    else
    {
        printf("you lose");
    }

    return 0;
}
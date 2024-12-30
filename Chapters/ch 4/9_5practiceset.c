// Sum of first n given natural numbers using while loop :-

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a num : ");
    scanf("%d", &a);

    int i = 1, sum = 0;

    while (i <= a)
    {
        sum += i;
        i++;
    }
    printf("%d \n", sum);

// Sum of first n given natural numbers using do while loop :-
    int b;

    printf("Enter a num : ");
    scanf("%d", &b);

    int z = 1, sum1 = 0;

    do
    {
        sum1 += z;
        z++;
    } while (z <= b);
    printf("%d", sum1);

    return 0;
}
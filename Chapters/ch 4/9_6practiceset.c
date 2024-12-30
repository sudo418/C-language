// Sum of first n given natural numbers using do for loop :-

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);

    int i, sum = 0;

    for(i=1;i<=a;i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
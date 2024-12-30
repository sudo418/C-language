#include<stdio.h>

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);

    int i, factorial = 1;
    
    for(i=1;i<=a;i++)
    {
        factorial = factorial*i;
    }
    printf("%d", factorial);

    return 0;
}
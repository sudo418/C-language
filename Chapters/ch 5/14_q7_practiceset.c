#include<stdio.h>

void pattern(int n);

int main()
{
    int a;

    printf("Enter a num : ");
    scanf("%d", &a);
    
    pattern(a);

    return 0;
}

void pattern(int n)
{
    if(n == 1)
    {
        printf("*\n");
        return;
    }

    pattern(n-1);

    for(int i=1;i<(2*n-1);i++)
    {
        printf("*");
    }
    printf("\n");
 
}
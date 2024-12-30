#include<stdio.h>

int sum(int x);

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);
    int result = sum(a);
    printf("%d", result);
    return 0;
}

int sum(int x)
{
    if(x == 1)
    {
        return 1;
    }
    else
    {
    int f = x + sum(x-1);
    return f; 
    }
}
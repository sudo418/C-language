#include<stdio.h>

int fact(int x);

int main()
{
    int a; 

    printf("Enter a num : ");
    scanf("%d", &a);

    int result = fact(a);
    
    printf("%d", result);
    return 0;
}

int fact(int x)
{
    if(x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
    int f = x * fact(x-1);
    return f; 
    }
}
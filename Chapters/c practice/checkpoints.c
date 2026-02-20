#include<stdio.h>

int main()
{
    //Q1)
    int a,b;
    printf("Enter 2 numbers (comma seperated): ");
    scanf("%d,%d", &a, &b);

    if (a == b)
    {
        printf("both are equal\n");
    } else if (a > b)
    {
        printf("a = %d is max\n", a);
    } else {
        printf("b = %d is max\n", b);
    }
    
    
    // Q2)  
    int a1, b1, c1, max;
    printf("Enter 3 numbers (comma seperated): ");
    scanf("%d,%d,%d", &a1, &b1, &c1);

    if (a1 == b1 && b1 == c1)
    {
        printf("all are equal\n");
    } 
    else {
        max = a1;
        if (b1 > max) {
            max = b1;
        } 
        if (c1 > max) {
            max = c1;    
        }
    }
    printf("max is %d\n", max);

    return 0;
}
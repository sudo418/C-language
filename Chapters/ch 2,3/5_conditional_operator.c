#include<stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    // oneliner if statement or short hand if else
    // Ternary operator or Conditional operator
    (a<5) ? printf("a is less than 5") : printf("a is greater than 5");
    return 0;
}
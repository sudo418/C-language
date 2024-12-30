#include <stdio.h>

int sum(int a, int b);    // a and b are parameters. Definition: Parameters are variables that are defined in the function declaration or definition. They act as placeholders for the values that will be passed into the function.

int main()
{
    int c = sum(2, 5);     // here 2 and 5 are arguments. Definition: Arguments are the actual values or expressions that are passed to the function when it is called.
    printf("the value of sum is %d", c);
    return 0;
}

int sum(int a, int b)    // you don't need to re-declare a and b inside the function body because they are already declared as parameters when you define the function.
{
    // int a,b;        ----->  This is wrong cuz see above 
    int result;
    result = a + b;
    return result;
}
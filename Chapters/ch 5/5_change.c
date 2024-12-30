#include<stdio.h>

int change(int a);

int main()
{
    int b = 44;
    change(b);
    printf("the value of b is %d\n", b); // b is still 44 because the original variable b in main() was never modified by the change function. The changes made to a (which was just a copy of b) do not affect the original b in main().
    //The return value of 77 is not captured or assigned back to b, so it doesn't affect the value of b.

    b = change(b);  // Capture the returned value and assign it to b
    printf("The value of b is %d\n", b);  // Now b will be 77
    return 0;
}

int change(int a)
{
    a = 77;
    return a;
}
// In the program you provided, the function change() modifies the value of the parameter a but does not affect the value of b in main(). This is because C uses "pass by value", meaning the function change() gets a copy of the value of b, not the actual variable itself.




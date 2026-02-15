#include <stdio.h>

int main()
{

    //# Global → Declared outside all functions (accessible everywhere)
    //# Outer  → Declared in an outer block, accessible only inside that function

    int a = 5; // 'a' declared in main scope

    // Curly brackets { } create a new scope (new area).
    {
        printf("%d\n", a); // no a name variable inside local so it uses 'a' from outer scope (main)
    }

    {
        int a = 6; // new local a variable created inside new scope (shadowing outer 'a')
        printf("%d\n", a);
    }

    {
        a = 9; // modifying outer a
        printf("%d\n", a);
    }

    printf("%d\n", a);
    return 0;
}
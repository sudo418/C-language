#include<stdio.h>

void display();  // Function Prototype (Declaration)

int main()
{
    display();   // Function Call
    return 0;
}

void display()        // Function Defination
{
    printf("i am display");
}

/* Function Prototype (Declaration): When you declare a function (like void display();), you're telling the compiler about the function's existence before it's defined or called. The semicolon (;) is required here because this is just a declaration, not the actual body of the function. The semicolon indicates the end of the statement.  */
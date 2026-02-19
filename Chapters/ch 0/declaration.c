#include<stdio.h>

int main()
{
    //# Basic declaration + allocation
    int a;  // Declaration + Allocation: variable 'a' is created and memory is reserved

    //# Initialization
    int b = 10;  // Declaration + Allocation + Initialization: variable 'b' is created, memory allocated, and value 10 assigned

    //# Separate assignment
    int c;  // Declaration + Allocation
    c = 10;  // Assignment: value is given after declaration (not initialization)

    //# extern (only declaration)
    extern int d;  // Declaration only: no memory allocation here, variable is defined elsewhere

    //# Dynamic allocation
    int *p;  // Declaration: pointer variable created
    p = (int*)malloc(sizeof(int));  // Allocation: memory is reserved at runtime using malloc

    return 0;
}
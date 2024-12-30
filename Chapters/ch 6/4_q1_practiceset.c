#include<stdio.h>

int main()
{
    int a = 55;
    int *ptr = &a;  //Referencing: Getting the address of variable 'a' and storing it in pointer 'ptr'.
    printf("The address of a is %u\n", &a); 

    printf("The value of a is %d\n", *(&a));  
    printf("The value of a is %d\n", a);  
    printf("The value of a is %d\n", *ptr);  // Dereferencing: Accessing the value stored at the address 'ptr' points to.
    return 0;
}
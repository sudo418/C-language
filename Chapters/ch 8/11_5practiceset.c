#include<stdio.h>

void strcpy(char *ptr1, char *ptr)
{
    int i = 0;
    while(ptr[i] != '\0')  // see below
    {
        ptr1[i] = ptr[i];
        i++;
    }
    ptr1[i] = '\0';

}

int main()
{
    char str[10];
    char str1[10];

    printf("Enter your name : ");
    scanf("%9s", str); // Limit input to 9 characters to prevent buffer overflow

    strcpy(str1, str);

    printf("The new string is %s", str1);

    return 0;
}

/*
while(*ptr != '\0')  ---> error
    {
        ptr1[i] = ptr[i];
        i++;
    }
    ptr1[i] = '\0';
Inside the loop, you're accessing ptr[i] and ptr1[i] instead of incrementing ptr and ptr1. This mismatch could lead to unintended behavior.
If the function is called with mismatched logic, it could result in infinite loops or corrupted memory, causing the program to behave unpredictably.

Change the loop to use pointer arithmetic consistently, or if you're using indexing, modify the loop condition appropriately:

Pointer Arithmetic Version:

void strcpy(char *ptr1, char *ptr) {
    while (*ptr != '\0') {
        *ptr1 = *ptr;  
        ptr++;         
        ptr1++;        
    }
    *ptr1 = '\0';  
}

Index-based Version:

void strcpy(char *ptr1, char *ptr) {
    int i = 0;
    while (ptr[i] != '\0') {  // Use index-based condition
        ptr1[i] = ptr[i];     // Copy character by index
        i++;
    }
    ptr1[i] = '\0';  // Append null terminator
}
*/
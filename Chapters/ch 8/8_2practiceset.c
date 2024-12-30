#include<stdio.h>
#include <string.h>

int main()
{
    char str[10];
    char str1[10];

    printf("Enter the first string : ");
    scanf("%s", str);

    char c;
    int i = 0;

    printf("Enter the second string : \n");

    while(c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str[i] = c;
        i++;
    }
    str1[i] = '\0';  // Null-terminate str1

    printf("The first string is : %s\n", str);
    printf("The second string is : %s", str1);
    
    return 0;
} 
/*
'\n' (Single Quotes):

This is a character literal.
It represents a single newline character.
The type of '\n' is char.

"\n" (Double Quotes):

This is a string literal.
It represents a string containing one character: the newline, followed by the null terminator (\0), which marks the end of the string.

Use '\n' when working with individual characters.
Use "\n" when working with strings
*/


/*
When using printf followed by scanf multiple times in a row, sometimes scanf may not work as expected due to leftover characters in the input buffer.
This often happens when switching between different input formats like "%s" and "%c"
In C, fflush(stdin) is often used to clear the input buffer, especially to discard leftover inputs.
*/
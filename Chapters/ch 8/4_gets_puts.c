#include<stdio.h>

int main()
{
    char str[10];

    printf("Enter your name : ");
    gets(str);  // --> is a function which can be used to receive (input) multiple-word string.

    puts(str);  //--> is a function which can be used to output multiple-word string ollowed by a newline character


    printf("Your name is : %s", str);
    return 0;
}
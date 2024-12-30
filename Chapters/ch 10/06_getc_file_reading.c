#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "r");

    if (ptr == NULL)
    {
        printf("Error: Could not open file.\n");
        return 1; // Error encountered
    }

    char c;
    c = fgetc(ptr);   // Initialize c by reading the first character

    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);   // Read the next character
    }
    fclose(ptr);

    return 0;
}
/*
Implications of return 1 :-
--> When a program returns 1 (or a non-zero value), it can be detected in the terminal or a calling script.
--> Example in a shell environment:
./your_program
echo $? # Prints the exit status of the last command
--> If the program returns 1, $? will output 1.
--> If the program returns 0, $? will output 0.
*/
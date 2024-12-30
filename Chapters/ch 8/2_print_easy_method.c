#include <stdio.h>

int main()
{
    char str[] = "Chirayu";
    printf("%s\n", str);

    char *ptr = "Avi";
    printf("%s\n", ptr);

    return 0;
}

/* Summary of %s Behavior
--> %s assumes the pointer points to the start of a null-terminated string.
--> Instead of printing the address, it prints the string at that address.

To summarize:
--> %s interprets the pointer as a string and prints the characters.
--> To print the address stored in the pointer, use %p.
*/
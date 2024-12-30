#include<stdio.h>

int main()
{
    char str[] = "Chirayu";
    printf("%s\n", str);

    // str = "hello";  // This is NOT allowed and will cause a compilation error
    // printf("%s\n", str);

    char *ptr = "Avi";
    printf("%s\n", ptr);

    ptr = "orange";  // This is allowed reason is explained down below
    printf("%s\n", ptr);

    return 0;
}
/*
Key Difference:

>> Pointer (ptr): A pointer can be reassigned to point to different string literals or memory locations. Example:

char *ptr = "Avi";
ptr = "hello";  // This is allowed, changing `ptr` to point to "hello"

Not Modifiable: Since ptr points to a string literal, attempting to modify the contents (e.g., ptr[0] = 'B';) will result in undefined behavior and may cause a runtime error (segmentation fault).

Memory Allocation: The string literal "Avi" is stored in a read-only section of memory (often in the "text" or "data" segment) that is separate from the stack.

Lifetime: String literals have a static lifetime, meaning they exist for the duration of the program.



>> Array (str): An array name represents a fixed address, so you cannot reassign str to point to a different string. Example:

char str[] = "Chirayu";
str = "hello";  // This is NOT allowed and will cause a compilation error

Modifying the Contents: You can modify individual elements of the array, such as str[0] = 'B';, which changes the content of the array in memory. After this assignment, str would contain "Bhirayu".

Memory Allocation: The string "Chirayu" is stored in a block of memory allocated on the stack, with each character stored in consecutive memory locations.

Lifetime: The array str will exist for the lifetime of the main function, as it is allocated on the stack.
*/
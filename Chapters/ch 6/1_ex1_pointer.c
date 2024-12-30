#include<stdio.h>

int main()
{
    int i = 55;
    int *j = &i; // j will store the address of i

    // j is a pointer and j points to i

    // &  ---> address of operator. It gives the address of given variable

    printf("The value of i is : %d\n", i); 

    printf("The address of i is : %u\n", &i);
    printf("The address of i is : %p\n", &i);
    printf("The address of j is : %p\n", &j);

    printf("The address of i is : %u\n", j);

    // if the address is in hexadecimal then %p will show in hexadecimal so thats why sometimes we use %u.

    //In C, addresses or memory locations are typically represented as pointers, which are unsigned values (since memory addresses are non-negative). The %u format specifier can be used to print the numeric value of an address, particularly when the pointer is cast to an unsigned integer type.
    // However, a more appropriate format for printing memory addresses is %p, which is specifically designed for pointer types and will print the address in a readable hexadecimal format.

    // Ques) Why not %d in line 18?
    // Ans) Why %u and Not %d: Memory addresses are unsigned: Memory addresses are inherently non-negative, and using %d, which expects a signed integer, could misinterpret the large memory address as a negative number due to how signed integers are represented in memory.

    //Addresses are large values: On many systems (especially 64-bit systems), the memory address values can be quite large, and using %d could cause an overflow when the address exceeds the maximum range of signed integers.

    // *  ----> value at address operator. It is used to access or modify the value stored at a specific memory address, which is held by a pointer.

    printf("The value at i is : %d\n", *(&i));  // value at address of i
    printf("The value at j is : %d\n", *(&j));  // value at address of j

    printf("The value i is : %d\n", *j);  //value at the memory address that j is pointing to

    // When you use *j, you dereference the pointer j, which means you access the value at the memory address that j is pointing to. Since j points to i, *j will give you the value of i, which is 55.
  
    return 0;
}

/* Pointer types :-
Why Have Pointers to Different Types?
Size of Data Types: Each data type in C occupies a different amount of memory. For example:

int typically occupies 4 bytes.
char occupies 1 byte.
float typically occupies 4 bytes.
The type of pointer tells the compiler how many bytes to read or manipulate at the memory location. For example:

A pointer to int (int *p) knows it needs to access 4 bytes of memory at the address it points to.
A pointer to char (char *p) knows it only needs to access 1 byte of memory at the address it points to.  */
#include<stdio.h>

void encrypt(char *ptr)
{
    while(*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }

}

int main()
{
    char str[] = "hello world";

    encrypt(str);

    printf("The encrypted string is %s", str);

    return 0;
}

// In the function encrypt(char *ptr), you iterate through the string and modify each character.
// Since str[] is a writable array, modifying *ptr = *ptr + 1 works without any issues.
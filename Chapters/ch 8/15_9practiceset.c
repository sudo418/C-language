#include <stdio.h>

int exist(char *ptr, char c)
{
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            return 1;
        }
        ptr++;
    }
    return 0;
}

int main()
{
    char str[] = "chirayu";

    int count = exist(str, 'h');

    if (count == 1)
    {
        printf("The character is present in the string");
    }
    else
    {
        printf("The character is not present in the string");
    }
    return 0;
}
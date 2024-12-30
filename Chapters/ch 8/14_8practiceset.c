#include <stdio.h>

int occurance(char *ptr, char c)
{
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char str[] = "chirayuuu";

    int count = occurance(str, 'u');

    printf("Occurance = %d", count);
    return 0;
}
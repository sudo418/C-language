#include <stdio.h>

int strlength(char *ptr)
{
    int length = 0;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    return length;
}

int main()
{
    char str[10];

    printf("Enter the string : ");
    scanf("%s", str);

    int i = strlength(str);

    printf("The length of the string is %d", i);

    return 0;
}
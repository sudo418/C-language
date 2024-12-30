#include <stdio.h>

void decrypt(char *ptr)
{
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char str[] = "ifmmp!xpsme";

    decrypt(str);

    printf("The decrypted string is %s", str);

    return 0;
}
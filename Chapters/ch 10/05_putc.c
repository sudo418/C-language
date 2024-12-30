#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("integration.txt", "w");

    fputc('c', ptr);
    fputc('c', ptr);
    fputc('c', ptr);

    return 0;
}
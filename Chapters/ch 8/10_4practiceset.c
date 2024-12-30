#include <stdio.h>

void slice(char *ptr, int m, int n)
{
    int i = 0;
    while ((m + i) <= n)
    {
        ptr[i] = ptr[m + i];
        i++;
    }
    ptr[i] = '\0';
}

int main()
{
    char str[] = "chirayu";
    slice(str, 1, 4);

    printf("%s", str);
    return 0;
}
/*
Why Null-Termination is Important
In C, strings are arrays of characters terminated by '\0'. If you don't add the null character after slicing, functions like printf may keep printing garbage values beyond the intended slice, causing undefined behavior.
*/
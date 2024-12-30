#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "chirayu";
    int a = strlen(str);

    printf("The length of the string is %d\n", a);

    char *str1 = "avi"; 
    // char *str2 = "hello";   -----> wrong approch. error
    char str2[10] = "hello";

    strcpy(str2, str1);

    printf("The string is %s", str2);

    return 0;
}
// str1 points to "avi", and str2 points to "hello".
// Both "avi" and "hello" are stored in a special part of memory that is read-only.
// This means you can look at the values they hold, but you can't change them.
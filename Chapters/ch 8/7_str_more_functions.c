#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "avi";
    char str1[10] = "hello";

    strcat(str1, str);

    printf("The str1 is now %s\n", str1); // output will have no space in between

    int val = strcmp(str1, str);

    printf("On comparing the two stings we get the val %d ", val);

    return 0;
}
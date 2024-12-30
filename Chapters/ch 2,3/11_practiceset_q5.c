#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122)          // 97 - 112 => a-z ASCII Values
    {
        printf("%c is lower case", ch);
    }
    else {
        printf("%c is not lower case", ch);
    }
    return 0;
}
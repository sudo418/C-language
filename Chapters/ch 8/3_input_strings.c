#include<stdio.h>

int main()
{
    char str[10];

    printf("Enter your name : ");
    scanf("%s",str);

    printf("Your name is %s", str);

    return 0;
}
// scanf automatically adds \0 when the enter key is pressed.

// scanf can not be used for taking multi-word strings with spaces. For example if u will input avi shah it will only give avi as an output.

/* 
The &str part is unnecessary when using scanf to input a string. This is because:

--> str is already the name of the array, which acts as a pointer to the first element of the array (i.e., &str[0]). Adding & creates a mismatch. 
*/
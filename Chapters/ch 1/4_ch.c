#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any char : ");
    scanf("%c", &ch);

    if (ch == 'a')
    {
        printf("apple\n");
    } else {
        printf("input is not matched\n");
    }

    char ch1;
    printf("Enter any char : ");
    scanf(" %c", &ch1); 
    /* 
    !scanf("%c", &ch1); error cuz 
    --> You actually press: char + ENTER 
    --> ENTER adds a newline character (\n) to the input buffer.
    --> After first input, '\n' remains in buffer. Second scanf("%c") reads that '\n', so it doesn't wait for user input and condition fails.
    --> %d, %f, etc automatically skip whitespace
    --> %c does NOT skip whitespace  */

    if (ch1 == 'b')
    {
        printf("ball\n");
    } else {
        printf("input is not matched\n");
    }
    
    return 0;
}
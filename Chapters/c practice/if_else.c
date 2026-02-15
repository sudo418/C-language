#include<stdio.h>

int main()
{
    // // q1
    // int a;
    // printf("Enter num : ");
    // scanf("%d", &a);

    // if (a>10)
    // {
    //     printf("num is greater than 10\n");
    // } else {
    //     printf("num is not greater than 10\n");
    // }
    
    // //q2
    // int b;
    // printf("Enter num : ");
    // scanf("%d", &b);

    // if (b>67)
    // {
    //     printf("num is greater than 67\n");
    // } else {
    //     printf("num is not greater than 67\n");
    // }

    // //q3
    // int c;
    // printf("Enter num : ");
    // scanf("%d", &c);

    // if (c % 2 == 0)
    // {
    //     printf("num is divisible by 2\n");
    // } else {
    //     printf("num is not divisible by 2\n");
    // }

    // //q4
    // int d;
    // printf("Enter num : ");
    // scanf("%d", &d);

    // if (d % 5 == 0)
    // {
    //     printf("num is divisible by 5\n");
    // } else {
    //     printf("num is not divisible by 5\n");
    // }

    //q5
    char ch;
    printf("Enter any char : ");
    scanf("%c", &ch);

    if (ch == 'a')
    {
        printf("apple\n");
    } else {
        printf("input is not matched\n");
    }

    //q6
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
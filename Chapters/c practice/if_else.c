#include <stdio.h>

int main()
{
    // q1
    int a;
    printf("Enter num : ");
    scanf("%d", &a);

    if (a > 10)
    {
        printf("num is greater than 10\n");
    }
    else
    {
        printf("num is not greater than 10\n");
    }

    // q2
    int b;
    printf("Enter num : ");
    scanf("%d", &b);

    if (b > 67)
    {
        printf("num is greater than 67\n");
    }
    else
    {
        printf("num is not greater than 67\n");
    }

    // q3
    int c;
    printf("Enter num : ");
    scanf("%d", &c);

    if (c % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }

    // q4
    int d;
    printf("Enter num : ");
    scanf("%d", &d);

    if (d % 5 == 0)
    {
        printf("num is divisible by 5\n");
    }
    else
    {
        printf("num is not divisible by 5\n");
    }

    // q5
    char ch;
    printf("Enter any char : ");
    scanf(" %c", &ch);

    if (ch == 'a')
    {
        printf("apple\n");
    }
    else
    {
        printf("input is not matched\n");
    }

    // q6
    char ch1;
    printf("Enter any char : ");
    scanf(" %c", &ch1);

    if (ch1 == 'b')
    {
        printf("ball\n");
    }
    else
    {
        printf("input is not matched\n");
    }

    // q7
    char ch2;
    int flag = 0;

    printf("Enter any char (vowel check): ");
    scanf(" %c", &ch2);

    if (ch2 == 'a')
        flag = 1;
    if (ch2 == 'e')
        flag = 1;
    if (ch2 == 'i')
        flag = 1;
    if (ch2 == 'o')
        flag = 1;
    if (ch2 == 'u')
        flag = 1;

    if (flag == 1)
        printf("vowel\n");
    else
        printf("not vowel\n");

    // q8
    char ch3;
    flag = 0; // flag reset

    printf("Enter a character : ");
    scanf(" %c", &ch3);

    if (ch3 == 'q')
        flag = 1;
    if (ch3 == 'w')
        flag = 1;
    if (ch3 == 'e')
        flag = 1;
    if (ch3 == 'r')
        flag = 1;
    if (ch3 == 't')
        flag = 1;
    if (ch3 == 'y')
        flag = 1;
    if (ch3 == 'u')
        flag = 1;
    if (ch3 == 'i')
        flag = 1;
    if (ch3 == 'o')
        flag = 1;
    if (ch3 == 'p')
        flag = 1;

    if (flag == 1)
        printf("upper line\n");
    else
        printf("input not matched\n");

    // q9
    char ch4;
    flag = 0;

    printf("Enter a character: ");
    scanf(" %c", &ch4);

    if (ch4 == 'a')
        flag = 1;
    if (ch4 == 's')
        flag = 1;
    if (ch4 == 'd')
        flag = 1;
    if (ch4 == 'f')
        flag = 1;
    if (ch4 == 'g')
        flag = 1;
    if (ch4 == 'h')
        flag = 1;
    if (ch4 == 'j')
        flag = 1;
    if (ch4 == 'k')
        flag = 1;
    if (ch4 == 'l')
        flag = 1;

    if (flag == 1)
        printf("middle line\n");
    else
    {
        printf("input not matched\n");
    }

    // q10
    char ch5;
    flag = 0;

    printf("Enter a character: ");
    scanf(" %c", &ch5);

    if (ch5 == 'z')
        flag = 1;
    if (ch5 == 'x')
        flag = 1;
    if (ch5 == 'c')
        flag = 1;
    if (ch5 == 'v')
        flag = 1;
    if (ch5 == 'b')
        flag = 1;
    if (ch5 == 'n')
        flag = 1;
    if (ch5 == 'm')
        flag = 1;

    if (flag == 1)
        printf("lower line\n");
    else
    {
        printf("input not matched\n");
    }

    // q11
    char op;
    printf("Enter the operation (a for addition of 2 nums): ");
    scanf(" %c", &op);

    if (op == 'a')
    {
        int a, b;
        printf("Enter 2 nums (comma seprated): ");
        scanf("%d,%d", &a, &b);

        printf("%d\n", a + b);
    }
    else
    {
        printf("input not matched\n");
    }

    // q12
    char op1;
    printf("Enter the operation (s for subtraction): ");
    scanf(" %c", &op1);

    if (op1 == 's')
    {
        int a, b, c, d;
        printf("Enter 4 nums (comma seprated): ");
        scanf("%d,%d,%d,%d", &a, &b, &c, &d);

        printf("%d\n", a - b - c - d);
    }
    else
    {
        printf("input not matched\n");
    }

    // q13
    char op2;
    printf("Enter the operation (m for multiplication): ");
    scanf(" %c", &op2);

    if (op2 == 'm')
    {
        int a, b;
        printf("Enter 2 nums (comma seprated): ");
        scanf("%d,%d", &a, &b);

        printf("%d\n", a * b);
    }
    else
    {
        printf("input not matched\n");
    }

    // q 14
    char op3;
    printf("Enter the operation (d for division): ");
    scanf(" %c", &op3);

    if (op3 == 'd')
    {
        float a, b;
        printf("Enter 2 nums (comma seprated): ");
        scanf("%2f,%2f", &a, &b);

        if (b != 0)
            printf("%.2f\n", a / b);
        else
            printf("Cannot divide by zero\n");
    }
    else
    {
        printf("input not matched\n");
    }

    // q15
    char swap;
    printf("Enter the operation (s for swap with 3rd variable): ");
    scanf(" %c", &swap);

    if (swap == 's')
    {
        int a, b;
        printf("Enter 2 nums (comma seprated): ");
        scanf("%d,%d", &a, &b);
        printf("a = %d and b = %d\n", a, b);

        a = a + b;
        b = a - b;
        a = a - b;

        printf("After swap, a = %d and b = %d\n", a, b);
    }
    else
    {
        printf("input not matched\n");
    }

    // q16
    char swap1;
    printf("Enter the operation (w for swap without using 3rd variable): ");
    scanf(" %c", &swap1);

    if (swap1 == 'w')
    {
        int a, b, temp;
        printf("Enter 2 nums (comma seprated): ");
        scanf("%d,%d", &a, &b);
        printf("a = %d and b = %d\n", a, b);

        temp = a;
        a = b;
        b = temp;

        printf("After swap, a = %d and b = %d\n", a, b);
    }
    else
    {
        printf("input not matched\n");
    }

    return 0;
}
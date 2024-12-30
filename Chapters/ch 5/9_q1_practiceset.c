#include <stdio.h>

float avg(int x, int y, int z);

int main()
{
    int a, b, c;
    printf("Enter first num : ");
    scanf("%d", &a);

    printf("Enter second num : ");
    scanf("%d", &b);

    printf("Enter third num : ");
    scanf("%d", &c);

    float result = avg(a, b, c);
    printf("The avg of the three number is : %f", result);

    return 0;
}

float avg(int x, int y, int z)
{
    float result = (x + y + z) / 3.0;
    return result;
}

// In C, the `\n` character is used to explicitly move to the next line. However, the new line you observe after entering each number might be happening because the `scanf()` function waits for input, and when you press "Enter" after typing a number, it implicitly moves to the next line. The Enter key sends a newline character (`\n`), which is interpreted by the terminal as a signal to move to the next line.

// So, even though your code doesn't have an explicit `\n`, the terminal automatically moves to the next line after you press Enter to submit your input.
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);

    int i = 1, factorial = 1;

    while(i<=a)
    {
        factorial *= i;
        i++;
    }
    printf("%d", factorial);
    return 0;
}
/*
If you move i++ to above factorial *= i, the code will behave differently, and the factorial will be calculated incorrectly. Here's why:

Example (if a = 5):

Original code (with factorial *= i first):

Iteration 1: factorial = 1 * 1 = 1
Iteration 2: factorial = 1 * 2 = 2
Iteration 3: factorial = 2 * 3 = 6
Iteration 4: factorial = 6 * 4 = 24
Iteration 5: factorial = 24 * 5 = 120

Modified code (with i++ first):

Iteration 1: i = 2, factorial = 1 * 2 = 2
Iteration 2: i = 3, factorial = 2 * 3 = 6
Iteration 3: i = 4, factorial = 6 * 4 = 24
Iteration 4: i = 5, factorial = 24 * 5 = 120
Iteration 5: i = 6, factorial = 120 * 6 = 720
*/
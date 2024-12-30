// while = checks the condition then execute
// do while = execute then checks the condition

// quick quiz

#include <stdio.h>
int main()
{
    int a;
    int i = 1;
    printf("enter a number: ");
    scanf("%d", &a);

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= a);

    return 0;
}

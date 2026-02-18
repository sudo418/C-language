/* --> switch works with: int, char, short, long, long long, signed / unsigned versions of these and enum.
switch does not work with: float, double, string */

#include <stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("ur number is 1 \n");
        break;
    case 2:
        printf("ur number is 2 \n");
        break;
    case 3:
        printf("ur number is 3 \n");
        break;
    default:
        printf("ur number is not 1,2,3");
        break;
    }

    return 0;
}
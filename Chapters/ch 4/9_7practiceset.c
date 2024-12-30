#include<stdio.h>

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);

    int i,sum = 0, result;

    for (i=1; i<=10; i++)
    {
        // result = a*i;  you can write in both way
        printf("%d x %d = %d \n",a,i, a*i);
        sum += a*i;
    }
    printf("sum = %d", sum);

    return 0;
}
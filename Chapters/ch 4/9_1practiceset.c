#include<stdio.h>

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);

    int i;

    for (i=1; i<=10; i++)
    {
        printf("%d x %d = %d \n",a,i, a*i);
    }
    return 0;
}
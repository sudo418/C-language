#include<stdio.h>

int main()
{
    for(int i=5;i;i--)      //only i in  test is valid because any non zero value in c is true.  Other way of writing this is for(int i = 5; i > 0; i--) 
    {
        printf("%d\n",i);
    }

    int a;
    printf("enter a num :");
    scanf("%d", &a);

    for(a;a;a--)
    {
        printf("%d\n",a);
    }

    return 0;
}
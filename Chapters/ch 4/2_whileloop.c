#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    
    int i = 1;
    while(a>=i)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
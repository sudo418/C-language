#include<stdio.h>
int main()
{
    int principal, rate, time;
    printf("enter the value of principal: ");
    scanf("%d", &principal);

    printf("enter the value of rate: ");
    scanf("%d", &rate);

    printf("enter the value of time: ");
    scanf("%d", &time);
    
    int si = (principal*rate*time)/100;

    printf("the si is = %d",si);

    return 0;
}   
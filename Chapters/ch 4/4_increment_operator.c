#include<stdio.h>
int main()
{
    int a = 5;

    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",a++);  // post increment --> pehle print fir increment
    printf("the value of a is %d\n",a);

    a = 5;

    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",++a);  // pre increment --> pehle increment fir print

    // compound assignment operator
    a = 5;
    a += 10; 
    // --> a = a + 10
    printf("the value of a is %d",a);

    return 0;
}
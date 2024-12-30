#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 5;
    int z;
    z = b * a;
    // b*a =z; is incorrect because you cannot assign a value to a multiplication expression.

    printf("the value of 4 to the power 3 is : %f", pow(4, 3)); // %f cus pow returns double otherwise it will return 0

    return 0;
}
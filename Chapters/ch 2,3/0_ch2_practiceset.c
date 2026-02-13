#include<stdio.h>
#include <math.h>


int main()
{
    int a;
    printf("enter a num : ");
    scanf("%d", &a);
    
    printf("divisiblity test returns %d\n", a % 97);

    // we cant use float in this cuz Using modulus (%) with a floating-point number: The modulus operator (%) is intended for integer values. If you want to check divisibility or find the remainder of a floating-point division, you should use the fmod() function from the math.h library.


    int c = 4;
    int b = 5;
    int z;
    z = b * c;
    
    /* b*a =z; is incorrect because you cannot assign a value to a expression.
    In C, '=' is an assignment operator, not a mathematical equals.
    The left-hand side must be a variable (l-value) with a memory address.
    The right-hand side is just a computed value (r-value).
    Expressions like b*c do not have a memory location,
    so b*c = z is invalid, but z = b*c is valid. */


    printf("the value of 4 to the power 3 is : %f", pow(4, 3)); // %f cus pow returns double otherwise it will return 0
    
    return 0;
}


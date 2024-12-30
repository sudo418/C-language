#include<stdio.h>

int main()
{
    int a;
    printf("enter a num : \n");
    scanf("%d", &a);
    
    printf("divisiblity test returns %d", a % 97);
    return 0;
}

// we cant use float in this cuz Using modulus (%) with a floating-point number: The modulus operator (%) is intended for integer values. If you want to check divisibility or find the remainder of a floating-point division, you should use the fmod() function from the math.h library.
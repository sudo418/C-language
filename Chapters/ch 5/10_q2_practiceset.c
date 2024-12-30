#include<stdio.h>

float far(float c);

int main()
{
    float celsius;

    printf("Enter the temp in celsius : ");
    scanf("%f", &celsius);
    
    float result = far(celsius); 
    printf("%f", result);

    return 0;
}

float far(float c)
{
    float result = c *(9.0/5.0) + 32;
    return result;
}
// The expression 9/5 results in integer division because both 9 and 5 are integers. In integer division, 9/5 equals 1 (instead of 1.8), which will give an incorrect result.
// To fix this, you can write 9.0/5.0 so that floating-point division is used.
// or we can use :- float result = c * ((float)9 / (float)5) + 32;

#include <stdio.h>

int main()
{
    double num;
    printf("Enter a num: ");
    scanf("%lf", &num); // Use %lf for reading double
    printf("You entered: %f\n", num);

    return 0;
}
/* The format specifier for a double in C is: %f
Used to print a floating-point number in decimal (fixed-point) notation.

%lf can also be used for double, though it's treated the same as %f in printf. However, %lf is necessary when using scanf to input a double. */
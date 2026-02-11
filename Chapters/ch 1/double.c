#include <stdio.h>

int main()
{
    double num;
    printf("Enter a num: ");
    scanf("%lf", &num); 
    printf("You entered: %f\n", num);

    return 0;
}

/* For double:
scanf  -> use %lf (using %f causes undefined behavior).
printf -> both %f and %lf can be used because values are promoted to double. */

/* If %f is used with scanf for a double variable, scanf expects a float but gets a double instead.
This causes undefined behavior because only 4 bytes
are written instead of 8, leading to garbage or wrong output. */

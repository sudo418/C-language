// lets take other example (by apna college) :-
#include <stdio.h>

void calculatePrice(float value);

int main()
{
    float value = 100.0;
    calculatePrice(value);
    printf("final price is: %f", value);
    return 0;
}
void calculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("price is: %f\n", value);
}
// Inside calculatePrice, the new price is calculated, but the original value in the main() function remains unchanged because the function does not return any value.

// Changes made to parameters inside a function do not affect the arguments in the calling function. For example, in the calculatePrice function, while the value parameter is modified, the original value in main remains unchanged unless the modified value is returned and captured in the main function. Additionally, if a function is defined with a void return type, it does not return any value.


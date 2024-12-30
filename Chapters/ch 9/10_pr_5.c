#include <stdio.h>
typedef struct complex
{
    int real;
    int img;
} complex;

int main()
{
    complex c1;

    c1.real = 100;
    c1.img = 3;

    printf("Complex number : %d + %di", c1.real, c1.img);

    return 0;
}
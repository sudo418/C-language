#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
} comp;

void display(comp c)
{
    printf("The complex number is %d + %di\n", c.real, c.img);
}

int main()
{
    comp c[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of %d num : \n", i + 1);
        scanf("%d", &c[i].real);

        printf("Enter the img part of %d number : \n", i + 1);
        scanf("%d", &c[i].img);
    }

    for (int i = 0; i < 5; i++)
    {
        display(c[i]);
    }

    return 0;
}
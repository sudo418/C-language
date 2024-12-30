#include<stdio.h>
int main()
{
    float radius;
    float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = pi*radius*radius;

    printf("the area of ur circle is %f \n", area);

    int height;
    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);

    float volume = pi*radius*radius*height;

    printf("the volume of the cylinder is %f", volume);
    return 0;
}
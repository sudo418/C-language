#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("Enter the side of the square : ");
    scanf("%d", &a);
    
    // The pow() function returns a result of type double
    printf("the area of the given square is %f\n",pow(a,2));
    // Using pow() with Type Casting
    printf("the area of the given square is %d\n",(int)pow(a,2));

    return 0;
}
// THIS WAS BY HARD CODED INPUTS
// #include<stdio.h>
// int main()
// {
//     int length = 5, breath = 7;
//     int area = length*breath;
//     printf("the area of ur rectangle is %d", area);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int lenght,breath,area;
    printf("enter the value of lenght of the rectangle :\n");
    scanf("%d", &lenght);

    printf("enter the value of breath of the rectangle : \n");
    scanf("%d", &breath);
    // printf("the area of ur rectangle is %d", lenght*breath); 
    
    area = lenght*breath;   
    printf("the area = %d", area);

    return 0;
}
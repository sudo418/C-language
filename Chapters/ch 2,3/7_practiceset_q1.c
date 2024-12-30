#include <stdio.h>
int main()
{
    int phy, chem, mat;
    printf("enter ur marks in phy :");
    scanf("%d", &phy);

    printf("enter ur marks in chem :");
    scanf("%d", &chem);

    printf("enter ur marks in mat  :");
    scanf("%d", &mat);

    double totalmarks = (phy + chem + mat);
    double percent = (totalmarks / 300)*100 ;

    if(percent<40 || phy<33 || chem<33 || mat<33)
    {
        printf("you got %f marks and %f percent and you are fail", totalmarks, percent);
    }
    else{
        printf("you got %f marks and %f percent and you are pass", totalmarks, percent);
    }

    return 0;
}
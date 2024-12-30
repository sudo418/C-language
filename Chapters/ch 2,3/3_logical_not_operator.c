#include <stdio.h>
int main()
{
    int age;
    int vipPass = 0;

    printf("Enter your age : ");
    scanf("%d", &age);

    printf("Enter your vipPass : ");
    scanf("%d", &vipPass);

    if((age>18 && age<90) || !(vipPass ==1))
    {
        printf("you can drive");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}

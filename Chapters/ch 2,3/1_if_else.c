#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    // if there is only 1 instruction inside if then we can write without curly braces

    if(age>18 && age<90) 
    {
        printf("you can drive");
    }
    else // else is not compulsory if can execute without else also
    {
        printf("you cannnot drive");
    }
    return 0;
}

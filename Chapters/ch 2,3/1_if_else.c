/* -->  Use multiple if → when many things can be true.

--> Use else-if ladder → when only one result should happen

--> Use nested if → when condition depends on another condition

--> Use switch → when checking one variable against many fixed values */

/* 🎯 HOW TO DECIDE (Exam Trick)

1. Can multiple outputs happen?
   → Yes → Use multiple if statements

2. Only one output should happen?
   → Yes → Go to next question

3. Are you checking ranges (>, <, >=, <=)?
   Example: marks, age, salary
   → Yes → Use else-if ladder

4. Are you checking fixed values?
   Example: 1, 2, 3 or 'a', 'b', 'c'
   → Yes → Use switch case */

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

    int a = 5;
    int b = 6;

    int isGreater = a<b;

    if (isGreater)
    {
        printf("\nb is greater");
    }
    
    return 0;
}

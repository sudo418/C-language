#include <stdio.h>

int main()
{
    int marks[4];
    // int *ptr = &marks[0];
    int *ptr = marks;   // In C, the name of an array (like marks) acts as a pointer to the first element of the array. Thus, marks is equivalent to &marks[0].
    // you do not need the & (address-of operator) because marks itself acts as a pointer to the first element of the array

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of %d student : ", i + 1);
        scanf("%d", ptr); //here, ptr points to marks[0]. Therefore, scanf stores the entered value directly in marks[0].
        ptr++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The marks of %d student is %d\n", i + 1, marks[i]);
    }
    return 0;
}
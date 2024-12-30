#include <stdio.h>

int main()
{
    int marks;

    printf("enter ur marks : ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
        printf("you got 100 marks");
        break;

    case 9:
        printf("you got A\n");
        break;

    case 8:
        printf("you got B\n");
        break;

    case 7:
        printf("you got C\n");
        break;

    case 6:
        printf("you got D\n");
        break;

    default:
        if (marks >= 0 && marks < 60)
        {
            printf("you got F");
        }
        else
        {
            printf("INVALID MARKS");
        }
        break;
    }

    return 0;
}
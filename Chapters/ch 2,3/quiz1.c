#include <stdio.h>
int main()
{
    int marks;
    printf("enter ur marks : ");
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 9:
        printf("u got A \n");
        break;
    case 8:
        printf("u got B \n");
        break;
    case 7:
        printf("u got c \n");
        break;
    case 6:
        printf("u got D \n");
        break;
    default:
        if (marks >= 0 && marks < 60)
        {
            printf("you got F");
        }
        else if (marks == 100)
        {
            printf("you got 100 marks");
        }
        else
        {
            printf("INVALID MARKS");
        }

        break;
    }

    return 0;
}
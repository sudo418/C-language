#include <stdio.h>

int main()
{
    // Q1) PS code using "AND" operator -->
    int marks, rank;
    printf("Enter marks and rank (comma separated): ");

    if (scanf("%d,%d", &marks, &rank) != 2) {
        printf("Invalid input.\n");
        return 1; // return non-zero for error
    }

    if (marks >= 90 && rank == 1) {
        printf("W rizz. PS secured\n");
    } else {
        printf("No PS this time.\n");
    }


    // Q1.1) PS code using "OR" operator -->
    int marks1, rank1;
    printf("Enter marks and rank (comma separated): ");

    if (scanf("%d,%d", &marks1, &rank1) != 2) {
        printf("Invalid input.\n");
        return 1; 
    }

    if (marks >= 90 || rank == 1) {
        printf("W rizz. PS secured\n");
    } else {
        printf("No PS this time.\n");
    }
    

    // Q2 Shaadi.com program -->
    char gender;
    int age;
    printf("Enter gender (m/f) and age (comma separated): ");

    if (scanf(" %c,%d", &gender, &age) != 2) {
        printf("Invalid input format\n");
        return 1;
    }

    if (gender == 'm' && age >= 21) {
        printf("He can marry\n");
    }
    else if (gender == 'm' && age < 21) {
        printf("padhai likhai karo ias/yas banno\n");
    }
    else if (gender == 'f' && age >= 18) {
        printf("She can marry\n");
    }
    else if (gender == 'f' && age < 18) {
        printf("choti bacchi  ho kya\n");
    }
    else {
        printf("Invalid gender entered.\n");
    }


    // Q3) Maksheet Grades :-
    int english, hindi, maths, science, sst;
    float percentage, total;

    printf("Enter marks for English, Hindi, Maths, Science, SST (comma separated): ");
    scanf("%d,%d,%d,%d,%d", &english, &hindi, &maths, &science, &sst);

    total = english + hindi + maths + science + sst;
    percentage = total / 5;

    printf("Total Marks: %.2f\n", total);
    printf("Percentage : %.2f\n", percentage);

    if (percentage >= 95)
        printf("Grade: O (Outstanding)\nGrade points: 10\n");
    else if (percentage >= 85)
        printf("Grade: A+ (Excellent)\nGrade points: 9\n");
    else if (percentage >= 75)
        printf("Grade: A (Very Good)\nGrade points: 8\n");
    else if (percentage >= 65)
        printf("Grade: B+ (Good)\nGrade points: 7\n");
    else if (percentage >= 55)
        printf("Grade: B (Above Average)\nGrade points: 6\n");
    else if (percentage >= 51)
        printf("Grade: C (Average)\nGrade points: 5\n");
    else if (percentage == 50)
        printf("Grade: P (Pass)\nGrade points: 4\n");
    else
        printf("Grade: F (Fail)\nGrade points: 0\n");

    return 0;
}
#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date;

void show(date d)
{
    printf("Today's date is %d/%d/%d\n", d.date, d.month, d.year);
}

int datecmp(date d1, date d2)  // see comment below
{
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    return 0;
    
}

int main()
{
    date d1 = {8, 12, 24};
    date d2 = {8, 12, 24};

    show(d1);

    int i = datecmp(d1, d2);
    printf("The function returns %d", i);

    return 0;
}
/*
1)if else -> We cannot use a simple if-else here because it only executes one of two blocks: either the "if" block or the "else" block. In the datecmp function, if the dates are the same, we need to perform further checks (month and year). A simple if-else structure would not allow further comparisons and would return either 1 or -1 and would result in logical errors.

2)if-else if ladder -> Using an if-else if ladder is not suitable here because it stops checking further conditions as soon as one condition is true. 
Since we want to compare dates first, then months, and finally years, an if-else if ladder would not allow us to prioritize date-first comparison without logical issues. This is why a series of independent if statements is used instead.

3)Nested if else -> Using nested if-else is not suitable here because it adds unnecessary complexity. 
Since we want to compare dates first, then months, and finally years, a nested structure would make the code harder to read and maintain, especially with multiple levels of nesting. 
Independent if statements (if-if-if) are more appropriate for this scenario.
*/
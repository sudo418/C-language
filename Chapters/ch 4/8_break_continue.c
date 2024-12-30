#include <stdio.h>

int main()
{
    // program of break statement in do while loop
    int i = 1;
    do
    {
        printf("the value of i is %d\n", i);
        if (i == 5)
        {
            break;
        }
        i++;
    } while (i < 11);

    // program of break statement in for loop

    // code 1 :-

    int a;
    for (a = 1; a < 11; a++)
    {
        printf("the value of a is %d \n", a);
        if (a == 7)
        {
            break;
        }
    }

    // code 2 :-

    int b;
    for (b = 1; b < 11; b++)
    {
        if (b == 7)
        {
            break;
        }
        printf("the value of b is %d\n", b); // Printing after checking the condition
    }

    // Code 1: The value of a is printed before checking if a == 7. Therefore, the number 7 is printed before the loop breaks.
    // Code 2: The value of a is printed after checking if b == 7. Since the loop breaks before reaching the printf statement when b == 7, the number 7 is not printed.

    // program of break statement in while loop

    int c = 1;

    while (c < 11)
    {
        printf("the value of c is %d\n", c);
        if (c == 3)
        {
            break;
        }
        c++;
    }

    // break statement - completely exits the loop
    // continue statement - skips the particular iteration of the loop

    // iteration meaning - In programming, an iteration refers to a single pass or execution of a loop. Each time the loop body is executed, it's called an iteration of the loop. During each iteration, the loop processes its code and then moves to the next iteration according to the loop's control conditions.


    // continue statement :-

    int z = 1;
    int skip = 7;

    while (z < 10)
    {
        if (z != skip)
        {
            z++;
            continue;
        }
        else
        {
            printf("%d", z);
        }
        z++;
        
    }
    return 0;
}

/* 
When z != skip (which is true for z = 1, 2, 3,...6), the continue statement gets executed.
The continue statement skips the remaining part of the loop and directly proceeds to the next iteration without incrementing z (z++ is never reached when continue is hit).
This causes the loop to never reach z = 10, creating an infinite loop. 
*/

/* if The line z++; is placed after continue; Because of the nature of continue, this increment will never be executed when z != skip. The loop will skip to the next iteration without incrementing z.
This means that for all values of z except 7, the loop will continue indefinitely, as z will always remain 1 (the initial value). */
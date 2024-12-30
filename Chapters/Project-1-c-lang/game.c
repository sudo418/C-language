#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;

    int guess, nguesses = 1;

    do
    {
        printf("Guess a num : ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower please\n");
        }
        else if (guess < number)
        {
            printf("Higher please\n");
        }
        else
        {
            printf("Yay! You gussed it right in %d attempts", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}

// Move the prompt for the guess inside the loop to ensure the program asks for a guess on each iteration.

// Same in for loop :-
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses;
    srand(time(0)); // Seed the random number generator with the current time
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    // Initialize the guess counter
    for (nguesses = 1; ; nguesses++) // Infinite loop, will break when the correct number is guessed
    {
        printf("Guess a number: ");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower please\n");
        }
        else if (guess < number)
        {
            printf("Higher please\n");
        }
        else
        {
            printf("Yay! You guessed it right in %d attempts!\n", nguesses);
            break; // Exit the loop when the correct number is guessed
        }
    }

    return 0;
}
*/

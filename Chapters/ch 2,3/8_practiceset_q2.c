#include <stdio.h>
int main()
{
    float tax = 0, income; // explaination at the end
    printf("enter your income: ");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    else if (income > 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("ur tax will be %.2f", tax); // The tax is printed with two decimal places using %.2f
    return 0;
}

/*When a variable in C is declared but not explicitly initialized, it contains an undefined or "garbage" value, which is essentially whatever data happens to be in that memory location at the time. This can lead to unpredictable behavior when that variable is used before it is set to a known value.

float tax, income;

Here, tax is declared, but it's not initialized. If the user's income is less than ₹250,000, none of the if or else if conditions will execute, meaning tax will never be assigned a value. When the program reaches this line:

printf("Your tax will be %.2f\n", tax);

It tries to print the value of tax, which still contains whatever was in memory at that location before it was declared. This can lead to the program displaying an unpredictable or nonsensical value for the tax, or it could even cause a runtime error.*/


// You can write the same code in this below way also :-

// #include <stdio.h>
// int main()
// {
//     float tax = 0, income;
//     printf("Enter your income\n");
//     scanf("%f", &income);
//     if (income >= 250000 && income <= 500000)
//     {
//         tax = tax + 0.05 * (income - 250000);
//     }
//     if (income >= 500000 && income <= 1000000)
//     {
//         tax = tax + 0.20(income - 500000);
//     }
//     if (income >= 1000000)
//     {
//         tax = tax + 0.30(income - 1000000);
//     }
//     printf("Your net income tax to be paid by 26th of this month is %f\n", tax);
//     return 0;
// }

/*  You can write tax = 0.05 * (income - 250000); instead of tax = tax + 0.05 * (income - 250000); if it's the very first calculation for the tax and there is no pre-existing value in tax.  */
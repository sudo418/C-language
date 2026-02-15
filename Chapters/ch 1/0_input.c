#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a \n");
    scanf("%d", &a);

    printf("enter the value of b \n");
    scanf("%d", &b);
    
    printf("the sum of a and b is %d", a + b);
    return 0;

}

// %d is format specifier

/*
🔹 ----Integer types====

%d → int
%i → int (same as %d)
%u → unsigned int
%ld → long int
%lld → long long int

🔹 ====Floating-point types====

%f → float
%lf → double
%Lf → long double

🔹 ====Character & String====

%c → char
%s → string (char array)

🔹 ====Others (basic awareness)====

%o → octal number
%x → hexadecimal (lowercase)
%X → hexadecimal (uppercase)
%p → address (pointer)
%% → print % symbol
*/
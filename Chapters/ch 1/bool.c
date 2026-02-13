#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool isHappy = true;
    bool isSad = false;
    bool isGood = 1;
    bool isBad = 0;

    printf("%d\n", isHappy);
    printf("%d\n", isSad);
    printf("%d\n", isGood);
    printf("%d\n", isBad);

    int isBrave = 1;
    printf("%d\n", isBrave);

    _Bool a = 5;   // becomes 1
    _Bool b = 0;   // stays 0
    

    /* --> Without stdbool.h, C has no bool type and uses int (0/ non-zero) for boolean logic

    --> Including stdbool.h allows use of bool, true, and false keywords for better readability, improves code clarity but does not change C's boolean logic

    --> bool is a macro defined in stdbool.h that maps to the built-in _Bool type, which internally stores only 0 or 1.

    First C used int, then _Bool was added, and bool came as a macro on top of it.  */
}
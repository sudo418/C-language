#include<stdio.h>

void printtable(int *arr, int num, int n)
{
    printf("The multiplication table of %d -->\n", num);
    for (int i = 0; i < n; i++)
    {
        arr[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, arr[i]);
    }
    printf("********************************************\n");
}

int main()
{
    int n, m ,v;

    printf("Enter the three numbers that u want table of : ");
    scanf("%d %d %d", &n, &m, &v);

    int mul[3][10];

    printtable(mul[0], n, 10);
    printtable(mul[1], m, 10);
    printtable(mul[2], v, 10);

    return 0;
}
// If you pass individual rows (mul[0], mul[1], mul[2]), each row will preserve its respective multiplication table.
// If you don't, only the last table will be stored in mul, leading to confusion in the results.

/*
First Call: printtable(mul, n, 10);
--> arr points to mul[0][0].
--> The function processes 10 elements starting from arr[0] to arr[9], which corresponds to mul[0][0] to mul[0][9] (the first row).
--> Only the first row (mul[0]) is modified because the pointer only addresses the first   10 elements of the array.


Second Call: printtable(mul, m, 10);
--> arr still points to mul[0][0].
--> The function now starts modifying the first 10 elements (just like in the first call), but since the pointer is viewing the array as a contiguous block of 30 elements, arr[0] to arr[9] will now correspond to the first row, and arr[10] to arr[19] will correspond to the second row (mul[1][0] to mul[1][9]).
--> Now both the first and second rows are modified, because the pointer is accessing the next set of 10 elements in the block of memory.


Third Call: printtable(mul, v, 10);
--> The same thing happens, but now the function will modify:
--> The first 10 elements (the first row, mul[0]).
--> The next 10 elements (the second row, mul[1]).
--> The next 10 elements (the third row, mul[2]).

This happens because in line 8 i have written arr[i] so for example :-
arr[0] -> arr[0] to arr[9]
arr[1] -> arr[10] to arr[19]
arr[2] -> arr[20] to arr[29]
*/
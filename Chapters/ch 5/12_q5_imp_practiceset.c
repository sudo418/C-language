#include<stdio.h>

int main()
{
    int a =3;
    printf("%d %d %d",a, ++a, a++);
    return 0;
}
// output :- 5 5 3
// in gcc compliler it evaluates from right to left, it totally depends on compiler behavior in which order it evaluates the arguments
// Since the order in which the arguments are evaluated in printf is unspecified, different compilers may produce different outputs. The result depends on how the compiler orders the evaluation of the arguments in the printf call. Some compilers may evaluate the arguments from left to right, others from right to left, or in any other sequence.
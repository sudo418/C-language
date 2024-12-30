#include<stdio.h>

int main()
{
    int a =55;
    int *j = &a;
    int **k = &j;

    printf("the value of a is : %d\n", a);
    printf("the address of a is : %u\n", j);
    printf("the address of j is : %u\n", k); 


    printf("the value of a is : %d\n", *j);  //value at the memory address that j is pointing to
    printf("the value of j is : %u\n", *k); 
    printf("the value of a is : %u\n", **k); 
    // we are dereferencing the pointer k twice using **k.


    printf("the value of j is : %u\n", *(&j)); //value at address of j 
    printf("the value of k is : %u\n", *(&k));

    // We can go even further one level and create a Variable l of type int *** to store the address of k. We mostly use int * and int ** not more than that in real world program but it go as further as we want.

    return 0;
}
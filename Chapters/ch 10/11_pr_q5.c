#include<stdio.h>

int main()
{
    int num;

    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("sample.txt", "r");
    ptr2 = fopen("double.txt", "w");

    fscanf(ptr1, "%d", &num);
    fprintf(ptr2, "%d", num*2);

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}
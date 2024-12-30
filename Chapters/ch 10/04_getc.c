#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "r");

    printf("the value of  this charcter is %c\n", fgetc(ptr));
    printf("the value of  this charcter is %c\n", fgetc(ptr));
    printf("the value of  this charcter is %c\n", fgetc(ptr));
    printf("the value of  this charcter is %c\n", fgetc(ptr));
    printf("the value of  this charcter is %c\n", fgetc(ptr));
    fclose(ptr);

    return 0;
}
#include<stdio.h>

void display();
void display2();
void display3();

int main()
{
    display();
    display2();
    display3();
    
    return 0;
}

void display()
{
    printf("Good morning\n");
}
void display2()
{
    printf("Good afternoon\n");
}
void display3()
{
    printf("Good night\n");
}
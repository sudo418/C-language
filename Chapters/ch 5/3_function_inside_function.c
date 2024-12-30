#include<stdio.h>

void morning();
void afternoon();
void night();


int main()
{
    morning();    
    return 0;
} 

//Directly called function: morning()
//Indirectly called functions: afternoon() and night()

void morning()
{
    printf("good morning\n");
    afternoon();
    night(); 
}
void afternoon()
{
    printf("good afternoon\n");
}
void night()
{
    printf("good night\n");
}
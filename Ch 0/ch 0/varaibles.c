#include <stdio.h>

int main() 
{
  int a = 4;
  int b = 5;
  int c = 6 + 7;
  float d = 8.5;
  char e = 'a';
  printf("the value of a is %d \nthe value of b is %d \n", a,b);
  printf("the value of c is %d \n", c);
  printf("the sum of a and d is %f", a + d);
  return 0;
}

// If you try to store more than a single character, it will only print the last character:
// Example :-
// char myText = 'Hello';
// printf("%c", myText);
// output :- o

// To store multiple characters or whole words use strings
// Example :-
// char myText[] = "Hello";
// printf("%s", myText);

// %d is format specifier

// u can declare and initialize variable at the same time like int a = 4
// int a; a = 4;  --> this is first declaring it and then initializing it

// if u will make int variable and store 7.7 it will only return 7
// for ex int a = 7.7 .Correct way is float a = 7.7 

/*
\b	Backspace	It is used to move the cursor one place backward.
\n	New Line	It moves the cursor to the start of the next line.
\t	Horizontal Tab	It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
\v	Vertical Tab	It is used to insert vertical space.
\\	Backlash	Use to insert backslash character.
\’	Single Quote	It is used to dinsplay a sigle quotation mark.
\”	Double Quote	It is used to display double quotation marks.
\?	Question Mark	It is used to display a question mark.
*/
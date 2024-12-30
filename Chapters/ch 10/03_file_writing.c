#include <stdio.h>

int main()
{
    FILE *fptr; //--> Both *ptr and *fptr are same
    int num = 44;
    char str[10] = "chirayu";

    fptr = fopen("generated.txt", "w");

    fprintf(fptr, "The num is %d\n", num);
    fprintf(fptr, "My name is %s", str);
    fclose(fptr);

    return 0;
}
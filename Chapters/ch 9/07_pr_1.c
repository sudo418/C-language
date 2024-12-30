#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1;

    v1.x = 4;
    v1.y = 5;

    printf("X dim is %d and Y dim is %d", v1.x, v1.y);

    return 0;
}
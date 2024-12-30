#include <stdio.h>

struct vector
{
    int x;
    int y;
};

struct vector vectorsum(struct vector v1, struct vector v2)
{
    struct vector result;

    result.x = v1.x + v2.x;
    result.y = v2.y + v2.y;

    return result;
}

int main()
{
    struct vector v1, v2, sum;

    v1.x = 4;
    v1.y = 5;

    v2.x = 4;
    v2.y = 5;

    sum = vectorsum(v1, v2);

    printf("X dim is %d and Y dim is %d", sum.x, sum.y);
    return 0;
}
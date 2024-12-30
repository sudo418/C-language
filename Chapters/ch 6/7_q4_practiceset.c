#include <stdio.h>

void SumAndAvg(int a, int b, int *sum, float *avg);

int main()
{
    int a = 3, b = 6, sum;
    float avg;

    SumAndAvg(a, b, &sum, &avg);

    printf("The sum of a and b is %d\n", sum);
    printf("The avg of a and b is %f", avg);

    return 0;
}

void SumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum)/2;
}
// When you divide *sum by 2, it performs integer division because both *sum and 2 are integers. Thats why we did type casting of *sum.
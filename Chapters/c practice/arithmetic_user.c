#include <stdio.h>

int main()
{
    // Q1 -->
    int a, b;
    printf("Enter two numbers (comma separated): ");
    scanf("%d,%d", &a, &b);
    printf("%d\n", a + b);

    // Q2 -->
    int c, d;
    printf("Enter two numbers (comma separated): ");
    scanf("%d,%d", &c, &d);
    printf("%d\n", c - d);

    // Q3 -->
    int e, f;
    printf("Enter two numbers (comma separated): ");
    scanf("%d,%d", &e, &f);
    printf("%d\n", e * f);

    // Q4 -->
    int g, h;
    printf("Enter two numbers (comma separated): ");
    scanf("%d,%d", &g, &h);
    printf("%d\n", g / h);

    // Q5 -->
    int i, j, k, l, m;
    printf("Enter five numbers (comma separated): ");
    scanf("%d,%d,%d,%d,%d", &i, &j, &k, &l, &m);
    printf("%d\n", i + j + k + l + m);

    // Q6 -->
    int n, o, p, q;
    printf("Enter four numbers (comma separated): ");
    scanf("%d,%d,%d,%d", &n, &o, &p, &q);
    printf("%d\n", n + o + p + q);

    // Q7 -->
    float r, s, t, u, v;
    printf("Enter five numbers (comma separated): ");
    scanf("%f,%f,%f,%f,%f", &r, &s, &t, &u, &v);
    printf("%f\n", r * s + t / u - v);

    // Q8 -->
    float w, x, y, z;
    printf("Enter four numbers (comma separated): ");
    scanf("%f,%f,%f,%f", &w, &x, &y, &z);
    printf("%f\n", w * x - y / z);

    // Q9 -->
    float a1, b1, c1, d1, e1;
    printf("Enter five numbers (comma separated): ");
    scanf("%f,%f,%f,%f,%f", &a1, &b1, &c1, &d1, &e1);
    printf("%f\n", a1 * (b1 - c1) / 2 + d1 - e1);

    // Q10 -->
    float a2, b2, c2, d2, e2, f2;
    printf("Enter six numbers (comma separated): ");
    scanf("%f,%f,%f,%f,%f,%f", &a2, &b2, &c2, &d2, &e2, &f2);
    printf("%f\n", a2 * b2 - (c2 / d2) - e2 + f2);

    // Q11 -->
    int a3, b3, c3, d3, e3;
    printf("Enter five numbers (comma separated): ");
    scanf("%d,%d,%d,%d,%d", &a3, &b3, &c3, &d3, &e3);
    printf("%d\n", a3 * b3 + (c3 - d3) / 1 + e3);

    // Q12 -->
    float a4, b4, c4, d4, e4;
    printf("Enter five numbers (comma separated): ");
    scanf("%f,%f,%f,%f,%f", &a4, &b4, &c4, &d4, &e4);
    printf("%f\n", a4 + b4 * (c4 - d4) / 2 + e4);

    // Q13 -->
    float a5, b5, c5, d5, e5, f5, g5;
    printf("Enter seven numbers (comma separated): ");
    scanf("%f,%f,%f,%f,%f,%f,%f", &a5, &b5, &c5, &d5, &e5, &f5, &g5);
    printf("%f\n", a5 * b5 - (c5 - d5) + e5 - f5 + g5);

    return 0;
}

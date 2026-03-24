#include<stdio.h>

int main()
{
    int n, rotation, digit, rev = 0, i = 1;
    printf("Enter n and rotation: ");
    scanf("%d %d", &n, &rotation);

    int count = 0, temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    
    rotation %= count;

    while (i <= rotation)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
        if (n == 0) {
            n = rev;
            rev = 0;
        } 
        i++;
    }
    
    printf("%d", n);
    return 0;
}
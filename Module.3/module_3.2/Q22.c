#include <stdio.h>
int main()
{

    int n, sum = 0, FD, LD;
    printf("Enter number to find sum of First and last Digit:");
    scanf("%d", &n);

    LD = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    FD = n;
    sum = FD + LD;
    printf("sum of First and Last Digit:%d", sum);

    return 0;
}
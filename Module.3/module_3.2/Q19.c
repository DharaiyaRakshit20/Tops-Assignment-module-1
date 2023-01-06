#include <stdio.h>
int main()
{

    int n, reverse = 0, num;
    printf("Enter a Number:");
    scanf("%d", &n);

    while (n != 0)
    {
        num = n % 10;
        reverse = reverse * 10 + num;
        n /= 10;
    }

    printf("Reverse Number is:%d", reverse);

    return 0;
}
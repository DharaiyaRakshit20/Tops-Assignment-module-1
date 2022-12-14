#include <stdio.h>
int main()
{

    float A, B, C;
    printf("Enter three number:");
    scanf("%f%f%f", &A, &B, &C);
    float result = (A * B * C) / 100;
    printf("Simple intrest:%f", result);

    return 0;
}
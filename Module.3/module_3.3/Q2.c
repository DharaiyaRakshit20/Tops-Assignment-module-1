#include <stdio.h>
#include <conio.h>
int main()
{

    int A, B;
    int op;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter the value of A and B :");
    scanf("%d %d", &A, &B);
    printf("Enter Your Choice:");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Addition of %d and %d is : %d", A, B, A + B);
        break;
    case 2:
        printf("Subtraction of %d and %d is : %d", A, B, A - B);
        break;
    case 3:
        printf("Multiplication of %d and %d is : %d", A, B, A * B);
        break;
    case 4:
        printf("Division of %d and %d is : %d", A, B, A / B);
    default:
        printf("\nEnter your correct choice...");
        break;
    }

    return 0;
}
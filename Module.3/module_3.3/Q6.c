#include <stdio.h>
int main()
{

    int Num1[2][2], Num2[2][2], i, j, r, c;
    int Sub[2][2], Add[2][2], Multi[2][2];
    printf("Enter Row : ");
    scanf("%d", &r);
    printf("\nEnter Colum : ");
    scanf("%d", &c);

    printf("Enter A First matrix : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &Num1[i][j]);
        }
    }
    printf("Enter A Second matrix : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &Num2[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            Add[i][j] = Num1[i][j] + Num2[i][j];
            Sub[i][j] = Num1[i][j] - Num2[i][j];
            Multi[i][j] = Num1[i][j] * Num2[i][j];
        }
    }

    printf("\nAdd\tSub\tMulti");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\n%d\t", Add[i][j]);
            printf("%d\t", Sub[i][j]);
            printf("%d\t", Multi[i][j]);
        }
    }

    return 0;
}
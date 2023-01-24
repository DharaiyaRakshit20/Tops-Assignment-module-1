#include <stdio.h>
int main()
{
    int i, j, a = 1;

    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", a);
            a++;
        }
    }
    return 0;
}
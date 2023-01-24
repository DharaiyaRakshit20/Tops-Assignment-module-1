#include <stdio.h>
int main()
{

    int n = 5, j, i, s = 1;
    s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
            printf("  ");
        s--;

        for (j = 1; j <= 2 * i - 1; j++)
            printf(" *");

        printf("\n");
    }

    return 0;
}

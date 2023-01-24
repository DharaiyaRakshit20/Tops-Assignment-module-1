#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= (i - 1); j++)
        {
            printf("%c ", (char)(j + 64));
        }
        printf("\n");
    }
    return 0;
}
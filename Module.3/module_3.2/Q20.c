#include <stdio.h>
int main()
{

    int array[100], big,i;
    for (int i = 0; i < 10; i++)
    {

        printf("Enter a number:");
        scanf("%d", &array[i]);
    }
    big = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > big)
        {
            big = array[i];
        }
    }

    printf("%d is maximum.", big);

    return 0;
}
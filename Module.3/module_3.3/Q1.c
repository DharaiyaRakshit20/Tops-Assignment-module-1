#include <stdio.h>
int main()
{

    int Arr[100], maximum;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number:");
        scanf("%d", &Arr[i]);
    }
    maximum = Arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (Arr[i] > maximum)
        {
            maximum = Arr[i];
        }
    }

    printf("%d is Maximum.", maximum);

    return 0;
}
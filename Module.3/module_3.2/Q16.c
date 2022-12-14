#include<stdio.h>
int main ()
{

    int i, number, sum = 0;
    
    printf("Please enter the maximum limit value :\n");
    scanf("%d", &number);

    printf("even number between 0 and %d\t are: \n", number);
    for ( i = 1; i <= number ; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
            sum = sum + i;
        }
        
    }
    printf("\nthe sum of all even number upto %d = %d\n", number, sum);

    return 0 ;
}
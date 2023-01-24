#include<stdio.h>
int number(int n)
{

    if (n==0)
        return (1);

        return(n*number(n-1));

}


int number(int);
int main(){

    int num,fact;
    printf("Enter a number:");
    scanf("%d",&num);

    fact=number(num);


    printf("Factorial is %d: %d",num,fact);

    return 0;
}
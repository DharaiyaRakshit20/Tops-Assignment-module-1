#include<stdio.h>
int main(){

    int n,f=1,i;

    printf("Enter A Number:");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        f*=i;
    }
        printf("\nFactorial of %d is %d\n",n,f);

    return 0;
}
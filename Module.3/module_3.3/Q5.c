#include<stdio.h>
int main(){

    int Arr[100],n,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Elements:");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&Arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (Arr[i] < Arr[j])
            {
                int tmp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = tmp;
            }
            
        }
    }
    
    printf("\n\nAscending :");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",Arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (Arr[i] > Arr[j])
            {
                int tmp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = tmp;
            }
            
        }
    }
    
    printf("\n\nDscending :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d\t ",Arr[i]);
    }
    

    return 0;
}
#include <stdio.h>  
   
int main() {  
    int num, isEven;  
   
   
    printf("Enter an Integer\n");  
    scanf("%d", &num); 
     
   
    isEven =  (num%2 == 1) ? 0 : 1;  
     
    if(isEven == 1)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
   
    return 0;  
} 
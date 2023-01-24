#include<stdio.h>
struct Emp
{
    char name[30];
    char Address[100];
    int ID;
    int Age;

};

int main(){

    struct Emp e1;

    printf("Enter details: \n");
    printf("Name: ");
    gets(e1.name);
    printf("Address: ");
    gets(e1.Address);
    printf("ID: ");
    scanf("%d",&e1.ID);
    printf("Age: ");
    scanf("%d\n",&e1.Age);

    printf("Entered details is : \n");
    printf("Name : %s\n",e1.name);
    printf("Address : %s\n",e1.Address);
    printf("ID :%d\n",e1.ID);
    printf("Age :%d\n",e1.Age);

    printf("\n-------------------------------------------------------\n");

    return 0;
}
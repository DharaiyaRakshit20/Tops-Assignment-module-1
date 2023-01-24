#include<stdio.h>
    struct Emp
    {
        char name[30];
        char address[100];
        int id,age;
    }Emp[100];
    
int main(){

    int i,n;
    printf("Enter a number of employ: \n");
    scanf("%d",&n);
    printf(" Enter a details is : \n");
    printf("ID\t\tName\t\tAddress\t\t\t\t\tAge\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %s %d",&Emp[i].id,&Emp[i].name,&Emp[i].address,&Emp[i].age);
    }
    printf("EMP_ID\t\tEMP_NAME\t\tEMP_ADDRESS\t\t\t\tEMP_AGE\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%s\t\t\t\t%d\n",Emp[i].id,Emp[i].name,Emp[i].address,Emp[i].age);
    }
    

    return 0;
}
#include<stdio.h>
struct Q11
{
    int number,id;
    char sarname;
    char Address;
};

union q11
{
    int number;
    char sarname;
    char Address;
};


int main(){
    printf("Size of structure is %d.\n",sizeof(struct Q11));
    printf("Size of union is %d.\n",sizeof(union q11));

    return 0;
}
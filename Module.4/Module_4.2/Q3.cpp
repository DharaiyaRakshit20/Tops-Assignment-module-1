#include<iostream>
using namespace std;
    
    inline int multi(int x, int y)
    {
        return  x * y ;
    }
    inline int cube(int z)
    {
        return z * z * z;
    }

int main(){



    cout<<"Enter Multi number : "<<multi(5,4)<<endl;

    cout<<"Enter Cube number : "<<cube(5);


    return 0;
}
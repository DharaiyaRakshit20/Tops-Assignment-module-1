#include<iostream>
using namespace std;

    void areac(int r)
    {
        cout<<"the area of circle is :"<<3.14 * r * r<<endl;
    }

    void arear(int a,int b)
    {
        cout<<"the area of rectangle is :"<<a * b<<endl;
    }

    void areat(float a,float b)
    {
        cout<<"the area of triangle is : "<<(a * b)/2<<endl;
    }

int main()
{

    areac(5);
    arear(6,8);
    areat((float)5.4,(float)7.6);


}
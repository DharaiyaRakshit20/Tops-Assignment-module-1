#include<iostream>
using namespace std;

    class cal
    {
        public:
        void calculation(int a,int b,int c,int d)
        {
            cout<<"Addition of "<<a<<" and "<<b<<" and "<<c<<" and "<<d<<" is : "<<a + b + c + d<<endl;
        }
        void calculation(int a,float b,float c)
        {
            cout<<"Subtiraciton of "<<a<<" and "<<b<<" and "<<c<<" is : "<<a - b - c<<endl;
        }
        void calculation(float a,float b,float c,float d,float e)
        {
            cout<<"Multiplication of "<<a<<" and "<<b<<" and "<<c<<" and "<<d<<" and "<<e<<" and "<<" is : "<<a * b * c *d *e<<endl;
        }
        void calculation(float a,int b)
        {
            cout<<"Divison of "<<a<<" and "<<b<<" is : "<<a / b<<endl;
        }
    };

int main()
{           

    cal c1;
    c1.calculation(5,10,15,20);
    c1.calculation(20,10.5,4.5);
    c1.calculation(2.5,2.5,2.5,2.5,2.5);
    c1.calculation(20.8,4);
    return 0;
}
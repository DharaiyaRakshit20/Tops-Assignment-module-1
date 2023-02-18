#include<iostream>
using namespace std;

    class A
    {
        string a;
        public:

         A(){}
         A(string a)
        {
            this->a=a;
        }
        void display()
        {
            cout<<a<<endl;
        }

        A operator+(A obj)
        {
            A add;
            add = a + obj.a;
            return add;
        }

    };

int main(){

    A a1("Hello"),a2("World"),a3;
    a3=a1+a2;
    a3.display();
    return 0;
}
#include<iostream>
using namespace std;

    template<class t1,class t2>

    class A
    {
        t1 a;
        t1 b;
        public:

        A(t1 a,t2 b)
        {
            this->a=a;
            this->b=b;
        }

        void swap()
        {
            a = a + b;
            b = a - b;
            a = a - b;
            cout<<a<<" "<<b<< endl;
        }
    };

int main()
{

    A<int,float> t1(5 , 9);
    t1.swap();
    return 0;
}
#include<iostream>
using namespace std;
    class add
    {
        int a[5],i;
        public:

        void setdata()
        {
            for (int i = 0; i < 5; i++)
            {
                cout<<"Enter element :";
                cin>>a[i];
            }
            
        }
        void display()
        {
            for (int i = 0; i < 5; i++)
            {
                cout<<a[i]<<endl;
            }
            
        }

        add operator+(add obj)
        {
            add temp;
            for (int i = 0; i < 5; i++)
            {
               temp.a[i]=a[i]+obj.a[i];


            }
            return temp;
        }
    };

int main ()
{
    add a1;
    a1.setdata();
    add a2;
    a2.setdata();
    add a3=a1+a2;
    a3.display();
    return 0;
}
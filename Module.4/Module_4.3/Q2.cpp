#include<iostream>
using namespace std;

    template<class t1>
    class A
    {
        public:
        void array()
        {
            t1 i,j,max;
            t1 a[5];

            for (int i = 0; i < 5; i++)
            {
                cout<<" Enter array elements :";
                cin>>a[i];
            }

            for (int i = 0; i < 5; i++)
            {
                for(int j = i + 1; j < 5; j++)
                {
                    if(a[i] > a[j])
                    {
                        max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                    }
                }
                cout<<a[i]<<" ";
            }
            
        }
    };

int main()
{

    A<int> a1;
    a1.array();

    return 0;
}
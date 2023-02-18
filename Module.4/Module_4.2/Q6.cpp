#include<iostream>
using namespace std;

    class person
    {
        public:
        string name;
        int age;
        void member()
        {   
            cout<<"--------------------------------------"<<endl;
            cout<<"Enter member name : ";
            cin.ignore();
            getline(cin,name);
            cout<<"Enter member age : ";
            cin>>age;
        }
    };
    class student: public person
    {   
        public:
        int persentag;
        void per()
        {
            cout<<"Enter Student persentag :";
            cin>>persentag;
        }
    };
    class techer: public person
    {   
        public:
        int sellery;
        void sell()
        {
            cout<<"Enter techer sellery : ";
            cin>>sellery;
        }
    };

int main ()
{
    student o1;
    o1.member();
    o1.per();
    techer t1;
    t1.member();
    t1.sell();
    return 0;
}
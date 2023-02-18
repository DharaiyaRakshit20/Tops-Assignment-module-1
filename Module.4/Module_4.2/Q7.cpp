#include<iostream>
using namespace std;

    class student
    {
        protected:
        int id;
        string name;
        public:

        void stdid(int id,string name)
        {
            this->id=id;
            this->name=name;
        }

    };
    class mark : public student
    {
        protected:
        int m1;
        int m2;
        float m ;

        public:
        void stdmark(int m1,int m2)
        {
            this->m1=m1;
            this->m2=m2;
            m = m1 + m2;
        }

    };
    class result : public mark
    {
        public:
        void display()
        {
            cout<<"This id of student is : "<<id<<endl;
            cout<<"This name of student is : " <<name<<endl;
            cout<<"The mark of Subject first is : "<<m1<<endl;
            cout<<"The mark of Subject second is : "<<m2<<endl;
            cout<<"The Total mark is : "<<m<<endl;
            cout<<"The persenteg is : "<<m*100/200<<endl;
        }
    };


int main()
{
    int id;
    string name;
    int mark1,mark2;


    cout<<"Enter student ID : ";
    cin>>id;
    cout<<"Enter student name : ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Fist subject mark : ";
    cin>>mark1;
    cout<<"Enter second subject marks : ";
    cin>>mark2;


    result r;
    r.stdid(id,name);
    r.stdmark(mark1,mark2);
    r.display();

    return 0;
}
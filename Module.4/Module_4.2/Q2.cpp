#include<iostream>
using namespace std;

    class bank
    {
        string name;
        int AC_number;
        string AC_type;
        int balance;
        int Update_balance;
        int update_balance1;

        public:

        void Value()
        {   
           
            cout<<"Name of the Dipositor :"<<endl;
            getline(cin,name);
            cout<<"Account Number :"<<endl;
            cin>>AC_number;
            cout<<"Type of Account :"<<endl;
            cin.ignore();
            getline(cin,AC_type);
            cout<<"Balance amount in the Account :"<<endl;
            cin>>balance;
        }
        int diposit1;
        void diposit()
        {
            cout<<"Before deposite, your account balance is :"<<balance<<endl;
            cout<<"the deposit amount is :"<<endl;
            cin>>diposit1;
            cout<<"After Deposite "<<diposit1<<"Rs. The Balance Is "<<diposit1+balance<<endl<<endl;
            balance = diposit1 + balance;
        }
        int Withdrow1;
        void Withdrow()
        {
            cout<<"Before withdraw, your account balance is :"<<balance<<endl;
            cout<<"the withdraw amount is :"<<endl;
            cin>>Withdrow1;
            balance = balance - Withdrow1;
            cout << "After withdraw " << Withdrow1<< "Rs. the balance is " << balance <<endl<<endl;
        }

        void print()
        {
            cout<<"----------------------Wellcome---------------------"<<endl;
            cout<<"\t\tRepresent A Bank Account"<<endl;
            cout<<"Name of the Dipositor -"<<name<<endl;
            cout<<"Account Number -"<<AC_number<<endl;
            cout<<"Type of Account -"<<AC_type<<endl;
            cout<<"Balance amount in the Account -"<<balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Before Deposite, Your Account Balance Is -"<<balance<<endl;
            cout<<"The Deposite Amount Is -" << diposit1<<endl;
            cout<<"After Deposite" << diposit1<<"Rs. The Balance Is"<<balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Before Withdraw, Your Account Balance Is -"<<balance<<endl;
            cout<<"The Withdraw Amount Is -" << Withdrow1<<endl;
            cout<<"After Withdraw " << Withdrow1<<"Rs. The Balance Is "<<balance<<endl;
        }
    };

int main(){

    bank o1;
    o1.Value();
    o1.diposit();
    o1.Withdrow();
    o1.print();
    return 0;
}
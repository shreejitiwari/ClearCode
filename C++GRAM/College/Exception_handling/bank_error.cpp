#include<iostream>
#include<string>
#include<sstream>
#include<exception>
using namespace std;

class customer;

class BankException
{
    private:
        string error;
    public:
        BankException(customer &C,   long amt);
        string show_error();
};


class customer
{
    private:
        string name;
        long account_no;
        long balance;


    public:
        friend class BankException;
        customer(string n, long accno, long b)
        {
            name = n;
            account_no = accno;
            balance = b;
        }


        void withdraw(long amt)
        {
            if (balance - amt <1000)
            {
                throw BankException(*this, amt);
            }    
            balance = balance - amt;
            cout<<"Here is your "<<amt<<"$"<<endl;
            cout<<"Your current balance is now "<<balance<<"$"<<endl;

        }

};



BankException::BankException(customer &C, long amt)
{
    stringstream s;
    s<<"Balance will become less than 1000 if "<<amt<<"$ is debited, hence transanction not possible"<<endl;
    s<<"Name : "<<C.name<<"\nAccount Number : "<<C.account_no<<"\nAvailable Balance : "<<C.balance;
    error = s.str();
}

string BankException::show_error()
{
    return error;
}



int main()
{
    customer one("Henry", 789456123, 1200);
 
    try
    {
        one.withdraw(100);
        one.withdraw(5);
        one.withdraw(60);
        one.withdraw(100);
    }

    catch (BankException &B)
    {
        cerr<<B.show_error()<<endl;
    }



}
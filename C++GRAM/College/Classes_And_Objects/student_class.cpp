#include<iostream>
#include <iomanip>
using namespace std;

class student
{
    private:
    int roll_no;
    char name[100];
    int age;

    public:
    void read()
    {
        cout<<"Enter roll number, name and age : ";
        cin>>roll_no>>name>>age;
    }

    void show()
    {
        cout<<left<<setw(20)<<roll_no<<left<<setw(30)<<name<<left<<setw(10)<<age<<endl;
    }

};



int main()
{
    int n;
    cout<<"How many student's record you want to enter : ";
    cin>>n;

    student students[n];
    for (int i=0; i<n; i++)
    {
        students[i].read();
    }

    cout<<endl<<left<<setw(20)<<"Roll No."<<left<<setw(30)<<"Name"<<left<<setw(10)<<"Age"<<endl;


    for (int i=0; i<n; i++)
    {
        students[i].show();
    }

    return 0;
}
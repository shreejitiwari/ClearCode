#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
        string name; int rollno;
    public:
        void read();
        void show();

};

class s_physical : public student
{
    private:
        float height, weight, age;

    private:
        void read();
        void show();
};

class s_marks : public s_physical
{
    private:
        int maths, cse, cbcs;

    public:
        void read();
        void show();
};


void student::read()
{
    cout<<"Enter your name, roll number : ";
    cin>>name>>rollno;
}

void student::show()
{
    cout<<"Name : "<<name<<endl<<"Roll Number : "<<rollno<<endl;
}

void s_physical::read()


#include<iostream>
using namespace std;

int summation(int);

int main()
{
    int n, sum;
    cout<<"How many inputs : ";
    cin>>n;
    cout<<"Enter "<<n<<" integers : "<<endl;
    sum = summation(n);
    cout<<"Summation of all the inputted numbers = "<<sum;



    return 0;
}

int summation(int n)
{
    int num;
    cin>>num;

    if (n==1)
    {
        
        return num;
    }

    else 
        return num + summation(n-1);

}
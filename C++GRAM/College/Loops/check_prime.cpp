#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    if (num%2!=0 && num%3!=0 && (num%6 ==1 || num%6 == 5))
        cout<<"Prime";

    else 
        cout<<"Not Prime";


    return 0;

}
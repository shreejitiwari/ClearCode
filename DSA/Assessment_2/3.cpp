// 3.	WAP such that the total time complexity is O(log n).

#include<iostream>
using namespace std;

int main()
{
    // int number, digit=0;
    // cout<<"Enter any number to count digits : ";
    int n;
    cout<<"Enter some value n : ";
    cin>>n;
    for (int i=1; i<=n; i=i*2)   // O(log n)
    {
        cout<<i<<", ";
    }
    return 0;
}
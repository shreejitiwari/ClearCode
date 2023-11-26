// 1.	WAP such that the total time complexity is O(n).

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<"Enter elements to store in an array of size 10 : ";
    for (int i=0; i<10; i++)  // O(n)
    {
        cin>>a[i];
    }

    cout<<"Entered elements in the array are : "<<endl;
    for (int i=0; i<10; i++)    // O(n)
    {
        cout<<a[i]<<", ";
    }
    return 0;
}
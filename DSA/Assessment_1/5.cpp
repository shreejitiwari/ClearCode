#include<iostream>
using namespace std;

// 1.	Construct an array  of size 5
// @Shreeji Tiwari

int main()
{
    int array[10] = {12,23,34,56,67,2,3,5,6,7};
    
    int array_size = sizeof(array)/sizeof(array[0]);
    cout<<"OUTPUT : Size of the array = "<<array_size;
    return 0;
}
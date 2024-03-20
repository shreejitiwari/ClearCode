#include<iostream>
using namespace std;

void print_1_to_N(int n)
{
    if (n<1) return;

    print_1_to_N(n-1);
    cout<<n<<endl;

}


int main()
{
    int n;
    cout<<"Enter a value of N for range 1 to N : ";
    cin>>n;
    print_1_to_N(n);
    return 0;
}
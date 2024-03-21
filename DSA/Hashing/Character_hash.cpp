#include<iostream>
using namespace std;

int main()
{
    int hash[256]={0};
    string s;
    getline(cin,s);

    for (auto ch:s)
    {
        hash[ch] += 1;
    } 


    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;
        cout<<c<<" : "<<hash[c]<<endl;
    }
 

}
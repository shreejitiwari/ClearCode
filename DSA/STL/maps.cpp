#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{   
    map<vector<int>,int> m;
    m[{1,2,3}] = 10;
    m[{4,5,6}] = 20;

    for (auto i: m)
    {
        for (auto j: i.first)
        {
            cout<<j<<" ";
        }
        cout<<": "<<i.second<<endl;
    }
    return 0;
}
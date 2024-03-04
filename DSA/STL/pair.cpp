// #include<bits/stdc++.h>
#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main()
{
    pair <int, vector<int>> p ;
    p.first = 1;
    p.second={1,2,3,4};
    cout << p.first << " " << p.second[0] << " " << p.second[1] << " " << p.second[2] << " " << p.second[3] << endl; 

    //pair p1 = make_pair(1,2);

/*
We cannot declare a pair with an array as the second element (like int a[]), it is not allowed in C++.
But the same can be achieved by using vector or array stl.
*/

}
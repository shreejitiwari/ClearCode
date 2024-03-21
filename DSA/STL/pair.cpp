// #include<bits/stdc++.h>
#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    pair <int, vector<int>> p ;
    p.first = 1;
    p.second[0] = 2;
    p.second[1] = 3;
    p.second[2] = 4;
    p.second[3] = 5;

    sort(p.second.begin(),p.second.begin()+4);
    cout << p.first << " " << p.second[0] << " " << p.second[1] << " " << p.second[2] << " " << p.second[3] << endl; 

    //pair p1 = make_pair(1,2);

    max_element(p.second.begin(),p.second.end());

}
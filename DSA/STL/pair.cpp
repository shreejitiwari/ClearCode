// #include<bits/stdc++.h>
#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main()
{
    pair <int, vector<int>> p = {2, {1,2,3,4}};
    cout << p.first << " " << p.second[0] << " " << p.second[1] << " " << p.second[2] << " " << p.second[3] << endl; 

/*
We cannot declare a pair with an array as the second element, it is not allowed in C++.
*/

}
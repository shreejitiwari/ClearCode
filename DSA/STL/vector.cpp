#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {10,23,43,50};
    vector<int>::reverse_iterator last = v.rbegin();
    // last++;
    cout<<"Last : "<<(*last)<<endl;
    vector<int> v3 (2,10);
    /*

    * end and rend points to the memory address after the last element, 
    so if we dereference them, they may return garbage value.
    
    * rend and rbegin are used to iterate in reverse order. They work by
     reversing the vector and then pointing to the end and begining of the reversed 
     vector. 
     E.g : {10,23,43,50} -> {50,43,23,10}
            rbegin() -> 50
            --rend() -> 10  * because rend points to the memory address after the 
                            last element, value might be garbage
            begin() -> 10
            --end() -> 50   * because end points to the memory address after the 
                            last element, value might be garbage
    */

    // cout<<"v[7] : "<<v[7]<<endl<<"v.at(7) : "<<v.at(7)<<endl;
    // for index out of range, v[] does not throw an error, but v.at() does.

    cout<<"v.back() : "<<v.back()<<endl;
    cout<<"v.front() : "<<v.front()<<endl;
    cout<<"v.capacity() : "<<v.capacity()<<endl;
    cout<<"v.size() : "<<v.size()<<endl;
    cout<<"v.max_size() : "<<v.max_size()<<endl;
    cout<<"v.empty() : "<<v.empty()<<endl;
    // cout<<"v.pop_back() : "<<v.pop_back()<<endl; //pop_back does not return anything
    // cout<<"v.find(23) : "<<v.find(23)<<endl; //find does not work with vector
    //cout<<"v.begin() : "<<v.begin()<<endl;

    
    cout<<"Emplace back"  <<endl;
    vector<pair<int,int>> v1 = {{1,2},{3,4},{5,6}};
    v1.emplace_back(12,34);
    cout<<v1.back().first<<" "<<v1.back().second<<endl;
    auto it = v.begin();
    v.insert(v.begin(),10);

    // vector<auto> vc = {1,4,5};
    // cout<<"vc[0] = "<<vc[0];

    vector<vector<bool>> m(10,vector<bool>(0));
    cout<<"Size of m : "<<m.size()<<"\nWith values"<<endl;
    for (bool i : m)
    {
        for(bool j:i)
        {
            cout<<j<<", ";
        }
    }

    return 0;
}
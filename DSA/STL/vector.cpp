#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {10,23,43,50};
    vector<int>::reverse_iterator last = v.rbegin();
    // last++;
    cout<<"Last : "<<(*last)<<endl;

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
    //cout<<"v.begin() : "<<v.begin()<<endl;

    
    cout<<"Emplace back"  <<endl;
    vector<pair<int,int>> v1 = {{1,2},{3,4},{5,6}};
    v1.emplace_back(12,34);
    cout<<v1.back().first<<" "<<v1.back().second<<endl;


    vector vc = {1,4,5};
    cout<<"vc[0] = "<<vc[0];
    
    return 0;
}
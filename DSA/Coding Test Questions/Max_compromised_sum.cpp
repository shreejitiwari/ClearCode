/*
There is a computer network consisting of n servers, or nodes, numbered from 1 ton, and each node has a security value security val[i] A hacker must choose a starting node, start jumping through the network compromising servers along the way until reaching the end. From node x, the hacker can jump to node (x + k). If node (x+k) does not exist, the jump out of the network and the hack ends. Initially, the hacker has access to O servers with O security value. The security value at each compromised node is added to the hacker's security value sum, and values may be negative. The task is to choose the starting node optimally such that the hacker compromises servers with the maximum possible security value sum.

*/

#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
#include<chrono>

int find_max_compromised_security(vector<int> security_val, int k)
{
    int maxSum = INT_MIN, curSum=0;
    vector<int> initSum (k, 0);
    vector<int> prevSum;

    for (int i=0; i<k; i+=1)
    {
        prevSum.push_back(security_val[i]);
        for (int j=i; j<security_val.size(); j+=k)
        {
            initSum[i] += security_val[j];
        }

        maxSum = max(maxSum, initSum[i]);

        // cout<<"("<<initSum[i]<<", "<<
    }

    for (int i=k; i< security_val.size(); i++)
    {
        curSum = initSum[i%k] - prevSum[i%k];
        prevSum[i%k] += security_val[i];

        maxSum = max(maxSum, curSum);
    }

    return maxSum;
}

int original_result(vector<int> security_val, int k)
{
    int maxSum = 0;

    for (int i = 0; i<security_val.size(); i++)
    {
        int curSum = 0;
        for (int j = i; j<security_val.size(); j+= k)
        {
            curSum += security_val[j];

        }

        maxSum = max(maxSum, curSum);
    }

    return maxSum;
}


int main()
{
    // int tests;
    // cin>>tests;

    // while(tests--)
    // {
        cout<<"Enter in this format  : \nn k\nv1 v2 v3 ...\n"<<endl;
        int n,k;
        vector<int> security_val;

        cin>>n>>k;  // input n, k
        while(n--)  // input vector
        {
            int val;
            cin>>val;
            security_val.push_back(val);
        }



        auto start_time = std::chrono::high_resolution_clock::now();

        // cout<<original_result(security_val, k)<<" : ";
        cout<<find_max_compromised_security(security_val, k)<<endl;

        auto end_time = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();

        std::cout << "Execution time: " << duration << " microseconds" << std::endl;
        return 0;


    // }
}
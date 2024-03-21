/*
Problem statement
Given an array 'v' of 'n' numbers.



Your task is to find and return the highest and lowest frequency elements.


If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.



Example:
Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]

Output: 1 2

Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].
*/

// BRUTE FORCE
/*
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        if (count > maxFreq) {
            maxEle = arr[i];
            maxFreq = count;
        }
        if (count == maxFreq){
            maxEle = min(maxEle, arr[i]);
        }
        if (count < minFreq) {
            minEle = arr[i];
            minFreq = count;
        }
        if (count == minFreq){
            minEle = min(minEle, arr[i]);
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {10, 10,10,3,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}

*/

// OPTIMIZED CODE

#include <bits/stdc++.h>
using namespace std;

void countFreq(vector<int> v){
    unordered_map<int, int> frmp;
    for (auto elem : v) {
      frmp[elem] += 1;
    }
    
    int high,low;
    high = low = (*frmp.begin()).first;
    

    for (auto elem : frmp)
    {
      if (elem.second > frmp[high]) high=elem.first;
      if (elem.second == frmp[high]) high = min(high, elem.first);
      if (elem.second < frmp[low]) low = elem.first;
      if (elem.second ==  frmp[low]) low = min(low, elem.first);
    }

    cout<<"HIGH : "<<high<<endl;
    cout<<"LOW : "<<low<<endl; 

}


int main()
{
    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2;
    cout << s3 << endl;
    vector<int> v = {10, 10,10,3,3,3};    
    countFreq(v);
    return 0;
}
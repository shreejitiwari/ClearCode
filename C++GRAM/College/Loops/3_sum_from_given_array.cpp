/*
Print 3 numbers from the inputed array whose sum is equal to the inputted number

*/


#include<iostream>
using namespace std;


int find_triplet(int a[],int target, int n);
int main()
{
    int target, n, found = 0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];

    cout<<"Enter the elements of the Array : ";
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter target sum value : ";
    cin>>target;

    if (find_triplet(a,target, n) == 1)
    {
        cout<<"Not found !!";
    }
      

    return 0;    
}

int find_triplet(int a[],int target, int n)
{
    
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (a[i]+ a[j] + a[k] == target)
                {
                    
                    printf("%d, %d, %d\n", a[i],a[j],a[k]);
                
                    return 0;
                }

            }
        }
    }
    
    return 1;

}
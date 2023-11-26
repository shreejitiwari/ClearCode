#include<iostream>
using namespace std;

void inputArray(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}


int insert(int a[], int n, int x)
{
    int i;
    for (i=n-1; i>=0; i--)
    {
        if (x < a[i])
            a[i+1] = a[i];
        
        else
        {
            a[i+1] = x;
            break;
        }
    }

    if (i==-1)
        a[0] = x;
        
    return n+1;

}


void printArray(int a[], int n)
{
    for (int i=0; i<n; i++)
        cout<<a[i]<<", ";
}

int main()
{
    cout<<"Hello \n";
    int x1, x2, n, i, n2;
    cout<<"Enter size of the array : ";
    cin>>n;
    
    int *a = new int[n];
    cout<<"Enter array elements in sorted form : ";
    inputArray(a,n);
    
    cout<<"Enter the number of elements you want to insert : ";
    cin>>n2;
    cout<<"Enter the array of elements you want to insert in the array : ";
    int *arr = new int [n2];
    inputArray(arr, n2);


    for (int elem=0; elem<n2; elem++)
    {
        n = insert(a,n, arr[elem]);
    }

    cout<<"New array after insertion : "<<endl;
    
    printArray(a, n);





}
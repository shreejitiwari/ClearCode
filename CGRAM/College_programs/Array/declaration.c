/*
1) int arr[5] - no error
2) int arr[5] = {1,2,3,4,45}
3) int arr[5] = {2,23}
4) int arr[5] = {0}
5) int arr[5] = {2,23,4,3,2,1,5,6} - no error
6) int arr[] = {2,23,4,3,2,1,5,6} - no error
7) int arr[] - error


*/

#include<stdio.h>
int main()
{

    int arr[] = {2,23,4,3,2,1,5,6};
    // printf("%d\n",arr[-2]);
    for (int i=0;i<=8-1;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}
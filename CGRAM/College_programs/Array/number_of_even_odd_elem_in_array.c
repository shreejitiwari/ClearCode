#include<stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE], no_odd=0, no_even=0, elem;
    printf("Enter elements of array (5 elements) : \n");
    for (int i=0; i<=SIZE-1; i++)
    {
        scanf("%d", &arr[i]);
        arr[i]%2==0?(no_even+=1):(no_odd+=1);
        
        // if (arr[i]%2==0)
        // {no_even+=1;}
        // else
        // {no_odd+=1;}
        
    }



    printf("\nNo of odd = %d\nNo of Even = %d",no_odd,no_even);
    return 0;
}
#include<stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE], sum_odd=0, sum_even=0, elem;
    printf("Enter elements of array (5 elements) : \n");
    for (int i=0; i<=SIZE-1; i++)
    {
        scanf("%d", &arr[i]);
        i%2==0?(sum_even+=arr[i]):(sum_odd+=arr[i]);

        
    }



    printf("\nSum of odd index elements = %d\nSum of Even indext elements = %d",sum_odd,sum_even);
    return 0;
}
// without recursion

#include<stdio.h>
 
int main()
{
    int bin_arr[10],n,temp, idx=0;
    printf("Enter number : ");
    scanf("%d", &n);
    temp = n;


    while (temp>0)
    {
        bin_arr[idx] = (temp%2);
        temp = temp/2;
        idx++;
    }
    
    printf("Binary of %d = ", n);
    for (int i = idx-1; i>=0; i--)
    {
        printf("%d",bin_arr[i]);
    }

    return 0;
}
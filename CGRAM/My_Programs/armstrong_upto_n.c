#include<stdio.h>
#include<math.h>
int main()
{   
    long int n;
    printf("Enter n : ");
    scanf("%d",&n);
    

    
    for (int j=1; j<=n ; j += 1)
    {
        int digit,sum = 0,temp = j;
        
        while (temp>0)
        {
            digit = temp%10;
            sum += digit*digit*digit;
            temp /= 10;
        }
        if (sum == j)
            printf("%d\t",j);
    }


    return 0;
}
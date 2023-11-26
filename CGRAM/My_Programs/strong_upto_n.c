#include<stdio.h>
int main()
{
    int n, temp, digit, sum, factorial;
    printf("Enter n : ");
    scanf("%d",&n);
    

    for (int i=1;i<=n; i += 1)
    {
        temp = i;
        sum = 0;
        while (temp>0)
        {

            factorial=1;
            digit = temp%10;
            
            if (digit != 0)
            {
                for (int j=1;j<=digit;j += 1)
            {
                factorial *= j;
            }
            }

            sum += factorial;
            temp /= 10;

        }

        if (sum == i)
            printf("%d    ",sum);

    }

    return 0;
}
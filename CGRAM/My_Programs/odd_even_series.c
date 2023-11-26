#include<stdio.h>
int main()
{
    int lmt;
    printf("\nEnter any integer : ");
    scanf("%d",&lmt);

    for (int i =1;i<=lmt;i += 1)
    {
        if (i%2 == 0)
        {
            printf("%d is Even\n",i);
        }
        else
        {
            printf("%d is Odd\n",i);
        }
        

    }
    return 0;
}
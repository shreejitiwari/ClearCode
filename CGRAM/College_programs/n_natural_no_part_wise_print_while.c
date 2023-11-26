
#include<stdio.h>
int main()
{
    int i=1,n,cont=1;
    printf("Enter n : ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",i);

        if (i%10 == 0 && i!=n)
        {
            printf("\nYou want to continue (y = 1/n = 0)\n : ");
            scanf("%d",&cont);

            if (cont==0)
            break;
            else
            i++;
            continue;
            

        }
        
        i++;
    }

    return 0;
}
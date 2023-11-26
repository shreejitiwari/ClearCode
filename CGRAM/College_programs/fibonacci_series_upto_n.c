#include<stdio.h>
int main()
{
    int num,t1 =1,t2=2,t3 = 3;
    printf("Enter num : ");
    scanf("%d",&num);

    printf("%d\t%d\t",t1,t2);

    while (t3<=num)
    {

        printf("%d\t",t3);
        
        t1 = t2;
        t2 = t3;
        t3 = t1+t2;
    }
    

    return 0;
}
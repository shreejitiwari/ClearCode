#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter any number whose table you want to print : ");
    scanf("%d",&num);

    for(int i=1;i<=10;i += 1 )
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}
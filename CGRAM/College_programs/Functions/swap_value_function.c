#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter a,b : ");
    scanf("%d%d",&a,&b);
    printf("Before function call :\na=%d\nb=%d\n\n",a,b);
    swap(&a,&b);
    printf("After function call :\na=%d\nb=%d\n\n",a,b);

    return 0;
}

void swap(int *a,int *b)
{
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
    printf("Inside function call :\na=%d\nb=%d\n\n", *a,*b);
}
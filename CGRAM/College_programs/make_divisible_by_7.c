#include<stdio.h>
void main()
{
    int num,r, result;
    printf("\n\nEnter any number : ");
    scanf("%d",&num);
    r = num%7;
    result = 7-r;
    printf("Result = %d",result);

}
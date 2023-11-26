#include<stdio.h>
int main()
{
    int num, temp, revnum=0;
    printf("Enter num : ");
    scanf("%d",&num);
    temp = num;

    while (temp>0)
    {
        revnum = 10*revnum + temp%10;
        temp /= 10;
    }

    printf("Reverse of %d = %d", num, revnum);

    return 0;
}
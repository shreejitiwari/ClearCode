#include<stdio.h>
int main()
{
    int amt,n500,n100,n50,n20,n10,n5,n2,n1;
    printf("Enter amount : ");
    scanf("%d",&amt);
    n500 = amt/500;
    amt = amt%500;
    n100 = amt/100;
    amt = amt%100;
    n50 = amt/50;
    amt = amt%50;
    n20 = amt/20;
    amt = amt%20;
    n10 = amt/10;
    amt = amt%10;
    n5 = amt/5;
    amt = amt%5;
    n2 = amt/2;
    amt = amt%2;
    n1 = amt/1;
    amt = amt%1;

    printf("500 : %d\n100 : %d\n50 : %d\n20 : %d\n10 : %d\n5 : %d\n2 : %d\n1 : %d",n500,n100,n50,n20,n10,n5,n2,n1);
    return 0;
}
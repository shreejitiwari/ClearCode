#include<stdio.h>
void count_digits(int, int*);
int main()
{
    int num, no_of_digits=0;
    printf("Enter any integer : ");
    scanf("%d",&num);

    count_digits(num, &no_of_digits);
    printf("Number of digits in %d = %d", num, no_of_digits);

    return 0;
}

void count_digits(int num, int *count)
{
    
    while (num>0)
    {
        num /= 10;
        *count+=1;
    }

}
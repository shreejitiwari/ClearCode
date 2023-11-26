// used recursion

#include<stdio.h>

void get_paper_size(int, int ,int);
int main()
{
    int n;
    printf("Enter paper number : ");
    scanf("%d",&n);
    get_paper_size(n, 1189,841);
    return 0;
}

void get_paper_size(int n, int A0l, int A0b)
{
    
    if (n==0)
        printf("%dx%d", A0l,A0b);

    else
    {
        if (A0l>A0b)
            A0l/=2;
        else
            A0b/=2;

        get_paper_size(n-1, A0l, A0b);
    }
}
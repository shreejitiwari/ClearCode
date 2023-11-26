#include<stdio.h>
#include <ctype.h>
int main()
{
    char a,b,c;int a_,b_,c_,g;
    printf("Enter three numbers separated by space : ");
    scanf("%c%c%c",&a,&b,&c);

    a_ = isdigit(a);
    b_ = isdigit(b);
    c_ = isdigit(c);
    printf("%d",a_);
    printf("%d",b_);
    printf("%d",c_);

    if (a_ && b_ && c_)
    {   
        if (a>b && a>c)
            g = a;
        else if (b>a && b>c)
            g = b;
        else if (c>a && c>b)
            g = c;

        else if (a == b && b==c)
            g=a;

        printf("%d is greatest among %d, %d, %d",g,a,b,c);
    }

    else
        printf("Invalid input");
 
    
    
    return 0;
}
/*
1) char str[30] = "hello";
2) char str[30] = {'h','e','l','l','o','\0'};
3) char str[30] = "hello world";
4) char str[30] = ""  ~empty string

*/

/*
Printing methods : 
1) printf("%s", str);

*/

#include<stdio.h>
int main()
{
    char str[30] = "hello world";
    printf("%s", str);
    return 0;
}

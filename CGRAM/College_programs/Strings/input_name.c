#include<stdio.h>
int main()
{
    char str[30] = "";
    printf("Enter your name : ");
    // scanf("%s", str); ~ not good if we have spaces in string
    gets(str);
    printf("%s\n", str);

    return 0;
}
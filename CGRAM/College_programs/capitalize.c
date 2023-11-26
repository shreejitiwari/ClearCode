#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter any character in small case : ");
    scanf("%c",&ch);
    printf("Character : %c, ASCII value of %d",ch,ch);
    ch -= 32;
    printf("\n\nCharacter in capital : %c",ch);

    return 0;
}
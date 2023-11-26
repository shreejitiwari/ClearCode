#include<stdio.h>

void char_freq(char * , char, int, int *);
int main()
{
    char str[50]="", ch;
    int i, freq=0;
    printf("Enter a string : ");
    gets(str);
    printf("Enter character whose frequency you want to find : ");
    scanf("%c",&ch);
    char_freq(str, ch, 0, &freq);
    printf("Frequency of '%c' = %d", ch, freq);

    return 0;
}


void char_freq(char str[], char ch, int idx, int *f)
{
    // int f = 0 ;
    if (str[idx]=='\0')
        return;

    else
    {
        if (str[idx] == ch)
            *f += 1;
        
        char_freq(str, ch, idx+1,f);
        
    }
    
}
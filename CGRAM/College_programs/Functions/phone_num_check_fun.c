#include<stdio.h>
#include<string.h>

void find_missing(char phn[]);
int is_phn_valid(char phn[]);

int main()
{
    char phone_no[11];
    printf("Enter phone number : ");
    gets(phone_no);

    if (is_phn_valid(phone_no) ==0)
        find_missing(phone_no);

    else
        printf("\nINVALID PHONE NUMBER INPUTTED !!!");
}

void find_missing(char phn[])
{
    int len = strlen(phn);
    for (char j='0'; j<='9'; j++)
    {
        int found =0 ;
        for (int i=0; i<=len;i++ )
        {
            if (phn[i]==j)
            {
                found =1;
                break;
            }  
        }

        if (found==0)
        {
            printf("%c,",j);
        }

    }    

}

int is_phn_valid(char phn[])
{
    int len = strlen(phn);
    for (int i=0; i<len  ;i++)
    {
        if (phn[i]<'0' || phn[i]>'9' )
        {
            printf("\nINVALID PHONE NUMBER INPUTTED !!!");
            return 1;
            
        }
    }

    return 0;
}
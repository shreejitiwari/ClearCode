#include<stdio.h>
#include<string.h>

int main()
{
    char phone_no[11];
    printf("Enter phone number : ");
    gets(phone_no);
    int len = strlen(phone_no);

    for (int i=0;i<len;i++)
    {
        if (phone_no[i]<'0' || phone_no[i]>'9' )
        {
            printf("\nINVALID PHONE NUMBER INPUTTED !!!");
            return 1;
        }
    }


    for (char j='0'; j<='9'; j++)
    {
        int found =0 ;
        for (int i=0;i<len;i++ )
        {
            if (phone_no[i]==j)
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

    return 0;
}
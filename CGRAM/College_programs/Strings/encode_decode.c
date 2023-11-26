#include<stdio.h>
#include<stdlib.h>
int main()
{
    char input_str[100]="", encrypted_str[100]="", decrypted_str[100]="";
    int passkey=0, i, temp, c=0, choice;

    printf("1) Encode\n2) Decode\n\n CHOICE : ");
    scanf("%d",&choice);
    getchar();
    switch (choice)
    {
        case 1:
        {
            c=0;
            printf("\nEnter string to encode : ");
            gets(input_str);
            printf("Enter 4 digit encryption key : ");
            scanf("%d", &passkey);
            temp = passkey;
            while (temp>0)
            {
                c += temp%10;
                temp /=10;
            }

            for (int i=0; input_str[i]!='\0';i++)
            {
                encrypted_str[i] = input_str[i]+c;

                if (i%2==0)
                {
                    encrypted_str[i] -= i;
                }
                else
                {
                    encrypted_str[i] += i;
                }

            }

            // encrypted_str[i] = '\0';
            printf("\n\nEncoded String : %s",encrypted_str);

            break;
        }

        case 2:
        {
            c = 0;
            printf("\nEnter string to decode : ");
            gets(input_str);
            printf("Enter 4 digit encryption key : ");
            scanf("%d", &passkey);
            temp = passkey;
            while (temp>0)
            {
                c += temp%10;
                temp /=10;
            }

            for (int i=0; input_str[i]!='\0';i++)
            {
                decrypted_str[i] = input_str[i]-c;

                if (i%2==0)
                {
                    decrypted_str[i] += i;
                }
                else
                {
                    decrypted_str[i] -= i;
                }

         
            }

            // encrypted_str[i] = '\0';
            printf("\n\nDecoded String : %s",decrypted_str);


            break;
        }


    }

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include "emotional_intelligence.h"

int main()
{
    char question[Q_SIZE];
    FILE *fp = fopen("questions.dat", "ab");
    if (fp==NULL)
    {
        printf("Sorry, cannot open file.\n");
        exit(1);
    }

    printf("Please enter questions : \n\n");
    for (int i=1; i<=30; i++)
    {
        printf("Q.%d  :  ", i);
        gets(question);
        fwrite(question, sizeof(question), 1, fp);

    }

    fclose(fp);
    return 0;

}
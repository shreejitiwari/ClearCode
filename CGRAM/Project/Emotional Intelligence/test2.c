#include "emotional_intelligence.h"
#define take_test main

void take_test()
{
    user_data existing_user;
    user_data user = {0};
    int choice;
    char question[Q_SIZE];
    FILE *question_file = fopen("questions.dat", "rb");
    FILE *user_responses = fopen("user_data.dat", "rb+");

    // if (question_file == NULL)
    //     create_qf();

    printf("The purpose of this self-evaluation is to measure your tendencies and abilities within various areas of emotional intelligence. The Emotional Intelligence Self-Evaluation measures five areas of emotional intelligence including : \n");

    printf("- Emotional Awareness\n");
    printf("- Managing One's Emotions\n");
    printf("- Self-Motivation\n");
    printf("- Empathy\n");
    printf("- Coaching Others' Emotions\n");


    printf("\nPlease enter your name : ");
    gets(user.user_name);

    printf("Please enter your age : ");
    scanf("%d", &user.age);

    printf("\n\nPlease write the number which best describes your agreement with the questions : \n\n");

    for (int i=1; i<=30; i++)
    {
        fread(question, sizeof(question), 1, question_file);
        printf("Q.%d  %s\n",i, question);
        puts("\t1. Disagree Very Much");
        puts("\t2. Disagree Moderately");
        puts("\t3. Disagree Slightly");
        puts("\t4. Agree Slightly ");
        puts("\t5. Agree Moderately");
        puts("\t6. Agree Very Much");

        printf("\n Choice : ");
        scanf("%d", &choice);
        if (i==1 || i == 2 || i == 4 || i == 17 || i == 19 || i == 25)
            user.emotional_awareness_score += choice;

        else if (i == 3 || i == 7 || i == 8 || i == 10 || i == 18 || i == 30)
            user.own_emotion_manage_score += choice;

        else if (i == 5 || i == 6 || i == 13 || i == 14 || i == 16 || i == 22)
            user.self_motivation_score += choice;

        else if (i == 9 || i == 11 || i == 20 || i == 21 || i == 23 || i == 28)
            user.empathy_score += choice;

        else if (i == 12 || i == 15 || i == 24 || i == 26 || i == 27 || i == 29)
            user.others_emotions_coaching_score += choice;
 
        printf("\n");


    }



    while (fread(&existing_user, sizeof(existing_user), 1, user_responses)==1)
    {
        if (strcmp(user.user_name, existing_user.user_name) == 0)
        {
            fseek(user_responses, -(long)sizeof(existing_user), SEEK_CUR);
            break;
        }
    }




    fwrite(&user, sizeof(user), 1, user_responses);
    

    fclose(user_responses);
    fclose(question_file);
    // see_results(user.user_name);

}

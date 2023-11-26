#include "emotional_intelligence.h"
// #define take_test main


void take_test()
{
    user_data existing_user;
    user_data user = {0};
    int choice;
    char question[Q_SIZE];
    create_files(fopen("questions.dat", "rb"), fopen("user_data.dat", "rb"));
    FILE *question_file = fopen("questions.dat", "rb");
    FILE *user_responses = fopen("user_data.dat", "rb+");





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


    rewind(user_responses);
    while (fread(&existing_user, sizeof(existing_user), 1, user_responses)==1)
    {
        if (strcmp(user.user_name, existing_user.user_name) == 0 && user.age == existing_user.age)
        {
            fseek(user_responses, -(long)sizeof(existing_user), SEEK_CUR);

            break;
        }
    }




    fwrite(&user, sizeof(user), 1, user_responses);
    

    fclose(user_responses);
    fclose(question_file);
    see_results(user.user_name, user.age);

}

void see_results(char *name, int age)
{

    user_data user = {0};
    FILE *user_responses = fopen("user_data.dat", "rb");

    printf("\n\nRESULTS\n");

    while (fread(&user, sizeof(user), 1, user_responses) == 1)
    {
        if (strcmp(user.user_name, name) == 0 && user.age == age)
        {   
            printf("|%-30s|%-10s|%-30s|\n", "==============================","==========", "==============================");
            printf("|%-30s|%-10s|%-30s|\n", "Emotional Competency","Score", "Conclusion");
            printf("|%-30s|%-10s|%-30s|\n", "==============================","==========", "==============================");
            printf("|%-30s|%-10d|%-30s|\n","Emotional Awareness", user.emotional_awareness_score, meaning(user.emotional_awareness_score));
            printf("|%-30s|%-10d|%-30s|\n","Managing One's Emotions", user.own_emotion_manage_score, meaning(user.own_emotion_manage_score));
            printf("|%-30s|%-10d|%-30s|\n","Self-Motivation", user.self_motivation_score, meaning(user.self_motivation_score));
            printf("|%-30s|%-10d|%-30s|\n","Empathy", user.empathy_score, meaning(user.empathy_score));
            printf("|%-30s|%-10d|%-30s|\n","Coaching Others\' Emotions", user.others_emotions_coaching_score, meaning(user.others_emotions_coaching_score));    
            printf("|%-30s|%-10s|%-30s|\n", "------------------------------","----------", "------------------------------");
            printf("\nEach of the above competencies are important for being able to perform well in most managerial and professional jobs and are important to leading a fulfilling life in general. Therefore, you should consider creating a plan of self-development for areas in which your scores fell into the \'needs substantial development\' or \'needs some development\' range. Many books and seminars are available on each of the above emotional competencies to aid you in your development.");
        
            return;
        }

        
        
    }

    printf("\n\nSorry, Results NOT FOUND for name : %s, at age : %d !!", name, age);



}

void create_files(FILE *question_file, FILE *user_data_file)
{
    if (question_file == NULL)
    {   
        FILE *fp = fopen("questions.dat", "wb");
        char questions_list[][Q_SIZE] = 
        {
            "I use both negative and positive emotions as a source of wisdom about how to navigate my life.",
            "Negative feelings help me to address what I need to change in my life.",
            "I am calm under pressure.",
            "I have the ability to monitor my feelings from moment to moment.",
            "When challenged, I am good at getting calm and focused to flow with life's demands.",
            "When challenged, I am able to summon a wide range of positive emotions such as fun, joy, fighting spirit, and humor.",
            "I am in charge of how I feel.",
            "After something has upset me, I find it easy to regain my composure.",
            "I am effective at listening to other people's problems.",
            "I do not recycle and dwell on negative emotions.",
            "I am sensitive to the emotional needs of others.",
            "I have a calming influence on other people.",
            "I am able to motivate myself to try and try again in the face of setbacks.",
            "I try to be creative with life's challenges.",
            "I respond appropriately to other people's moods, motivations, and desires.",
            "I can easily enter into a \"zone\" state, or a state characterized by calmness, alertness, and focus.",
            "When the time is right, I face my negative feelings and work through what the issue is.",
            "I am capable of soothing myself after an upsetting event.",
            "Knowing my true feelings is crucial to my well-being.",
            "I am good at understanding the emotions of other people, even when the emotions are not directly expressed.",
            "I am adept at reading people's feelings by their facial expressions.",
            "I can easily set negative feelings aside when called upon to perform.",
            "I am aware of subtle social signals that indicate what others need.",
            "People view me as an effective coach for others' emotions.",
            "People who are aware of their true feelings are better pilots of their lives.",
            "I am often able to improve the moods of others.",
            "I am a good person to come to for advice about handling relationships.",
            "I am strongly attuned to others\' feelings.",
            "I help others use their motivations to achieve their personal goals.",
            "I can easily shake off negative feelings."


        };

   
        for (int i=1; i<=30; i++)
        {

            fwrite(questions_list[i-1] , sizeof(questions_list[i-1]), 1, fp);

        }    

        fclose(fp);
    }

    if (user_data_file == NULL)
    {
        FILE *user_data_creator = fopen("user_data.dat","wb");
        fclose(user_data_creator);
    }

}

const char *meaning(int x)
{
    if (x >=31)
        return "Definite Strength";

    else if (x >= 26)
        return "Needs some development";

    else 
        return "Needs substantial development";
}



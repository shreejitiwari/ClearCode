/* emotional_intelligence.h */
#include<stdio.h>
#include<string.h>

typedef struct 
{
    char user_name[100];
    int age;
    int emotional_awareness_score, own_emotion_manage_score, self_motivation_score, empathy_score, others_emotions_coaching_score;
    

} user_data;


extern void take_test();
extern void see_results(char *, int);
extern void create_files(FILE *, FILE *);
const char *meaning(int);

#define Q_SIZE 200
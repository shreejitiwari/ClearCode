#include "emotional_intelligence.h"
// #define create_qf main

void create_qf()
{

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


    FILE *fp = fopen("questions.dat", "wb");
    for (int i=1; i<=30; i++)
    {

        fwrite(questions_list[i-1] , sizeof(questions_list[i-1]), 1, fp);

    }    

    fclose(fp);
    


}
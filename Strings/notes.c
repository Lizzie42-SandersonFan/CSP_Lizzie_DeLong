// Lizzie DeLong, String Notes C

#include <stdio.h>
#include <string.h>

char subject[50];
char name[] = "Victoria";
char sentence[] = "The quick brown fox jumps over the lazy dog.";

int main(void){
    //printf("What class are you in: \n");
    //fgets(subject, sizeof(subject), stdin);
    //int subjectLength = strlen(subject);
    //subject[subjectLength-1] = 0;
    //printf("You are in %s, that is a cool class.", subject);
    //name[0] = 'T';
    //name[1] = 'o';
    //name[2] = 'r';
    //name[3] = 'i';
    //name[4] = ' ';
    //name[5] = ' ';
    //name[6] = ' ';
    //name[7] = ' ';
    //printf("%lu\n",sizeof(sentence));
    //printf("%d\n",strlen(sentence));

    char one[] = "Hello ";
    char two[] = "World!";
    char three[] = "Welcome to my program. ";
    
    printf("%s\n", one);
    strcat(one, two);
    printf("%s\n", one);
    strcat(three, one);
    printf("%s\n", three);

    return 0;
}
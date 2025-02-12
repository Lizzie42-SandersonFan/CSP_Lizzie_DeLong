// Lizzie DeLong, Silly Sentances Python

#include <stdio.h>
#include <string.h>

int main(void){
    printf("Hello! This is a program that is a mini MadLibs.\n");
    printf("This woun't take very long, just a few minutes!\n");
    char aName[20];
    printf("Need a Name:\n");
    scanf("%s",aName);
    
    char anAnimal[20];
    printf("Now and Animal:\n");
    scanf("%s",anAnimal);

    char aFood[20];
    printf("Finaly, a Food:\n");
    scanf("%s",aFood);

    char madLibSectionOne[] = " was off to school, and to get there, they rode a(n) ";
    char madLibSectionTwo[] = " to get there. \n";
    char madLibSectionThree[] = "After completing the first half of their classes, they got to eat ";
    char madLibSectionFour[] = " for lunch.";

    char finalLongString[150] = {0};
    strcat(finalLongString, aName);
    strcat(finalLongString, madLibSectionOne);
    strcat(finalLongString, anAnimal);
    strcat(finalLongString, madLibSectionTwo);
    strcat(finalLongString, madLibSectionThree);
    strcat(finalLongString, aFood);
    strcat(finalLongString, madLibSectionFour);

    printf("%s", finalLongString);
    return 0;
}
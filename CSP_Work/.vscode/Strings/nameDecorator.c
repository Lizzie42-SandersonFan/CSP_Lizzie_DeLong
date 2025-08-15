// Lizzie DeLong, Name Decorator C

#include <stdio.h>
#include <string.h>

int main(void){
    printf("Hello! This is a program you can use to give your name some pazazz. \n");

    char name[50];
    printf("Would you please tell me your name: \n");
    fgets(name, sizeof(name), stdin);
    int nameLength = strlen(name);
    name[nameLength-1] = 0;

    char decor[5];
    printf("And what symbol would you like around your name(one symbol and no numbers please): \n");
    scanf("%s", decor);

    char finalString[70] = {0};

    strcat(finalString, decor);
    strcat(finalString, decor);
    strcat(finalString, decor);
    strcat(finalString, name);
    strcat(finalString, decor);
    strcat(finalString, decor);
    strcat(finalString, decor);

    printf("%s", finalString);
    return 0;
}
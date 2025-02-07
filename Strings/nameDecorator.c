// Lizzie DeLong, Name Decorator C

#include <stdio.h>
#include <string.h>

int main(void){
    printf("Hello! This is a program you can use to give your name some pazazz. \n");

    char name[30];
    printf("Would you please tell me your name: \n");
    fgets(name, sizeof(name), stdin);

    char decor[5];
    printf("And what symbol would you like around your name(one symbol and no numbers please): \n");
    scanf("%s", decor);

    strcat(decor, decor);
    strcat(decor, name);
    strcat(decor, name);
    //strcat(decor, decor);

    printf("%s", decor);
    return 0;
}
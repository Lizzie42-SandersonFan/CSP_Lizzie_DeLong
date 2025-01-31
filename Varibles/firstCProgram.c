#include <stdio.h>

int main(void){
    //printf("Hello World");
    char greating[] = "Hello! I would like to know you more!";
    printf(greating);

    char yourName[30];
    scanf("%s", yourName);
    printf("Hello %s", yourName);

    char favBook[60];
    scanf("%s", favBook);
    printf("Great! Now tell me you favorite book: \n");
    

    printf("Thank you! Now I know you name %s is and you like the book %s\n", yourName, favBook);

    return 0;
}
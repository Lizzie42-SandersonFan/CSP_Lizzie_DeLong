// Lizzie DeLong, First C Project

#include <stdio.h>

int main(void){
    char greating[] = "Hello! I would like to know you more! \n";
    printf(greating);
    printf("Would you please tell me your name:\n");

    char yourName[30];
    fgets(yourName, sizeof(yourName), stdin);

    // find out how long the name is
    int nameLength = strlen(yourName);
    // cut off the last character by making it be the NULL character (0)
    yourName[nameLength-1] = 0;
 

    char favBook[60];
    printf("Great! Now tell me you favorite book: \n");
    fgets(favBook, sizeof(favBook), stdin);

    int bookLength = strlen(favBook);
    favBook[bookLength-1] = 0;
 
    printf("Thank you! Now I know your name is %s and you like the book %s!\n", yourName, favBook);

    return 0;
}
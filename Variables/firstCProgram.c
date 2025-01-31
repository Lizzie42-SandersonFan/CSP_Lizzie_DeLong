#include <stdio.h>

int main(void){
    char greating[] = "Hello! I would like to know you more! \n";
    printf(greating);
    printf("Would you please tell me your name:\n");

    char yourName[30];
    scanf("%s", yourName);
 

    char favBook[60];
    printf("Great! Now tell me you favorite book: \n");
    fgets(favBook, sizeof(favBook), stdin);
    //scanf("%s", favBook);
 
    

    printf("Thank you! Now I know you name %s is and you like the book %s\n", yourName, favBook);

    return 0;
}
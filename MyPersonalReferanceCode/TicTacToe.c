// I bored so I build Tic-Tac-Toe
#include <stdio.h>

// Many varibles that I think should be universal
int playerOsquare;
int playerXsquare;
char* squareOne = "1";
char* squareTwo = "2";
char* squareThree = "3";
char* squareFour = "4";
char* squareFive = "5";
char* squareSix = "6";
char* squareSeven = "7";
char* squareEight = "8";
char* squareNine = "9";

// Functions
void turnO(){
    printf("It's O's turn!\n");
    printf("Which square would you like to play in:\n");
    scanf("%d", &playerOsquare);
    /* 
    need to figure out an if statement to compare the user input with the corisponding varible and if that varible is not equal to X or O then the value is set to O in this function.
    */
}

void turnX(){
    printf("It's X's turn!\n");
    printf("Which square would you like to play in:\n");
    scanf("%d", &playerXsquare);
    /* 
    need to figure out an if statement to compare the user input with the corisponding varible and if that varible is not equal to X or O then the value is set to X in this function.
    */
}
int isGameOver(){
    // This will check if there are rows of three that all have the same value and if there is, return true(1), else return false (0)
}

int main(void){
    printf("%s | %s | %s |\n", squareOne, squareTwo, squareThree);
    printf("-----------\n");
    printf("%s | %s | %s |\n", squareFour, squareFive, squareSix);
    printf("-----------\n");
    printf("%s | %s | %s |\n", squareSeven, squareEight, squareNine);
    // This will eventually need to go into a while loop and isGameOver function needs to be set up
    turnX();
    return 0;
}
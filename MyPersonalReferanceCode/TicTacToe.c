// I bored so I build Tic-Tac-Toe
#include <stdio.h>

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
    if(playerOsquare == 1){
        if(squareOne == "1"){
            squareOne == "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 2) {
        if(squareTwo == "2"){
            squareTwo == "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 3){
        if(squareThree == "3"){
            squareThree == "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 4){
        if(squareFour == "4"){
            squareFour == "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if (playerOsquare == 5){
        if(squareFive == "5"){
            squareFive == "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 6){
        if(squareSix == "6"){
            squareSix == "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 7){
        if(!(squareSeven == "X" || "O")){
            squareSeven == "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if (playerOsquare == 8){
        if(!(squareEight == "X" || "O")){
            squareEight == "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 9){
        if(!(squareNine == "X" || "O")){
            squareNine == "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else {
        printf("Please put in a number tha corisponds with the box you wish to play in.\n");
        turnO();
    }
}

void turnX(){
    printf("It's X's turn!\n");
    printf("Which square would you like to play in:\n");
    scanf("%d", &playerXsquare);
    /* 
    need to figure out an if statement to compare the user input with the corisponding varible and if that varible is not equal to X or O then the value is set to X in this function.
    */
   if(playerXsquare == 1){
        if(!(squareOne == "X" || "O")){
            squareOne == "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 2) {
        if(squareTwo == "2"){
            squareTwo == "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 3){
        if(!(squareThree == "X" || "O")){
            squareThree == "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 4){
        if(!(squareFour == "X" || "O")){
            squareFour == "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if (playerXsquare == 5){
        if(!(squareFive == "X" || "O")){
            squareFive == "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 6){
        if(!(squareSix == "X" || "O")){
            squareSix == "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 7){
        if(!(squareSeven == "X" || "O")){
            squareSeven == "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if (playerXsquare == 8){
        if(!(squareEight == "X" || "O")){
            squareEight == "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 9){
        if(!(squareNine == "X" || "O")){
            squareNine == "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else {
        printf("Please put in a number that corisponds with the box you wish to play in.\n");
        turnX();
    }
   
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
    printf("%s | %s | %s |\n", squareOne, squareTwo, squareThree);
    printf("-----------\n");
    printf("%s | %s | %s |\n", squareFour, squareFive, squareSix);
    printf("-----------\n");
    printf("%s | %s | %s |\n", squareSeven, squareEight, squareNine);
    turnO();
    return 0;
}
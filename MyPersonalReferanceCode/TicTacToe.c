// I bored so I build Tic-Tac-Toe
#include <stdio.h>

int playerOsquare;
int playerXsquare;
char squareOne[2] = "1";
char squareTwo[2] = "2";
char squareThree[2] = "3";
char squareFour[2] = "4";
char squareFive[2] = "5";
char squareSix[2] = "6";
char squareSeven[2] = "7";
char squareEight[2] = "8";
char squareNine[2] = "9";

// Functions
void turnO(){
    printf("It's O's turn!\n");
    printf("Which square would you like to play in:\n");
    scanf("%d", &playerOsquare);
    
    if(playerOsquare == 1){
        if(squareOne == "1"){
            squareOne[2] = "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 2) {
        if(squareTwo == "2"){
            squareTwo[2] = "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 3){
        if(squareThree == "3"){
            squareThree[2] = "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 4){
        if(squareFour == "4"){
            squareFour[2] = "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if (playerOsquare == 5){
        if(squareFive == "5"){
            squareFive[2] = "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 6){
        if(squareSix == "6"){
            squareSix[2] = "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 7){
        if(squareSeven == "7"){
            squareSeven[2] = "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if (playerOsquare == 8){
        if(squareEight == "8"){
            squareEight[2] = "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else if(playerOsquare == 9){
        if(squareNine == "9"){
            squareNine[2] = "O";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnO();
        }
    } else {
        printf("Please put in a number that corisponds with the box you wish to play in.\n");
        turnO();
    }
}

void turnX(){
    printf("It's X's turn!\n");
    printf("Which square would you like to play in:\n");
    scanf("%d", &playerXsquare);
    
   if(playerXsquare == 1){
        if(squareOne == "1"){
            squareOne[2] = "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 2) {
        if(squareTwo == "2"){
            squareTwo[2] = "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 3){
        if(squareThree == "3"){
            squareThree[2] = "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 4){
        if(squareFour == "4"){
            squareFour[2] = "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if (playerXsquare == 5){
        if(squareFive == "5"){
            squareFive[2] = "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 6){
        if(squareSix == "6"){
            squareSix[2] = "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 7){
        if(squareSeven == "7"){
            squareSeven[2] = "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if (playerXsquare == 8){
        if(squareEight == "8"){
            squareEight[2] = "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else if(playerXsquare == 9){
        if(squareNine == "9"){
            squareNine[2] = "X";
        } else {
            printf("Sorry, you can't play there. Pick a different square.\n");
            turnX();
        }
    } else {
        printf("Please put in a number that corisponds with the box you wish to play in.\n");
        turnX();
    }
   
}
void isGameOver(){
    // This will check if there are rows of three that all have the same value and if there is, return true(1), else return false (0)
}

void printGameBoard(){
    printf("%s | %s | %s |\n", squareOne, squareTwo, squareThree);
    printf("-----------\n");
    printf("%s | %s | %s |\n", squareFour, squareFive, squareSix);
    printf("-----------\n");
    printf("%s | %s | %s |\n", squareSeven, squareEight, squareNine);
}

int main(void){
    printGameBoard();
    // This will eventually need to go into a while loop and isGameOver function needs to be set up
    turnX();
    printGameBoard();
    turnO();
    return 0;
}
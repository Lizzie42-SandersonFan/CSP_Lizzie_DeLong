// I bored so I build Tic-Tac-Toe
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int playerOsquare;
int playerXsquare;
bool gameOver = false;
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

bool streq(char *left, char *right) {
    return strcmp(left, right) == 0;
}

void turnO(){
    printf("It's O's turn!\n");
    printf("Which square would you like to play in:\n");
    scanf("%d", &playerOsquare);
    if(playerOsquare >= 1 && playerOsquare <= 9){
        if(playerOsquare == 1){
            if(!(streq(squareOne, "X") || streq(squareOne, "O"))){
                squareOne[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 2) {
            if(!(streq(squareTwo, "X") || streq(squareTwo, "O"))){
                squareTwo[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 3){
            if(!(streq(squareThree, "X") || streq(squareThree, "O"))){
                squareThree[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 4){
            if(!(streq(squareFour, "X") || streq(squareFour, "O"))){
                squareFour[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if (playerOsquare == 5){
            if(!(streq(squareFive, "X") || streq(squareFive, "O"))){
                squareFive[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 6){
            if(!(streq(squareSix, "X") || streq(squareSix, "O"))){
                squareSix[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 7){
            if(!(streq(squareSeven, "X") || streq(squareSeven, "O"))){
                squareSeven[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if (playerOsquare == 8){
            if(!(streq(squareEight, "X") || streq(squareEight, "O"))){
                squareEight[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else {
            if(!(streq(squareNine, "X") || streq(squareNine, "O"))){
                squareNine[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
            
        }
    } else {
        printf("Please put in a number that corrisponds with the box you wish to play in.\n");
    }
}

void turnX(){
    printf("It's X's turn!\n");
    printf("Which square would you like to play in:\n");
    scanf("%d", &playerXsquare);
    if(playerXsquare >= 1 && playerXsquare <= 9){
        if(playerXsquare == 1){
            if(!(streq(squareOne, "X") || streq(squareOne, "O"))){
                squareOne[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 2) {
            if(!(streq(squareTwo, "X") || streq(squareTwo, "O"))){
                squareTwo[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 3){
            if(!(streq(squareThree, "X") || streq(squareThree, "O"))){
                squareThree[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 4){
            if(!(streq(squareFour, "X") || streq(squareFour, "O"))){
                squareFour[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if (playerXsquare == 5){
            if(!(streq(squareFive, "X") || streq(squareFive, "O"))){
                squareFive[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 6){
            if(!(streq(squareSix, "X") || streq(squareSix, "O"))){
                squareSix[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 7){
            if(!(streq(squareSeven, "X") || streq(squareSeven, "O"))){
                squareSeven[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if (playerXsquare == 8){
            if(!(streq(squareEight, "X") || streq(squareEight, "O"))){
                squareEight[0] = 'X';
            } else {
                 printf("Sorry, you can't play there. Pick a different square.\n");
                 turnX();
             }
        } else {
            if(!(streq(squareNine, "X") || streq(squareNine, "O"))){
                squareNine[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
         }
    } else {
        printf("Please put in a number that corrisponds with the box you wish to play in.\n");
    }
}

bool isBoardTotallyFilled() {
    if (streq(squareOne, "1")) { return false; }
    if (streq(squareTwo, "2")) { return false; }
    if (streq(squareThree, "3")) { return false; }
    if (streq(squareFour, "4")) { return false; }
    if (streq(squareFive, "5")) { return false; }
    if (streq(squareSix, "6")) { return false; }
    if (streq(squareSeven, "7")) { return false; }
    if (streq(squareEight, "8")) { return false; }
    if (streq(squareNine, "9")) { return false; }
    return true;
}

bool isThereAWinner() {
   if (streq(squareOne, squareTwo) && streq(squareTwo, squareThree)) {
        printf("The game is over.\n");
        return true; 
   } else if (streq(squareOne, squareFour) && streq(squareFour, squareSeven)) {
        printf("The game is over.\n");
        return true; 
   } else if (streq(squareOne, squareFive) && streq(squareFive, squareNine)) {
        printf("The game is over.\n");
        return true; 
   } else if (streq(squareFour, squareFive) && streq(squareFive, squareSix)) {
        printf("The game is over.\n");
        return true;
   } else if (streq(squareTwo, squareFive) && streq(squareFive, squareEight)) {
        printf("The game is over.\n");
        return true;
   } else if (streq(squareSeven, squareEight) && streq(squareEight, squareNine)) {
        printf("The game is over.\n");
        return true;
   } else if (streq(squareThree, squareSix) && streq(squareSix, squareNine)) {
        printf("The game is over.\n");
        return true;
   } else if (streq(squareThree, squareFive) && streq(squareFive, squareSeven)) {
        printf("The game is over.\n");
        return true;
   } else {
        return false;
   }
}

bool isThereADraw() {
    return isBoardTotallyFilled() == true && isThereAWinner() == false;
}

void gamePlay(){
    if(isThereAWinner() == true){
        gameOver = true;
    } else if (isThereADraw() == true){
        gameOver = true;
    } else {
        gameOver = false;
    }
}

void printGameBoard(){
    printf(" %s | %s | %s \n", squareOne, squareTwo, squareThree);
    printf("-----------\n");
    printf(" %s | %s | %s \n", squareFour, squareFive, squareSix);
    printf("-----------\n");
    printf(" %s | %s | %s \n", squareSeven, squareEight, squareNine);
}

int main(void){
    while(gameOver == false){
        printGameBoard();
        turnX();
        gamePlay();
        if (gameOver == true){break;}
        printGameBoard();
        turnO();
        gamePlay();
        
    }
}
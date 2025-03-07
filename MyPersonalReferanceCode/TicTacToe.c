// I bored so I build Tic-Tac-Toe
#include <stdio.h>
#include <stdbool.h>

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
void turnO(){
    printf("It's O's turn!\n");
    printf("Which square would you like to play in:\n");
    scanf("%d", &playerOsquare);
    if(playerOsquare == 1 || playerOsquare == 2 || playerOsquare == 3 || playerOsquare == 4 || playerOsquare == 5 || playerOsquare == 6 || playerOsquare == 7 || playerOsquare == 8 || playerOsquare == 9){
        if(playerOsquare == 1){
            if(!(squareOne == "X" || squareOne == "O")){
                squareOne[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 2) {
            if(!(squareTwo == "X" || squareTwo == "O")){
                squareTwo[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 3){
            if(!(squareThree == "X" || squareThree == "O")){
                squareThree[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 4){
            if(!(squareFour == "X" || squareFour == "O")){
                squareFour[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if (playerOsquare == 5){
            if(!(squareFive == "X" || squareFive == "O")){
                squareFive[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 6){
            if(!(squareSix == "X" || squareSix == "O")){
                squareSix[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if(playerOsquare == 7){
            if(!(squareSeven == "X" || squareSeven == "O")){
                squareSeven[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else if (playerOsquare == 8){
            if(!(squareEight == "X" || squareEight == "O")){
                squareEight[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
        } else {
            if(!(squareNine == "X" || squareNine == "O")){
                squareNine[0] = 'O';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnO();
            }
            
        }
    } else {
        printf("Please put in a number that corisponds with the box you wish to play in.\n");
    }
}
void turnX(){
    printf("It's X's turn!\n");
    printf("Which square would you like to play in:\n");
    scanf("%d", &playerXsquare);
    if(playerXsquare == 1 || playerXsquare == 2 || playerXsquare == 3 || playerXsquare == 4 || playerXsquare == 5 || playerXsquare == 6 || playerXsquare == 7 || playerXsquare == 8 || playerXsquare == 9){
        if(playerXsquare == 1){
            if(!(squareOne == "X" || squareOne == "O")){
                squareOne[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 2) {
            if(!(squareTwo == "X" || squareTwo == "O")){
                squareTwo[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 3){
            if(!(squareThree == "X" || squareThree == "O")){
                squareThree[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 4){
            if(!(squareFour == "X" || squareFour == "O")){
                squareFour[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if (playerXsquare == 5){
            if(!(squareFive == "X" || squareFive == "O")){
                squareFive[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 6){
            if(!(squareSix == "X" || squareSix == "O")){
                squareSix[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if(playerXsquare == 7){
            if(!(squareSeven == "X" || squareSeven == "O")){
                squareSeven[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
        } else if (playerXsquare == 8){
            if(!(squareEight == "X" || squareEight == "O")){
                squareEight[0] = 'X';
            } else {
                 printf("Sorry, you can't play there. Pick a different square.\n");
                 turnX();
             }
        } else {
            if(!(squareNine == "X" || squareNine == "O")){
                squareNine[0] = 'X';
            } else {
                printf("Sorry, you can't play there. Pick a different square.\n");
                turnX();
            }
         }
    } else {
        printf("Please put in a number that corisponds with the box you wish to play in.\n");
        
    }
}
void isGameOver(){
    if(squareOne == "X" || squareOne == "O" && squareTwo == "X" || squareTwo == "O" && squareThree == "X" || squareThree == "O"){
        gameOver = true; 
        printf("The game is over.\n");
    } else if(squareFour == "X" || squareFour == "O" && squareFive == "X" || squareFive == "O" && squareSix == "X" || squareSix == "O"){
        gameOver = true;
        printf("The game is over.\n");
    } else if(squareSeven == "X" || squareSeven == "O" && squareEight == "X" || squareEight == "O" && squareNine == "X" || squareNine == "O"){
        gameOver = true;
        printf("The game is over.\n");
    } else if(squareOne == "X" || squareOne == "O" && squareFour == "X" || squareFour == "O" && squareSeven == "X" || squareSeven == "O"){
        gameOver = true;
        printf("The game is over.\n");
    } else if(squareTwo == "X" || squareTwo == "O" && squareFive == "X" || squareFive == "O" && squareEight == "X" || squareEight == "O"){
        gameOver = true;
        printf("The game is over.\n");
    } else if(squareThree == "X" || squareThree == "O" && squareSix == "X" || squareSix == "O" && squareNine == "X" || squareNine == "O"){
        gameOver = true;
        printf("The game is over.\n");
    } else if(squareOne == "X" || squareOne == "O" && squareFive == "X" || squareFive == "O" && squareNine == "X" || squareNine == "O"){
        gameOver = true;
        printf("The game is over.\n");
    } else if(squareThree == "X" || squareThree == "O" && squareFive == "X" || squareFive == "O" && squareSeven == "X" || squareSeven == "O"){
        gameOver = true;
        printf("The game is over.\n");
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
    // This will eventually need to go into a while loop and isGameOver function needs to be set up and before that, reassigning the board varibles needs to be figured out
    while(gameOver == false){
        printGameBoard();
        turnX();
        printGameBoard();
        turnO();
    }
    /*
    PROBLEMS OR FIX
    1. THE GAME OVER FUNC NO WORK
    2. WHAT IF IT IS A DRAWWWWW????
    */
}
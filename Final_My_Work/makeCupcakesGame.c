// This is the programming final I made with a group but in C!!!!

#include <stdio.h>
#include <stdbool.h>

int cakeFlavor = 1;
char cakeFlavorReview[50];
int frostingFlavor = 2;
char frostingFlavorReview[50];

int cakePan = 1;
char cakePanReview[50];
int cakeStat = 2;
int ovenTemp = 0;

int frostPiped = 1;
char forstPipedReview[50];
char allToppings[30][3] = {"sprinkles", "strawberries", "fudge sauce"};
bool isSprinkles = false;
bool isStrawberries = false;
bool isFudge = false;
char toppingReview[100];
char toppings[100];
char response[10];

char explanationMessage[100];
char customerAnswer[200];
int userNotTrying = 0;
int certificate = 0;


int main(void){
    printf("\nWelcome to Baking Simulator.\nIn this game you will get to bake a cake and have a critic try it.\nThe critic will give feedback based on your cake.\nYour goal is to have the critic love your cake!\n");
    printf("IMPORTANT NOTE:\nWhen answering questions, answer with the number of the option you want,\nUNLESS a different answering method is specified.\n:)\n");
    printf("Also, if you choose to not play the game correctly, something bad will happen...");

    int flavor[5];
    printf("\nWhat kind of cake would you like to make?\n (1 a vanilla cake\n (2 a chocolate cake\n (3 A carrot cake\n");
    scanf("%s", &flavor);

    if (flavor == "1"){
        cakeFlavor=1;
    } else if (flavor == "2"){
        cakeFlavor = 2;
    } else if (flavor == "3"){
        cakeFlavor = 3;
    } else {
        printf("We don't have the ingredients to make that type of cake.\n");
        userNotTrying = 1;
    }

    return 0;
}
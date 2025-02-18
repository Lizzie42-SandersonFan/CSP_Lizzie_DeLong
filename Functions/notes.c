// Lizzie DeLong, Function Notes C

#include <stdio.h>
int num;
char name[42], place[42], verb[42];

int add(int numOne, int numTwo){
    return numOne + numTwo;
}
const char* word(char type[50]){ //const char* is for strings. const means no change and * means all
    char choice[50];
    printf("Please give me a %s:\n", type);
    scanf("%s", choice);
    return choice;
}

int main(void){
    //printf("Please tell me a number:\n");
    //scanf("%d", num);
    //add(num, 10);
    //add(8, 1);
    //add(72, 5);


    return 0;
}
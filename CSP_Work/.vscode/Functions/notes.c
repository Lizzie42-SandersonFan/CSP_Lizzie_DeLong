// Lizzie DeLong, Function Notes C

#include <stdio.h>
int num;
char name[42], place[42], verb[42];

int add(int numOne, int numTwo){
    return numOne + numTwo;
}
void due(char assignment[50], char day[20]) {
    printf("The %s assignment is due %s.\n", assignment, day);
}

int main(void){
    //printf("Please tell me a number:\n");
    //scanf("%d", num);
    //add(num, 10);
    //add(8, 1);
    //add(72, 5);
    due("Functions Notes", "today");
    due("Hello World Update", "tomorrow");
    due("Financial Calculator Update", "Friday");
    return 0;
}
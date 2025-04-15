// This is some code I did 'cause I was Bored.
#include <stdio.h>

int main(void){
    char candies [13][40] = {"Kisses", "Chocolate Bar", "Skittles", "M&M's", "Orange Sticks", "Milky Ways", "Snickers", "Mars Bars", "Lemon Drop", "Nerds", "Sweet Tarts", "Twizzlers", "Dum-Dums"};
    // Trying to do a loop that goes from end to begining
    int i;
    for(i = 12; i > -1; i--){
        printf("A candy is: %s.\n", candies[i]);
    }
    return 0;
}
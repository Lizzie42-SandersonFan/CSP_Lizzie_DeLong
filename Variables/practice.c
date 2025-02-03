// Lizzie DeLong, Practicing C
#include <stdio.h>

int main(void) {
    char name[] = "Lizzie";
    int number = 6;
    int biggerNumber = 765;
    char breakfast[] = "Bread and Butter";
    char favColour[] = "Red";
    char schoolName[] = "UCAS";
    int year = 2025;
    char eyeColour[] = "Blue";
    int age = 15;
    char favSubject[] = "Math or CSP";

    printf("My name is %s, my eye colour is %s, my favorite colour is %s, and I am %d years old. \n", name, eyeColour, favColour, age);
    printf("I had %s for breakfast. \n", breakfast);
    printf("I go to %s and my favcorite subjects are %s and its the year %d. \n", schoolName, favSubject, year);
    printf("Some numbers are %d and %d. \n", number, biggerNumber);

    return 0;
}
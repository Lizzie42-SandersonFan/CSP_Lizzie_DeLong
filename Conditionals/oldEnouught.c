// Lizzie DeLong, Old Enough Conditionals Program C

#include <stdio.h>

int main(void){
    int age;
    printf("How old are you right now (WHOLE NUMBER):\n");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote and drive and go to school! Yippy!\n");
    } else if (age >= 16){
        printf("You can drive and go to school, but not vote.\n");
    } else if (age >= 15) {
        printf("You can get a learners permit and go to school, but not drive or vote. Sorry :(\n");
    } else if (age >= 6) {
        printf("You can go to school, but that's it. No driving or voting for you.\n");
    } else {
        printf("Why are you using this if you can't even go to school?\n");
    }
    return 0;
}
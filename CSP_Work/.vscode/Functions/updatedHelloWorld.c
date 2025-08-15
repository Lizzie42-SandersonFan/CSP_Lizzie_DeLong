// Lizzie DeLong, Updated Hello World C with Functions

#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main(void){
    char nameOne[] = "Lizzie";
    greet(nameOne);

    char nameTwo[] = "Alice";
    greet(nameTwo);

    char nameThree[] = "John";
    greet(nameThree);

    char nameFour[] = "Bob";
    greet(nameFour);

    char nameFive[] = "Lila";
    greet(nameFive);

    return 0;
}
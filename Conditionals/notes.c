// Lizzie DeLong, C Conditional Notes

#include <stdio.h>
#include <string.h>

char name[] = "Lizzie";
int num;

int main(void){
    if(strcmp(name, "Lizzie") == 0){ // strcmp means string comparison. When the outcome is 0, the strings are the same
        printf("Hello Lizzie, Welcome to class.\n");
    } else {
        printf("Hello %s, welcome to class.\n", name);
    }

    printf("How many siblings do you have:\n");
    scanf("%d", &num);

    if(num == 0){
        printf("You are an only child.\n");
    } else if(num <= 2) {
        printf("You have a couple of siblings.\n");
    } else if(num <= 5){
        printf("You have a few siblings.\n");
    } else {
        printf("You have a lot of siblings.\n");
    }

    if(num == 7 || num == 13){
        printf("%d is an unlucky number.\n", num);
    } else if(num < 10 && num > 5){
        printf("%d is a large single digit number.\n", num);
    } else if(!(num < 10)){
        if(num == 12){
            printf("That is a dozen!\n");
        } else {
            printf("%d is a big number.\n", num);
        }
    } else {
        printf("You typed in %d.\n", num);
    }
    return 0;
}
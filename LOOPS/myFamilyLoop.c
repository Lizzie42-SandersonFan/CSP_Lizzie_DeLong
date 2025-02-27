// Lizzie DeLong, Fimily Loop C

#include <stdio.h>

char famList [4][10] = {"Lizzie", "Daniel", "Sarah", "Dave"};
int i = 0;
int main(void){
    for(i = 0; i < 4; i++){
        printf("Hello %s!\n", famList);
    }
    return 0;
}
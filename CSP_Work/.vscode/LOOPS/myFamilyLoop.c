// Lizzie DeLong, Fimily Loop C

#include <stdio.h>

int main(void){
    char famList [4][10] = {"Daniel", "Lizzie", "Sarah", "Dave"};
    int i;
    for(i = 0; i < 4; i++){
        printf("Hello %s!\n", famList[i]);
    }
    return 0;
}
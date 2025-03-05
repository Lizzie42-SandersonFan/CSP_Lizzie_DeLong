// Lizzie DeLong, Loops Notes C
#include <stdio.h>

int main(void){
    int start = 0;
    while(start <5){
        printf("Hello!\n");
        start++;
    }

    int q;
    for(q=0;q<5;q++){
        printf("%d\n", q);
    }

    int grades[] = {88, 97, 100, 70, 72, 99, 61};
    printf("CSP Grade: %d%%\n", grades[2]);
    grades[2]= 95;
    printf("CSP Grade: %d%%\n", grades[2]);

    int size = sizeof(grades);
    int length = sizeof(grades) / sizeof(grades[0]);
    printf("%d\n", length);

    int x;
    for(x = 0; x < 11; x+=2){
        printf("%d\n", x);
    }

    return 0;
}
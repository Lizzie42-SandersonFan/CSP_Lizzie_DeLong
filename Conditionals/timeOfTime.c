// Lizzie DeLong, Time of Day C

#include <stdio.h>
#include <string.h>

int main(void){
    int hh, mm;
    char a[3];
    printf("Enter the hour of the time:\n");
    scanf("%d", &hh);
    printf("Enter the minutes of the time:\n");
    scanf("%d", &mm);
    printf("Is it AM  or PM:\n");
    scanf("%s", a);

    if(hh <= 12 && mm <= 59){
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) && (hh != 0) && (hh != 12)){
            hh = hh + 12;
        }
        if((strcmp(a, "AM") == 0) || (strcmp(a,"am") == 0) && (hh == 12)){
            hh = 0;
        }
        printf("The obtained 24-hour format of input is: ");
        printf("%02d:%02d", hh, mm);
    } else {
        printf("Please put in the correct numbers");
    }
    //int finalTime[20] = {0}; HELP
    //strcat(finalTime, hh); HELP
    //strcat(finalTime, mm); HELP

    // 5 am to 10:30 am is good morning
    // 10:31 am to 4:30 pm is good afternoon
    // every other time is good evening

    //if(finalTime >= "4:00" && finalTime <= "10:30"){ HEEEEEEEELLLLP
        //printf("Good Morning!");
    //} else if (finalTime >= "10:31" && finalTime <= "16:30"){
        //printf("Good Afternoon!");
    //} else {
        //printf("Good Evening!");
    //}
    return 0;
}
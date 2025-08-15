// Lizzie DeLong, Time of Day C

#include <stdio.h>
#include <string.h>

// Function that converts the time into minutes for comparison later (line 36 onward)
int timeOfDay(int hour, int minutes){
    return (hour*60)+minutes;
}

int main(void){
    int hh, mm;
    char a[3];
    printf("Enter the hour of the time:\n");
    scanf("%d", &hh);
    printf("Enter the minutes of the time:\n");
    scanf("%d", &mm);
    printf("Is it AM  or PM:\n");
    scanf("%s", a);

    // Converting time to miltary
    if(hh <= 12 && hh >= 0 && mm <= 59 && mm >= 0){
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) && (hh != 0) && (hh != 12)){
            hh = hh + 12;
        }
        if((strcmp(a, "AM") == 0) || (strcmp(a,"am") == 0) && (hh == 12)){
            hh = 0;
        }
        printf("The obtained 24-hour format of input is: ");
        printf("%02d:%02d\n", hh, mm);
    } else {
        printf("Please put in the correct numbers\n");
        return 0;
    }

    int minutesInDay = timeOfDay(hh,mm);
    printf("minutes in day is %d\n", minutesInDay);

    // 5 am to 10:30 am is good morning
    // 10:31 am to 4:30 pm is good afternoon
    // every other time is good evening

    if (minutesInDay >= timeOfDay(4,30) && minutesInDay <= timeOfDay(10,30)){
        printf("Good Morning!\n");
    } else if (minutesInDay >= timeOfDay(10,31) && minutesInDay <= timeOfDay(16,30)){
        printf("Good Afternoon!\n");
    } else {
        printf("Good Evening!\n");
    }
    return 0;
}
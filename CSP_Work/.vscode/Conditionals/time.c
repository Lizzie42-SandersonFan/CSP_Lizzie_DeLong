// Lizzie DeLong, Getting the time
#include <stdio.h>
#include <time.h>

int main(void){
    // Time since Jan 1 1970
    time_t seconds;
    seconds = time(NULL);

    // printf("Seconds since Jan 1, 1970 = %d\n", seconds);

    // Get current time
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    //printf("Current time and date is %s\n", asctime(timeinfo));

    //current hour
    time_t now = time(NULL);

    struct tm * tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour; // Military Tine

    printf("%d\n", hour);

    return 0;
}
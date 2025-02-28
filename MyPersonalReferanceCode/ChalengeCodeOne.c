// Another challenge like the "IWasBored" file
#include <stdio.h>

int main(void){
    char instruments [][30] = {"Violin", "Viola", "Cello", "Bass", "Tuba", "Trombone", "Drums", "Guitar", "Flute", "Trumpet", "Clairanet", "Piano", "Harp"};
    size_t my_array = sizeof(instruments);
    int list_length = sizeof(my_array) / sizeof(my_array[0]);
    //int i;
    printf(list_length);
    //for(i = 0; i <= instruments; i++){
        //printf("An instrument is: %s.\n", instruments[i]);
    //}
    return 0;
} 
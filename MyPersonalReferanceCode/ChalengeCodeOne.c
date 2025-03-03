// Another challenge like the "IWasBored" file
#include <stdio.h>

int main(void){
    char instruments [][30] = {"Violin", "Viola", "Cello", "Bass", "Tuba", "Trombone", "Drums", "Guitar", "Flute", "Trumpet", "Clairanet", "Piano", "Harp", "Oboe"};

    size_t my_array = sizeof(instruments);
    int list_length = my_array / 30;
    
    int i;
    for(i = 0; i < list_length; i++){
        printf("An instrument is: %s.\n", instruments[i]);
    }
    return 0;
} 
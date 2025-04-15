// Another challenge like the "IWasBored" file
#include <stdio.h>

int main(void){
    char instruments [][30] = {"Violin", "Viola", "Cello", "Bass", "Tuba", "Trombone", "Drums", "Guitar", "Flute", "Trumpet", "Clairanet", "Piano", "Harp", "Oboe"};
    
    int list_length = sizeof(instruments) / sizeof(instruments[0]);
    
    int i;
    for(i = 0; i < list_length; i++){
        printf("An instrument is: %s.\n", instruments[i]);
    }
    return 0;
} 
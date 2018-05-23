#include <stdio.h>
#include "Minesweeper.h"
#include <time.h>

int minePlacer(int fields[], int number, int mines){
    int picker = 0;
    srand(time(0));
    for(int i = 1; i <= mines; i++){
        picker = rand() % number;
        while(fields[picker] == 9){
            picker = rand() % number;
        }
        fields[picker] = 9;
    }
    return 0;
}

#include <stdio.h>
#include "Minesweeper.h"
#include <time.h>

int minePlacer(int fields[], int number, int mines){
    int picker = 0;
    srand(time(0));
    int counter = 0;
    for(int i = 1; i <= mines; i++){
        picker = rand() % number;
        while(fields[picker] == 9){
            picker = rand() % number;
        }
        fields[picker] = 9;
    }
    for(int i = 0; i <= number; i++){
        if(fields[i] != 9){
            switch(i){
                case 0:
                    if(fields[1] == 9){
                        counter ++;
                    }
                    for(int j = 8; j <= 9; j++){
                        if(fields[j] == 9){
                            counter ++;
                        }
                    }
                    break;
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    if(fields[i - 1] == 9){
                        counter ++;
                    }
                    if(fields[i + 1] == 9){
                        counter ++;
                    }
                    if(fields[i + 7] == 9){
                        counter ++;
                    }
                    if(fields[i + 8] == 9){
                        counter ++;
                    }
                    if(fields[i + 9] == 9){
                        counter ++;
                    }
                    break;
                case 7:
                    if(fields [6] == 9){
                        counter ++;
                    }
                    if(fields [14] == 9){
                        counter ++;
                    }
                    if(fields [15] == 9){
                        counter ++;
                    }
                case 8:
                case 16:
                case 24:
                case 32:
                case 40:
                case 48:
                    if(fields [i-8] == 9){
                        counter ++;
                    }
                    if(fields [i+8] == 9){
                        counter ++;
                    }
                    if(fields [i-7] == 9){
                        counter ++;
                    }
                    if(fields [i+1] == 9){
                        counter ++;
                    }
                    if(fields [i+9] == 9){
                        counter ++;
                    }
            }

            fields[i] = counter;
            counter = 0;
        }
    }
    return 0;
}

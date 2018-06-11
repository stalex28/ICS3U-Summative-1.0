#include <stdio.h>
#include "Minesweeper.h"
#include <time.h>

int minePlacer(int fields[], int number, int x, int mines){
    int picker = 0;
    srand(time(0));
    int counter = 0;
    for(int i = 1; i <= mines; i++){
        picker = rand() % (number + 1);
        while(fields[picker] == 9 || picker == x || picker == (x+1) || picker == (x-1) || picker == (x-9) || picker == (x-10) || picker == (x-11) || picker == (x+9) || picker == (x+10) || picker == (x+11)){
            picker = rand() % (number+1);
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
                    for(int j = 10; j <= 11; j++){
                        if(fields[j] == 9){
                            counter ++;
                        }
                    }
                    break;
                case 9:
                    if(fields [8] == 9){
                        counter ++;
                    }
                    for(int j = 18; j <= 19; j++){
                        if(fields[j] == 9){
                            counter ++;
                        }
                    }
                    break;
                case 90:
                    if(fields[91] == 9){
                        counter ++;
                    }
                    for(int j = 80; j <= 81; j++){
                        if(fields[j] == 9){
                            counter ++;
                        }
                    }
                    break;
                case 99:
                    if(fields[98] == 9){
                        counter ++;
                    }
                    for(int j = 88; j <= 89; j++){
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
                case 7:
                case 8:
                    if(fields[i-1] == 9){
                        counter ++;
                    }
                    if(fields[i+1] == 9){
                        counter ++;
                    }
                    if(fields[i+9] == 9){
                        counter ++;
                    }
                    if(fields[i+10] == 9){
                        counter ++;
                    }
                    if(fields[i+11] == 9){
                        counter ++;
                    }
                    break;
                case 10:
                case 20:
                case 30:
                case 40:
                case 50:
                case 60:
                case 70:
                case 80:
                    if(fields[i-10] == 9){
                        counter ++;
                    }
                    if(fields[i+10] == 9){
                        counter ++;
                    }
                    if(fields[i-9] == 9){
                        counter ++;
                    }
                    if(fields[i+1] == 9){
                        counter ++;
                    }
                    if(fields[i+11] == 9){
                        counter ++;
                    }
                    break;
                case 19:
                case 29:
                case 39:
                case 49:
                case 59:
                case 69:
                case 79:
                case 89:
                    if(fields[i-10] == 9){
                        counter ++;
                    }
                    if(fields[i+10] == 9){
                        counter ++;
                    }
                    if(fields[i+9] == 9){
                        counter ++;
                    }
                    if(fields[i-1] == 9){
                        counter ++;
                    }
                    if(fields[i-11] == 9){
                        counter ++;
                    }
                    break;
                case 91:
                case 92:
                case 93:
                case 94:
                case 95:
                case 96:
                case 97:
                case 98:
                    if(fields[i-1] == 9){
                        counter ++;
                    }
                    if(fields[i+1] == 9){
                        counter ++;
                    }
                    if(fields[i-11] == 9){
                        counter ++;
                    }
                    if(fields[i-10] == 9){
                        counter ++;
                    }
                    if(fields[i-9] == 9){
                        counter ++;
                    }
                    break;
                default:
                    if(fields[i-1] == 9){
                        counter ++;
                    }
                    if(fields[i+1] == 9){
                        counter ++;
                    }
                    if(fields[i-11] == 9){
                        counter ++;
                    }
                    if(fields[i-10] == 9){
                        counter ++;
                    }
                    if(fields[i-9] == 9){
                        counter ++;
                    }
                    if(fields[i+9] == 9){
                        counter ++;
                    }
                    if(fields[i+10] == 9){
                        counter ++;
                    }
                    if(fields[i+11] == 9){
                        counter ++;
                    }
                    break;
            }
            fields[i] = counter;
            counter = 0;
        }
    }
    return 0;
}

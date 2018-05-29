#include "Minesweeper.h"
#include <stdio.h>

bool clicker(int fields[], int x, int y, char f){
    int holder = 0;
    bool exit = false;
    holder = ((y-67) / 40 * 8) + ((x-48) / 40);
    if(f == 'o'){
        switch(fields[holder]){
            case 0:
                fields[holder] = 10;
                for(int i = 9; i >= 7; i--){
                    if(fields[holder-i] == 0){
                        fields[holder-i] = 10;
                    }
                    if(fields[holder+i] == 0){
                        fields[holder+i] = 10;
                    }
                }
                if(fields[holder-1] == 0){
                    fields[holder-1] = 10;
                }
                if(fields[holder+1] == 0){
                    fields[holder+1] = 10;
                }
                break;
            case 9:
                exit = true;
                break;
            case 10:
                break;
            default:
                if(fields[holder] < 20)
                fields[holder] += 20;
                break;
        }
    }
    else if(f == 'f'){
        if(fields[holder] <= 9){
            fields[holder] += 11;
        }
        else if(fields[holder] > 10 && fields[holder] <= 20){
            fields[holder] -=11;
        }
    }
    return exit;
}

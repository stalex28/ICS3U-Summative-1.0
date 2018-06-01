#include "Minesweeper.h"
#include <stdio.h>

bool clicker(int fields[], int x, int y, char f){
    int holder = 0;
    bool exit = false;
    holder = ((y-67) / 30 * 8) + ((x-48) / 30);
    if(f == 'o'){
        switch(fields[holder]){
            case 0:
                fields[holder] = 10;
                fieldClear(fields);
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

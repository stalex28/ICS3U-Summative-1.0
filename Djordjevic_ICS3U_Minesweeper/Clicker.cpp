#include "Minesweeper.h"
#include <stdio.h>

bool clicker(int fields[], int x, int y, char f){
    int holder = 0;
    bool exit = false;
    holder = ((y-67) / 50 * 8) + ((x-48) / 50);
    if(f == 'o'){
        switch(fields[holder]){
            case 0:
                fields[holder] = 10;
                break;
            case 9:
                exit = true;
                break;
        }
    }
    else if(f == 'f'){
        fields[holder] = 11;
    }
    return exit;
}

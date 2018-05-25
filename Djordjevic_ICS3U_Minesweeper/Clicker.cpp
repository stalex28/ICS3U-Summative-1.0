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
        switch(fields[holder]){
            case 0:
                fields[holder] = 11;
                break;
            case 9:
                fields[holder] = 19;
                break;
            case 11:
                fields[holder] = 0;
                break;
            case 19:
                fields[holder] = 9;
                break;
        }
    }
    return exit;
}

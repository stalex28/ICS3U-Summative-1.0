#include "Minesweeper.h"
#include <stdio.h>

bool clicker(int fields[], int x, int y, char f, int &fcounter, int mines){
    int holder = 0;
    bool exit = false;
    holder = ((y-67) / 30 * 10) + ((x-48) / 30);
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
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
                break;
            default:
                if(fields[holder] < 20)
                fields[holder] += 20;
                break;
        }
    }
    else if(f == 'f'){
        if(fields[holder] <= 9 && fcounter < mines){
            fields[holder] += 11;
            fcounter ++;
            printf("%d\n", (mines - fcounter));
        }
        else if(fields[holder] > 10 && fields[holder] <= mines && fields[holder] < 21){
            fields[holder] -=11;
            fcounter --;
            printf("%d\n", (mines - fcounter));
        }
    }
    return exit;
}

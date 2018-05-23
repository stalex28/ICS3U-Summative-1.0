#include "Minesweeper.h"
#include <stdio.h>

bool clicker(int fields[], int x, int y){
    int holder = 0;
    bool exit = false;
    holder = ((y-72) / 50 * 8) + ((x-52) / 50);
    if(fields[holder] == 9){
        exit = true;
    }
    return exit;
}

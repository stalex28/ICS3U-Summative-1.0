#include <stdio.h>
#include "Minesweeper.h"

int fieldClear(int fields[]){
    int counter = 0;
        for(int i = 0; i <= 63; i++){
            if(fields[i] == 10){
                switch(i){
                    case 0:
                        if(fields[1] == 0){
                            fields[1] = 10;
                        }
                        for(int j = 8; j <= 9; j++){
                            if(fields[j] == 0){
                                fields[j] = 10;
                            }
                        }
                        break;
                    case 7:
                        if(fields [6] == 0){
                            fields[6] = 10;
                        }
                        for(int j = 14; j <= 15; j++){
                            if(fields[j] == 0){
                                fields[j] = 10;
                            }
                        }
                        break;
                    case 56:
                        if(fields[57] == 0){
                            fields[57] = 10;
                        }
                        for(int j = 48; j <= 49; j++){
                            if(fields[j] == 0){
                                fields[j] = 10;
                            }
                        }
                        break;
                    case 63:
                        if(fields[62] == 0){
                            fields[62] = 10;
                        }
                        for(int j = 54; j <= 55; j++){
                            if(fields[j] == 0){
                                fields[j] = 10;
                            }
                        }
                        break;
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                        if(fields[i-1] == 0){
                            fields[i-1] = 10;
                        }
                        if(fields[i+1] == 0){
                            fields[i+1] = 10;
                        }
                        if(fields[i+7] == 0){
                            fields[i+7] = 10;
                        }
                        if(fields[i+8] == 0){
                            fields[i+8] = 10;
                        }
                        if(fields[i+9] == 0){
                            fields[i+9] = 10;
                        }
                        break;
                    case 8:
                    case 16:
                    case 24:
                    case 32:
                    case 40:
                    case 48:
                        if(fields[i-8] == 0){
                            fields[i-8] = 10;
                        }
                        if(fields[i+8] == 0){
                            fields[i+8] = 10;
                        }
                        if(fields[i-7] == 0){
                            fields[i-7] = 10;
                        }
                        if(fields[i+1] == 0){
                            fields[i+1] = 10;
                        }
                        if(fields[i+9] == 0){
                            fields[i+9] = 10;
                        }
                        break;
                    case 15:
                    case 23:
                    case 31:
                    case 39:
                    case 47:
                    case 55:
                        if(fields[i-8] == 0){
                            fields[i-8] = 10;
                        }
                        if(fields[i+8] == 0){
                            fields[i+8] = 10;
                        }
                        if(fields[i+7] == 0){
                            fields[i+7] = 10;
                        }
                        if(fields[i-1] == 0){
                            fields[i-1] = 10;
                        }
                        if(fields[i-9] == 0){
                            fields[i-9] = 10;
                        }
                        break;
                    case 57:
                    case 58:
                    case 59:
                    case 60:
                    case 61:
                    case 62:
                        if(fields[i-1] == 0){
                            fields[i-1] = 10;
                        }
                        if(fields[i+1] == 0){
                            fields[i+1] = 10;
                        }
                        if(fields[i-9] == 0){
                            fields[i-9] = 10;
                        }
                        if(fields[i-8] == 0){
                            fields[i-8] = 10;
                        }
                        if(fields[i-7] == 0){
                            fields[i-7] = 10;
                        }
                        break;
                    default:
                        if(fields[i-1] == 0){
                            fields[i-1] = 10;
                        }
                        if(fields[i+1] == 0){
                            fields[i+1] = 10;
                        }
                        if(fields[i-9] == 0){
                            fields[i-9] = 10;
                        }
                        if(fields[i-8] == 0){
                            fields[i-8] = 10;
                        }
                        if(fields[i-7] == 0){
                            fields[i-7] = 10;
                        }
                        if(fields[i+7] == 0){
                            fields[i+7] = 10;
                        }
                        if(fields[i+8] == 0){
                            fields[i+8] = 10;
                        }
                        if(fields[i+9] == 0){
                            fields[i+9] = 10;
                        }
                        break;
                }
            }
        }
    return 0;
}
#include <stdio.h>
#include "Minesweeper.h"

int fieldClear(int fields[]){
    int counter = 1;
    while(counter != 0){
        counter = 0;
        for(int i = 0; i <= 63; i++){
            if(fields[i] == 10){
                    switch(i){
                        case 0:
                            if(fields[1] == 0){
                                fields[1] = 10;
                                counter ++;
                            }
                            else if(fields[1] < 9){
                                fields[1] += 20;
                                counter ++;
                            }
                            for(int j = 8; j <= 9; j++){
                                if(fields[j] == 0){
                                    fields[j] = 10;
                                    counter ++;
                                }
                                else if(fields[j] < 9){
                                    fields[j] += 20;
                                    counter ++;
                                }
                            }
                            break;
                        case 7:
                            if(fields [6] == 0){
                                fields[6] = 10;
                                counter ++;
                            }
                            else if(fields[6] < 9){
                                fields[6] += 20;
                                counter ++;
                            }
                            for(int j = 14; j <= 15; j++){
                                if(fields[j] == 0){
                                    fields[j] = 10;
                                    counter ++;
                                }
                                else if(fields[j] < 9){
                                    fields[j] += 20;
                                    counter ++;
                                }
                            }
                            break;
                        case 56:
                            if(fields[57] == 0){
                                fields[57] = 10;
                                counter ++;
                            }
                            else if(fields[57] < 9){
                                fields[57] += 20;
                                counter ++;
                            }
                            for(int j = 48; j <= 49; j++){
                                if(fields[j] == 0){
                                    fields[j] = 10;
                                    counter ++;
                                }
                                else if(fields[j] < 9){
                                    fields[j] += 20;
                                    counter ++;
                                }
                            }
                            break;
                        case 63:
                            if(fields[62] == 0){
                                fields[62] = 10;
                                counter ++;
                            }
                            else if(fields[62] < 9){
                                fields[62] += 20;
                                counter ++;
                            }
                            for(int j = 54; j <= 55; j++){
                                if(fields[j] == 0){
                                    fields[j] = 10;
                                    counter ++;
                                }
                                else if(fields[j] < 9){
                                    fields[j] += 20;
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
                            if(fields[i-1] == 0){
                                fields[i-1] = 10;
                                counter ++;
                            }
                            else if(fields[i-1] < 9){
                                fields[i-1] += 20;
                                counter ++;
                            }
                            if(fields[i+1] == 0){
                                fields[i+1] = 10;
                                counter ++;
                            }
                            else if(fields[i+1] < 9){
                                fields[i+1] += 20;
                                counter ++;
                            }
                            if(fields[i+7] == 0){
                                fields[i+7] = 10;
                                counter ++;
                            }
                            else if(fields[i+7] < 9){
                                fields[i+7] += 20;
                                counter ++;
                            }
                            if(fields[i+8] == 0){
                                fields[i+8] = 10;
                                counter ++;
                            }
                            else if(fields[i+8] < 9){
                                fields[i+8] += 20;
                                counter ++;
                            }
                            if(fields[i+9] == 0){
                                fields[i+9] = 10;
                                counter ++;
                            }
                            else if(fields[i+9] < 9){
                                fields[i+9] += 20;
                                counter ++;
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
                                counter ++;
                            }
                            else if(fields[i-8] < 9){
                                fields[i-8] += 20;
                                counter ++;
                            }
                            if(fields[i+8] == 0){
                                fields[i+8] = 10;
                                counter ++;
                            }
                            else if(fields[i+8] < 9){
                                fields[i+8] += 20;
                                counter ++;
                            }
                            if(fields[i-7] == 0){
                                fields[i-7] = 10;
                                counter ++;
                            }
                            else if(fields[i-7] < 9){
                                fields[i-7] += 20;
                                counter ++;
                            }
                            if(fields[i+1] == 0){
                                fields[i+1] = 10;
                                counter ++;
                            }
                            else if(fields[i+1] < 9){
                                fields[i+1] += 20;
                                counter ++;
                            }
                            if(fields[i+9] == 0){
                                fields[i+9] = 10;
                                counter ++;
                            }else if(fields[i+9] < 9){
                                fields[i+9] += 20;
                                counter ++;
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
                                counter ++;
                            }
                            else if(fields[i-8] < 9){
                                fields[i-8] += 20;
                                counter ++;
                            }
                            if(fields[i+8] == 0){
                                fields[i+8] = 10;
                                counter ++;
                            }
                            else if(fields[i+8] < 9){
                                fields[i+8] += 20;
                                counter ++;
                            }
                            if(fields[i+7] == 0){
                                fields[i+7] = 10;
                                counter ++;
                            }
                            else if(fields[i+7] < 9){
                                fields[i+7] += 20;
                                counter ++;
                            }
                            if(fields[i-1] == 0){
                                fields[i-1] = 10;
                                counter ++;
                            }
                            else if(fields[i-1] < 9){
                                fields[i-1] += 20;
                                counter ++;
                            }
                            if(fields[i-9] == 0){
                                fields[i-9] = 10;
                                counter ++;
                            }
                            else if(fields[i-9] < 9){
                                fields[i-9] += 20;
                                counter ++;
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
                                counter ++;
                            }
                            else if(fields[i-1] < 9){
                                fields[i-1] += 20;
                                counter ++;
                            }
                            if(fields[i+1] == 0){
                                fields[i+1] = 10;
                                counter ++;
                            }
                            else if(fields[i+1] < 9){
                                fields[i+1] += 20;
                                counter ++;
                            }
                            if(fields[i-9] == 0){
                                fields[i-9] = 10;
                                counter ++;
                            }
                            else if(fields[i-9] < 9){
                                fields[i-9] += 20;
                                counter ++;
                            }
                            if(fields[i-8] == 0){
                                fields[i-8] = 10;
                                counter ++;
                            }
                            else if(fields[i-8] < 9){
                                fields[i-8] += 20;
                                counter ++;
                            }
                            if(fields[i-7] == 0){
                                fields[i-7] = 10;
                                counter ++;
                            }
                            else if(fields[i-7] < 9){
                                fields[i-7] += 20;
                                counter ++;
                            }
                            break;
                        default:
                            if(fields[i-1] == 0){
                                fields[i-1] = 10;
                                counter ++;
                            }
                            else if(fields[i-1] < 9){
                                fields[i-1] += 20;
                                counter ++;
                            }
                            if(fields[i+1] == 0){
                                fields[i+1] = 10;
                                counter ++;
                            }
                            else if(fields[i+1] < 9){
                                fields[i+1] += 20;
                                counter ++;
                            }
                            if(fields[i-9] == 0){
                                fields[i-9] = 10;
                                counter ++;
                            }
                            else if(fields[i-9] < 9){
                                fields[i-9] += 20;
                                counter ++;
                            }
                            if(fields[i-8] == 0){
                                fields[i-8] = 10;
                                counter ++;
                            }
                            else if(fields[i-8] < 9){
                                fields[i-8] += 20;
                                counter ++;
                            }
                            if(fields[i-7] == 0){
                                fields[i-7] = 10;
                                counter ++;
                            }
                            else if(fields[i-7] < 9){
                                fields[i-7] += 20;
                                counter ++;
                            }
                            if(fields[i+7] == 0){
                                fields[i+7] = 10;
                                counter ++;
                            }
                            else if(fields[i+7] < 9){
                                fields[i+7] += 20;
                                counter ++;
                            }
                            if(fields[i+8] == 0){
                                fields[i+8] = 10;
                                counter ++;
                            }
                            else if(fields[i+8] < 9){
                                fields[i+8] += 20;
                                counter ++;
                            }
                            if(fields[i+9] == 0){
                                fields[i+9] = 10;
                                counter ++;
                            }
                            else if(fields[i+9] < 9){
                                fields[i+9] += 20;
                                counter ++;
                            }
                            break;
                    }
                }
            }
        }
    return 0;
}

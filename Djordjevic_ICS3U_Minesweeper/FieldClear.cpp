#include <stdio.h>
#include "Minesweeper.h"

int fieldClear(int fields[]){
    int counter = 1;
    while(counter != 0){
        counter = 0;
        for(int i = 0; i <= 99; i++){
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
                        for(int j = 10; j <= 11; j++){
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
                    case 9:
                        if(fields [8] == 0){
                            fields[8] = 10;
                            counter ++;
                        }
                        else if(fields[8] < 9){
                            fields[8] += 20;
                            counter ++;
                        }
                        for(int j = 18; j <= 19; j++){
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
                    case 90:
                        if(fields[91] == 0){
                            fields[91] = 10;
                            counter ++;
                        }
                        else if(fields[91] < 9){
                            fields[91] += 20;
                            counter ++;
                        }
                        for(int j = 80; j <= 81; j++){
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
                    case 99:
                        if(fields[98] == 0){
                            fields[98] = 10;
                            counter ++;
                        }
                        else if(fields[98] < 9){
                            fields[98] += 20;
                            counter ++;
                        }
                        for(int j = 88; j <= 89; j++){
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
                    case 7:
                        case 8:
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
                        if(fields[i+9] == 0){
                            fields[i+9] = 10;
                            counter ++;
                        }
                        else if(fields[i+9] < 9){
                            fields[i+9] += 20;
                            counter ++;
                        }
                        if(fields[i+10] == 0){
                            fields[i+10] = 10;
                            counter ++;
                        }
                        else if(fields[i+10] < 9){
                            fields[i+10] += 20;
                            counter ++;
                        }
                        if(fields[i+11] == 0){
                            fields[i+11] = 10;
                            counter ++;
                        }
                        else if(fields[i+11] < 9){
                            fields[i+11] += 20;
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
                        if(fields[i-10] == 0){
                            fields[i-10] = 10;
                            counter ++;
                        }
                        else if(fields[i-10] < 9){
                            fields[i-10] += 20;
                            counter ++;
                        }
                        if(fields[i+10] == 0){
                            fields[i+10] = 10;
                            counter ++;
                        }
                        else if(fields[i+10] < 9){
                            fields[i+10] += 20;
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
                        if(fields[i+1] == 0){
                            fields[i+1] = 10;
                            counter ++;
                        }
                        else if(fields[i+1] < 9){
                            fields[i+1] += 20;
                            counter ++;
                        }
                        if(fields[i+11] == 0){
                            fields[i+11] = 10;
                            counter ++;
                        }
                        else if(fields[i+11] < 9){
                            fields[i+11] += 20;
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
                    if(fields[i-10] == 0){
                            fields[i-10] = 10;
                            counter ++;
                        }
                        else if(fields[i-10] < 9){
                            fields[i-10] += 20;
                            counter ++;
                        }
                        if(fields[i+10] == 0){
                            fields[i+10] = 10;
                            counter ++;
                        }
                        else if(fields[i+10] < 9){
                            fields[i+10] += 20;
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
                        if(fields[i-1] == 0){
                            fields[i-1] = 10;
                            counter ++;
                        }
                        else if(fields[i-1] < 9){
                            fields[i-1] += 20;
                            counter ++;
                        }
                        if(fields[i-11] == 0){
                            fields[i-11] = 10;
                            counter ++;
                        }
                        else if(fields[i-11] < 9){
                            fields[i-11] += 20;
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
                        if(fields[i-11] == 0){
                            fields[i-11] = 10;
                            counter ++;
                        }
                        else if(fields[i-11] < 9){
                            fields[i-11] += 20;
                            counter ++;
                        }
                        if(fields[i-10] == 0){
                            fields[i-10] = 10;
                            counter ++;
                        }
                        else if(fields[i-10] < 9){
                            fields[i-10] += 20;
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
                        if(fields[i-11] == 0){
                            fields[i-11] = 10;
                            counter ++;
                        }
                        else if(fields[i-11] < 9){
                            fields[i-11] += 20;
                            counter ++;
                        }
                        if(fields[i-10] == 0){
                            fields[i-10] = 10;
                            counter ++;
                        }
                        else if(fields[i-10] < 9){
                            fields[i-10] += 20;
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
                        if(fields[i+9] == 0){
                            fields[i+9] = 10;
                            counter ++;
                        }
                        else if(fields[i+9] < 9){
                            fields[i+9] += 20;
                            counter ++;
                        }
                        if(fields[i+10] == 0){
                            fields[i+10] = 10;
                            counter ++;
                        }
                        else if(fields[i+10] < 9){
                            fields[i+10] += 20;
                            counter ++;
                        }
                        if(fields[i+11] == 0){
                            fields[i+11] = 10;
                            counter ++;
                        }
                        else if(fields[i+11] < 9){
                            fields[i+11] += 20;
                            counter ++;
                        }
                        break;
                }
            }
        }
    }
    return 0;
}

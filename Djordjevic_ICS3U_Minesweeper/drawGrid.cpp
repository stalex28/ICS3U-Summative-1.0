#include <stdio.h>
#include "Minesweeper.h"

int drawGrid(int fields[], int x, int y, int num){
    ALLEGRO_BITMAP *square = nullptr;
    ALLEGRO_BITMAP *clearField = nullptr;
	square = al_load_bitmap("Tile.bmp");
	clearField = al_load_bitmap("1.bmp");
	al_convert_mask_to_alpha(square, BLACK);
	al_convert_mask_to_alpha(clearField, BLACK);
	int xco = 0;
	int yco = 0;

    for(int i = 50; i <= (height*20); i+= 50){
        for(int j = 70; j <= (width*20 + 20); j+= 50){
                al_draw_bitmap(square, i, j, 0);
        }
    }

    for(int i = 0; i <= num; i++){
        switch(fields[i]){
            case 10:
                yco = i / 8;
                xco = i - (yco * 8)*50 + 50;
                yco = yco*50 + 60;
                al_draw_bitmap(clearField, xco, yco, 0);
                break;
            default:
                break;
        }
    }
    return 0;
}

#include <stdio.h>
#include "Minesweeper.h"

int drawGrid(int fields[], int x, int y, int num){
    ALLEGRO_BITMAP *square = nullptr;
    ALLEGRO_BITMAP *clearField = nullptr;
    ALLEGRO_BITMAP *flag = nullptr;
	flag = al_load_bitmap("Flag.bmp");
	square = al_load_bitmap("Tile.bmp");
	clearField = al_load_bitmap("clear.bmp");
	al_convert_mask_to_alpha(square, BLACK);
	al_convert_mask_to_alpha(clearField, BLACK);
	al_convert_mask_to_alpha(flag, BLACK);
	int xco = 0;
	int yco = 0;

    for(int i = 50; i <= (height*20); i+= 50){
        for(int j = 70; j <= (width*20 + 20); j+= 50){
                al_draw_bitmap(square, i, j, 0);
        }
    }

    for(int i = 0; i <= num; i++){
        yco = i / 8;
        xco = (i - (yco * 8))*50 + 50;
        yco = yco*50 + 70;
        switch(fields[i]){
            case 10:
                al_draw_bitmap(clearField, xco, yco, 0);
                break;
            case 11:
                al_draw_bitmap(flag, xco, yco, 0);
            default:
                break;
        }
    }
    return 0;
}

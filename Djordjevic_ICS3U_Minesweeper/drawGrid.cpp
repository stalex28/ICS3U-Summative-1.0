#include <stdio.h>
#include "Minesweeper.h"

int drawGrid(int fields[], int x, int y, int num){
    ALLEGRO_BITMAP *tile = nullptr;
    ALLEGRO_BITMAP *clearField = nullptr;
    ALLEGRO_BITMAP *flag = nullptr;
    ALLEGRO_BITMAP *one = nullptr;
    ALLEGRO_BITMAP *two = nullptr;
    ALLEGRO_BITMAP *three= nullptr;
    ALLEGRO_BITMAP *four = nullptr;
    ALLEGRO_BITMAP *five = nullptr;
    ALLEGRO_BITMAP *six = nullptr;
    ALLEGRO_BITMAP *seven = nullptr;
    ALLEGRO_BITMAP *eight = nullptr;
    one = al_load_bitmap("1.bmp");
    two = al_load_bitmap("2.bmp");
    three = al_load_bitmap("3.bmp");
    four = al_load_bitmap("4.bmp");
    five = al_load_bitmap("5.bmp");
    six = al_load_bitmap("6.bmp");
    seven = al_load_bitmap("7.bmp");
    eight = al_load_bitmap("8.bmp");
	flag = al_load_bitmap("Flag.bmp");
	tile = al_load_bitmap("Tile.bmp");
	clearField = al_load_bitmap("clear.bmp");
	al_convert_mask_to_alpha(tile, BLACK);
	al_convert_mask_to_alpha(clearField, BLACK);
	al_convert_mask_to_alpha(flag, BLACK);
	al_convert_mask_to_alpha(one, BLACK);
	al_convert_mask_to_alpha(two, BLACK);
	al_convert_mask_to_alpha(three, BLACK);
	al_convert_mask_to_alpha(four, BLACK);
	al_convert_mask_to_alpha(five, BLACK);
	al_convert_mask_to_alpha(six, BLACK);
	al_convert_mask_to_alpha(seven, BLACK);
	al_convert_mask_to_alpha(eight, BLACK);
	int xco = 0;
	int yco = 0;

    for(int i = 50; i <= (height*20); i+= 50){
        for(int j = 70; j <= (width*20 + 20); j+= 50){
                al_draw_bitmap(tile, i, j, 0);
        }
    }

    for(int i = 0; i <= num; i++){
        yco = i / 8;
        xco = (i - (yco * 8))*50 + 50;
        yco = yco*50 + 70;
        switch(fields[i]){
            case 21:
                al_draw_bitmap(one, xco, yco, 0);
                break;
            case 22:
                al_draw_bitmap(two, xco, yco, 0);
                break;
            case 23:
                al_draw_bitmap(three, xco, yco, 0);
                break;
            case 24:
                al_draw_bitmap(four, xco, yco, 0);
                break;
            case 25:
                al_draw_bitmap(five, xco, yco, 0);
                break;
            case 26:
                al_draw_bitmap(six, xco, yco, 0);
                break;
            case 27:
                al_draw_bitmap(seven, xco, yco, 0);
                break;
            case 28:
                al_draw_bitmap(eight, xco, yco, 0);
                break;
            case 10:
                al_draw_bitmap(clearField, xco, yco, 0);
                break;
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
                al_draw_bitmap(flag, xco, yco, 0);
                break;
        }
    }
    return 0;
}

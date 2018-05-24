/*******************************************************
 *  Alex Djordjevic ICS3U 2018 Minesweeper Summative   *
 *******************************************************/
#include <stdio.h>
#include "Minesweeper.h"

int main(int argc, char *argv[]){
    initializeAllegro();
    ALLEGRO_DISPLAY *display = al_create_display(SCREEN_W, SCREEN_H);
    ALLEGRO_FONT *font = al_load_ttf_font("SF_Cartoonist_Hand.ttf", 36, 0);
    checkSetup(display, font);
    ALLEGRO_EVENT_QUEUE *event_queue = nullptr;

	// set up event queue
	event_queue = al_create_event_queue();
	if (!event_queue) {
		al_show_native_message_box(display, "Error", "Error", "Failed to create event_queue!",
                                 nullptr, ALLEGRO_MESSAGEBOX_ERROR);
		al_destroy_display(display);
      	return -1;
	}

	// need to register events for our event queue
	al_register_event_source(event_queue, al_get_display_event_source(display));
 	al_register_event_source(event_queue, al_get_keyboard_event_source());

 	//Place mines randomly
    int number = 63;
    int mines = 10;
    int fields[64] = {0};
    minePlacer(fields, number, mines);
    for(int i = 0; i <= number; i++){
        if(fields[i] == 0){
            printf("%d\n", fields[i]);
        }
        else{
            printf("\t%d\n", fields[i]);
        }
    }

	// Create a bitmap and load the image
	ALLEGRO_BITMAP *square = nullptr;
	square = al_load_bitmap("Tile.bmp");
	ALLEGRO_BITMAP *selector = nullptr;
	selector = al_load_bitmap("square1.bmp");

	// remove background of image
	al_convert_mask_to_alpha(square, BLACK);
	al_convert_mask_to_alpha(selector, BLACK);

	// move ball across screen using keyboard.
	int dx = 52;
	int dy = 72;
	int numHolder = 0;
	al_clear_to_color(SLATEGREY);
	al_draw_text(font, BLACK, 640/2, (20), ALLEGRO_ALIGN_CENTRE, "SpaceSweepr pre-alpha");
	for(int i = 50; i <= (height*20); i+= 50){
        for(int j = 70; j <= (width*20 + 20); j+= 50){
            al_draw_bitmap(square, i, j, 0);
        }
    }
    al_draw_bitmap(selector, dx, dy, 0);
	al_flip_display();
	bool doexit = false;
    while (!doexit) {

    	ALLEGRO_EVENT ev;
      	al_wait_for_event(event_queue, &ev);

      	if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
        	doexit = true;
      	}
      	else if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
         	switch(ev.keyboard.keycode) {
            	case ALLEGRO_KEY_UP:
               		dy -= 50;
               		break;
	            case ALLEGRO_KEY_DOWN:
    		        dy += 50;
            		break;
            	case ALLEGRO_KEY_LEFT:
               		dx -= 50;
               		break;
	            case ALLEGRO_KEY_RIGHT:
               		dx += 50;
               		break;
               	case ALLEGRO_KEY_ESCAPE:
               		doexit = true;
               		break;
                case ALLEGRO_KEY_ENTER:
                    doexit = clicker(fields, dx, dy);
                    break;
         	}
         	if(dx > height*20+2){
                dx = height*20+2;
         	}
         	if(dx < 52){
                dx = 52;
         	}
         	if(dy > width*20+22){
                dy = width*20+22;
         	}
         	if(dy < 72){
                dy = 72;
         	}
         	al_clear_to_color(SLATEGREY);
		 	al_draw_text(font, BLACK, 640/2, (20), ALLEGRO_ALIGN_CENTRE, "SpaceSweepr pre-alpha");
		 	drawGrid(fields, dx, dy, number);
		 	al_draw_bitmap(selector, dx, dy, 0);
		 	al_flip_display();
		}
	}

	//Release the bitmap data and exit with no errors
   	al_destroy_bitmap(square);
	al_destroy_display(display);
	return 0;
}

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
    int number = 99;
    int mines = 10;
    int fields[100] = {0};
    minePlacer(fields, number, mines);
    for(int i = 0; i <= number; i++){
        if(fields[i] == 0){
            printf("%d\n", fields[i]);
        }
        else{
            printf("\t%d\n", fields[i]);
        }
    }

	ALLEGRO_BITMAP *selector = nullptr;
	ALLEGRO_BITMAP *bg = nullptr;
	bg = al_load_bitmap("BG.bmp");
	selector = al_load_bitmap("square1.bmp");
	al_convert_mask_to_alpha(selector, BLACK);

	// move ball across screen using keyboard.
	int x = 10;
	int y = 10;
	int dx = 48;
	int dy = 67;
	int winner = 0;
	char f = 'o';
	al_draw_bitmap(bg, 0, 0, 0);
	al_draw_text(font, BLACK, 640/2, (20), ALLEGRO_ALIGN_CENTRE, "SpaceSweepr alpha");
	drawGrid(fields, dx, dy, number);
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
               		dy -= 30;
               		break;
	            case ALLEGRO_KEY_DOWN:
    		        dy += 30;
            		break;
            	case ALLEGRO_KEY_LEFT:
               		dx -= 30;
               		break;
	            case ALLEGRO_KEY_RIGHT:
               		dx += 30;
               		break;
               	case ALLEGRO_KEY_ESCAPE:
               		doexit = true;
               		break;
                case ALLEGRO_KEY_SPACE:
                    f = 'o';
                    doexit = clicker(fields, dx, dy, f);
                    break;
                case ALLEGRO_KEY_F:
                    f = 'f';
                    doexit = clicker(fields, dx, dy, f);
                    break;
         	}
         	if(dx > (x-1)*30+48){
                dx = (x-1)*30+48;
         	}
         	if(dx < 48){
                dx = 48;
         	}
         	if(dy > (y-1)*30+67){
                dy = (y-1)*30+67;
         	}
         	if(dy < 67){
                dy = 67;
         	}
         	al_draw_bitmap(bg, 0, 0, 0);
		 	al_draw_text(font, BLACK, 640/2, (20), ALLEGRO_ALIGN_CENTRE, "SpaceSweepr alpha");
		 	drawGrid(fields, dx, dy, number);
		 	al_draw_bitmap(selector, dx, dy, 0);
		 	al_flip_display();
		}
	}
    for(int i = 0; i <= number; i++){
        if(fields[i] == 9){
            winner ++;
        }
    }
    if(winner == 0){
        al_draw_text(font, BLACK, 640/2, 500, ALLEGRO_ALIGN_CENTRE, "You won!");
    }
    else{
        al_draw_text(font, BLACK, 640/2, 500, ALLEGRO_ALIGN_CENTRE, "Better luck next time :(");
        for(int i = 0; i <= number; i ++){
            if(fields[i] == 9){
                fields[i] = 31;
            }
            drawGrid(fields, dx, dy, number);
        }
    }
    al_flip_display();
    al_rest(3);
	//Release the bitmap data and exit with no errors
	al_destroy_display(display);
	return 0;
}

#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_native_dialog.h>
#include "Minesweeper.h"

void initializeAllegro(){
	al_init();
	al_init_font_addon();
    al_init_ttf_addon();

}

int checkSetup(ALLEGRO_DISPLAY *display, ALLEGRO_FONT *font){
	if (!display) {
    	al_show_native_message_box(display, "Error", "Error", "Failed to initialize display!", nullptr, ALLEGRO_MESSAGEBOX_ERROR);
       	return -1;
	}
    if (!font){
        al_show_native_message_box(display, "Error", "Error", "Could not load comic.ttf", nullptr, ALLEGRO_MESSAGEBOX_ERROR);
        return -1;
   }
   // need to add image processor
 	if (!al_init_image_addon()) {
    	al_show_native_message_box(display, "Error", "Error",
    		"Failed to initialize al_init_image_addon!",nullptr, ALLEGRO_MESSAGEBOX_ERROR);
    	return 0;
	}
	// Initialize keyboard routines
	if (!al_install_keyboard()) {
	    al_show_native_message_box(display, "Error", "Error", "failed to initialize the keyboard!",
                                 nullptr, ALLEGRO_MESSAGEBOX_ERROR);
      	return -1;
   	}
   	al_set_window_title(display, "SpaceSweepr");
   return 0;
}

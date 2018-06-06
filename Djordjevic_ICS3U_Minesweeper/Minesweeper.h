const int SCREEN_W = 800;
const int SCREEN_H = 600;

#define BACKGROUND al_map_rgb(0xff, 0xff, 0xff)
#define FOREGROUND al_map_rgb(0x3C, 0x64, 0x78)
#define WHITE      al_map_rgb(255,255,255)
#define PINK        al_map_rgb(255, 0, 255)
#define BLACK       al_map_rgb(0, 0, 0)
#define SLATEGREY   al_map_rgb(112,128,144)
#define GRAY       al_map_rgb(126,126,126)
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>

const int height = 32;
const int width = 32;

struct TimeFormat{
    int minute;
    int second;
};

struct Highscore {
    char name[15];
    int height;
    int width;
    int numMines;
    TimeFormat time;
};

void initializeAllegro();
int checkSetup(ALLEGRO_DISPLAY *display, ALLEGRO_FONT *font);
int minePlacer(int fields[], int number, int mines);
bool clicker(int fields[], int x, int y, char f);
int drawGrid(int fields[], int x, int y, int num);
int fieldClear(int fields[]);

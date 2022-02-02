#ifndef __TYPES__DEF__
#define __TYPES__DEF__

//all information of regions and it soldiers
struct region_information{
    bool attacking;
    bool defending;
    bool accident[750];
    bool outside[750];
    int x;
    int y;
    int destination;
    int soldiers;
    int ownership;
    int counter;
    int check;
    int soldier_x[750];
    int soldier_y[750];
    int soldier_line_slope;
    int starter;
}region[25];

//all information for spells that are displaying on window
struct spells{
    int x;
    int y;
    int which;
    bool display;
}spell_info[3];

//for spell action on all ownership soldiers
struct ownerships{
    int spell;
    int timer;
    int action;
    int limitation;
    bool shield;
    bool all_ownership;
}ownership_number[5];

//users information for scoreboard
struct user_info{
    char user_name[50];
    int score;
} user[100];
//user ID for adding score
int user_ID = -1;

//user score
int score = 0;

struct AL_information{
    bool destination[21];
}AL[4];

const int FPS = 60;

//size of the window
const int SCREEN_WIDTH = 950;
const int SCREEN_HEIGHT = 600;

//a counter for time
long long when = 0;

//a flag for maps for the time when player choose a map in menu
int map_number = 0;

//Player name
char name[100];
int length = 0;

//to prevent switch a key 2 times
int again = 0;

//The window we'll be rendering to
SDL_Window* Window = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;

//Loads individual image
SDL_Texture* loadTexture( char* path);

//displayed image
SDL_Texture* gTexture = NULL;
SDL_Texture* gTexture2 = NULL;
SDL_Texture* gTexture3 = NULL;
SDL_Texture* gTexture4 = NULL;
SDL_Texture* gTexture5 = NULL;
SDL_Texture* Spell1 = NULL;
SDL_Texture* Spell2 = NULL;
SDL_Texture* Spell3 = NULL;
SDL_Texture* Spell4 = NULL;
SDL_Texture* Spell5 = NULL;
SDL_Texture* spell = NULL;
SDL_Texture* opening = NULL;
SDL_Texture* lose = NULL;
SDL_Texture* win = NULL;
SDL_Texture* black_star = NULL;
SDL_Texture* golden_star = NULL;
SDL_Texture* shield = NULL;

//first click region number
int beginning = 0;
//second click region number
int ending = 0;

//distance between our barracks and destination barracks
int x_distance;
int y_distance;

//choose the direction of soldiers
int which1[25];
//choose the direction of soldiers
int which2[25];
//for the time that line slope is not an integer number
float fix_slope;

//open menu with just one enter
int open_menu = 0;

//remove the spell after use that
bool display_spell1 = true;
bool display_spell2 = true;

//the last of game
bool GAME_OVER = false;
bool WIN = false;
bool STOP_ALL = false;

//score of user
char number[10];

#endif

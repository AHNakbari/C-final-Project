#ifndef __BASE_FUNCTION__DEF__
#define __BASE_FUNCTION__DEF__
#include <SDL.h>
#include <SDL2_gfxPrimitives.h>


#ifdef main
#undef main
#endif

#include <SDL_rect.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "types.h"
#include "save_game.h"
#include <time.h>
#include <string.h>
#include <math.h>

//init all primaries
bool init()
{
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if(SDL_Init( SDL_INIT_VIDEO | SDL_INIT_EVENTS) < 0)
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
        success = false;
    }
    else
    {
        //Set texture filtering to linear
        if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
        {
            printf( "Warning: Linear texture filtering not enabled!" );
        }
            //Create window
            Window = SDL_CreateWindow("state.io", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
            if (Window == NULL) {
                printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
                success = false;
            }
            else
            {
                //Create renderer for window
                gRenderer = SDL_CreateRenderer( Window, -1, SDL_RENDERER_ACCELERATED );
                if( gRenderer == NULL )
                {
                    printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
                    success = false;
                }
                else
                {
                    //Initialize renderer color
                    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x10, 0xFF, 0x10 );

                }

            }
    }

    return success;
}

//load pictures
bool loadMedia()
{

    //Loading success flag
    bool success = true;

    //Load stretching surface
    gTexture =   loadTexture( "images\\1.bmp" );
    gTexture2 =  loadTexture( "images\\2.bmp" );
    gTexture3 =  loadTexture( "images\\3.bmp" );
    gTexture4 =  loadTexture( "images\\4.bmp" );
    gTexture5 =  loadTexture( "images\\5.bmp" );
    Spell1 =     loadTexture( "images\\11.bmp" );
    Spell2 =     loadTexture( "images\\12.bmp" );
    Spell3 =     loadTexture( "images\\13.bmp" );
    Spell4 =     loadTexture( "images\\14.bmp" );
    Spell5 =     loadTexture( "images\\15.bmp" );
    opening =    loadTexture( "images\\00.bmp" );
    lose =       loadTexture( "images\\lose.bmp" );
    win =        loadTexture( "images\\win.bmp" );
    black_star = loadTexture( "images\\21.bmp" );
    golden_star= loadTexture( "images\\20.bmp" );
    shield =     loadTexture( "images\\25.bmp" );
    if( gTexture == NULL )
    {
        printf( "Failed to load stretching image!\n" );
        success = false;
    }
    return success;
}

//close all window and images
void close()
{
    //Free loaded image
    SDL_DestroyTexture( gTexture );
    SDL_DestroyTexture( gTexture2 );
    SDL_DestroyTexture( gTexture3 );
    SDL_DestroyTexture( gTexture4 );
    SDL_DestroyTexture( gTexture5 );
    SDL_DestroyTexture( Spell1 );
    SDL_DestroyTexture( Spell2 );
    SDL_DestroyTexture( Spell3 );
    SDL_DestroyTexture( Spell4 );
    SDL_DestroyTexture( Spell5 );
    SDL_DestroyTexture( spell );
    SDL_DestroyTexture( opening );
    SDL_DestroyTexture( win );
    SDL_DestroyTexture( lose );
    SDL_DestroyTexture( black_star );
    SDL_DestroyTexture( golden_star );
    SDL_DestroyTexture( shield );
    gTexture = NULL;
    gTexture2 = NULL;
    gTexture3 = NULL;
    gTexture4 = NULL;
    gTexture5 = NULL;
    Spell1 = NULL;
    Spell2 = NULL;
    Spell3 = NULL;
    Spell4 = NULL;
    Spell5 = NULL;
    spell = NULL;
    opening = NULL;
    win = NULL;
    lose = NULL;
    black_star = NULL;
    golden_star = NULL;
    shield = NULL;

    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( Window );
    Window = NULL;
    gRenderer = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}
#endif

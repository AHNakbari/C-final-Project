#include "Base_Functions.h"
#include "Other_Functions.h"
#include "types.h"
#include "Maps.h"
#include "spells_action.h"
#include "AL.h"
#include "save_game.h"

int main()
{
    //Start up SDL and create window
    if( !init() )
    {
        printf( "Failed to initialize!\n" );
    }
    else
    {
        //Load media
        if( !loadMedia() )
        {
            printf( "Failed to load media!\n" );
        }
        else
        {
            //load resume just one time
            bool load = true;

            //flag for when you are in the game
            bool playing = false;

            //what to do fo each click in meno
            int what_to_do = 4;

            //just save game one time
            bool saving = true;

            //just change what_to_do in the menu
            bool back_to_menu = true;

            //just change maps in the menu
            bool changing_map = true;

            //reset maps and determining them only one time
            bool reset = false;

            //Main loop flag
            bool quit = false;

            //Event handler
            SDL_Event event;

            //Reset maps
            Reset_maps();

            bool first_click = false;

            //While application is running
            while( !quit )
            {
                when++;
                //Handle events on queue
                while( SDL_PollEvent( &event ) != 0 )
                {
                    //User requests quit
                    if( event.type == SDL_QUIT ) {
                        quit = true;
                        if(!GAME_OVER && !WIN) {
                            save_game(map_number);
                        }
                    }else if( GAME_OVER ) {
                        what_to_do = 6;
                        score = -50;
                        if(saving) save_score();
                        playing = false;
                        saving = false;
                        if(event.key.keysym.sym == SDLK_RETURN){
                            what_to_do = 0;
                            GAME_OVER = false;
                            back_to_menu = true;
                            map_number = 0;
                            Reset_maps();
                            first_click = false;
                            STOP_ALL = true;
                            saving = true;
                        }
                    } else if ( WIN ) {
                        what_to_do = 5;
                        score = 100;
                        if(saving) save_score();
                        saving = false;
                        playing = false;
                        if(event.key.keysym.sym == SDLK_RETURN){
                            what_to_do = 0;
                            WIN = false;
                            back_to_menu = true;
                            map_number = 0;
                            Reset_maps();
                            first_click = false;
                            STOP_ALL = true;
                            saving = true;
                        }
                    } else if(input_name(event) || open_menu) {
                        if (event.key.keysym.sym == SDLK_RETURN || open_menu == 1) {
                            if(!open_menu)what_to_do = 0;
                            open_menu = 1;
                            SDL_FlushEvent(event.key.keysym.sym);
                            if (event.button.button == SDL_BUTTON_LEFT) {
                                if (event.motion.x > 300 && event.motion.x < 650 && event.motion.y > 120 &&
                                    event.motion.y < 180 && back_to_menu) {
                                    back_to_menu = false;
                                    changing_map = true;
                                    reset = true;
                                    what_to_do = 1;
                                } else if (event.motion.x > 300 && event.motion.x < 650 && event.motion.y > 270 &&
                                           event.motion.y < 330 && back_to_menu) {
                                    back_to_menu = false;
                                    what_to_do = 2;
                                } else if (event.motion.x > 300 && event.motion.x < 650 && event.motion.y > 420 &&
                                           event.motion.y < 480 && back_to_menu) {
                                    back_to_menu = false;
                                    what_to_do = 3;
                                }
                            } else if (event.key.keysym.sym == SDLK_ESCAPE && !playing) {
                                back_to_menu = true;
                                what_to_do = 0;
                                map_number = 0;
                            }
                        }
                    }
                }
                if (!GAME_OVER && event.button.button == SDL_BUTTON_LEFT && !first_click) {
                    first_click = first_mouse_handling(event);
                } else if (!GAME_OVER && event.button.button == SDL_BUTTON_LEFT && first_click) {
                    first_click = second_mouse_handling(event);
                } else if (!GAME_OVER && event.button.button == SDL_BUTTON_RIGHT) {
                    first_click = false;
                    ending = 0;
                }

                //what to do after click on menu
                switch (what_to_do) {
                    case 1:
                        //background opening
                        SDL_RenderCopy( gRenderer, opening , NULL, NULL);
                        //choosing map
                        boxColor(gRenderer , 300 , 100 , 650 , 160 , 0xA5F5FF00);
                        stringRGBA(gRenderer , 385 , 130 , "PLAY IN MAP NUMBER ONE" , 00 , 00 , 00 , 0xAA);
                        boxColor(gRenderer , 300 , 185 , 650 , 245 , 0xA5F5FF00);
                        stringRGBA(gRenderer , 385 , 215 , "PLAY IN MAP NUMBER TWO" , 00 , 00 , 00 , 0xAA);
                        boxColor(gRenderer , 300 , 270 , 650 , 330 , 0xA5F5FF00);
                        stringRGBA(gRenderer , 385 , 300 , "PLAY IN MAP NUMBER THREE" , 00 , 00 , 00 , 0xAA);
                        boxColor(gRenderer , 300 , 355 , 650 , 415 , 0xA5F5FF00);
                        stringRGBA(gRenderer , 385 , 385 , "PLAY IN MAP NUMBER FOUR" , 00 , 00 , 00 , 0xAA);
                        boxColor(gRenderer , 300 , 440 , 650 , 500 , 0xA5F5FF00);
                        stringRGBA(gRenderer , 400 , 470 , "PLAY IN MEMORY TEST MAP" , 00 , 00 , 00 , 0xAA);
                        if( event.button.clicks == 2 ) {
                            if (event.motion.x > 300 && event.motion.x < 650 && event.motion.y > 100 &&
                                event.motion.y < 160 && changing_map) {
                                if (reset) {
                                    reset = false;
                                    Determining_ownership1();
                                    Reset_maps();
                                }
                                playing = true;
                                map_number = 1;
                                STOP_ALL = false;
                                changing_map = false;
                            } else if (event.motion.x > 300 && event.motion.x < 650 && event.motion.y > 185 &&
                                       event.motion.y < 245 && changing_map) {
                                if (reset) {
                                    reset = false;
                                    Determining_ownership2();
                                    Reset_maps();
                                }
                                playing = true;
                                map_number = 2;
                                STOP_ALL = false;
                                changing_map = false;
                            } else if (event.motion.x > 300 && event.motion.x < 650 && event.motion.y > 270 &&
                                       event.motion.y < 330 && changing_map) {
                                if (reset) {
                                    reset = false;
                                    Determining_ownership3();
                                    Reset_maps();
                                }
                                playing = true;
                                map_number = 3;
                                STOP_ALL = false;
                                changing_map = false;
                            } else if (event.motion.x > 300 && event.motion.x < 650 && event.motion.y > 255 &&
                                       event.motion.y < 415 && changing_map) {
                                if (reset) {
                                    reset = false;
                                    Determining_ownership4();
                                    Reset_maps();
                                }
                                playing = true;
                                map_number = 4;
                                STOP_ALL = false;
                                changing_map = false;
                            } else if (event.motion.x > 300 && event.motion.x < 650 && event.motion.y > 440 &&
                                       event.motion.y < 500 && changing_map) {
                                if (reset) {
                                    reset = false;
                                    Determining_ownership5();
                                    Reset_maps();
                                }
                                playing = true;
                                map_number = 5;
                                STOP_ALL = false;
                                changing_map = false;
                            }
                        }
                        break;
                    case 2:
                        if(load){
                            load_game();
                            load = false;
                        }
                        STOP_ALL = false;
                        break;
                    case 3:
                        scoreboard();
                        //background opening
                        SDL_RenderCopy( gRenderer, opening , NULL, NULL);
                        //draw table
                        SDL_SetRenderDrawColor(gRenderer, 0xFF , 0xF6 , 33, 0xFF);
                        for(int i = 0; i < 9; i++)
                            SDL_RenderDrawLine(gRenderer , 325 , 60 + i * 60 , 625 , 60 + i * 60);
                        SDL_RenderDrawLine(gRenderer , 325 , 60 , 325 , 540 );
                        SDL_RenderDrawLine(gRenderer , 405 , 60 , 405 , 540 );
                        SDL_RenderDrawLine(gRenderer , 625 , 60 , 625 , 540 );
                        //icon for reset;
                        boxColor(gRenderer , 100 , 60 , 200 , 120 , 0xA5F5FF00);
                        stringRGBA(gRenderer , 130 , 90 , "RESET" , 00 , 00 , 00 , 0xFF);
                        if(event.button.clicks == 2 && event.motion.x < 200 && event.motion.x > 100 && event.motion.y < 120 && event.motion.y > 60) {
                            reset_scoreboard();
                        }
                        for(int j = 0; j < 8; j++) {
                            int min = -10000;
                            int print = 100;
                            for (int i = 0; 1; i++) {
                                if (user[i].score == 3 || user[i].score == 0)break;
                                if (user[i].score > min) {
                                    min = user[i].score;
                                    print = i;
                                }
                            }
                            if(print != 100){
                                user_score(user[print].score);
                                stringRGBA(gRenderer , 345  , 90 + j * 60 , number , 00 , 00 , 00 , 0xFF);
                                user[print].score = -100000;
                                int length1 = strlen(user[print].user_name);
                                stringRGBA(gRenderer , 515 - length1*5 , 90 + j * 60 , user[print].user_name , 00 , 00 , 00 , 0xFF);
                            }
                        }
                        if(event.key.keysym.sym == SDLK_ESCAPE){
                            back_to_menu = true;
                            what_to_do = 0;
                            map_number = 0;
                        } else {
                            SDL_Delay(500);
                        }
                        break;
                    case 4:
                        //background opening
                        SDL_RenderCopy( gRenderer, opening , NULL, NULL);
                        //help the user to input name
                        stringRGBA(gRenderer , 390 , 250 , "PLEASE ENTER YOUR NAME" , 00 , 00 , 00 , 0xAA);
                        //box of input
                        boxColor(gRenderer , 350 , 270 , 600 , 330 , 0xA5F5FF00);

                        stringRGBA(gRenderer , 365 , 300 , name , 00 , 00 , 00 , 0xAA);
                        break;
                    case 5:
                        //showing "you win"
                        SDL_RenderCopy( gRenderer, win , NULL, NULL);
                        map_number = 0;
                        break;
                    case 6:
                        //showing "Game Over"
                        SDL_RenderCopy( gRenderer, lose , NULL, NULL);
                        map_number = 0;
                        break;
                    default:
                        //background opening
                        SDL_RenderCopy( gRenderer, opening , NULL, NULL);
                        //menu in the opening
                        boxColor(gRenderer , 300 , 120 , 650 , 180 , 0xA5F5FF00);
                        stringRGBA(gRenderer , 400 ,150 , "START A NEW GAME" , 00 , 00 , 00 , 0xAA);
                        boxColor(gRenderer , 300 , 270 , 650 , 330 , 0xA5F5FF00);
                        stringRGBA(gRenderer , 385 ,300 , "CONTINUE PREVIOUS GAME" , 00 , 00 , 00 , 0xAA);
                        boxColor(gRenderer , 300 , 420 , 650 , 480 , 0xA5F5FF00);
                        stringRGBA(gRenderer , 430 ,450 , "SCOREBOARD" , 00 , 00 , 00 , 0xAA);
                        break;
                }

                //choosing maps
                switch (map_number) {
                    case 1:
                        Maps1();
                        break;
                    case 2:
                        Maps2();
                        break;
                    case 3:
                        Maps3();
                        break;
                    case 4:
                        Maps4();
                        break;
                    case 5:
                        TEST_MAP();
                        break;
                    default:
                        break;
                }
                if( !GAME_OVER && !WIN && !STOP_ALL) {
                    //check win or lose
                    if (map_number != 0)lose_OR_win();

                    //Increasing soldiers
                    if (when % 31 == 0)Increasing_all();
                    if (when % 20 == 0)creating_AND_decreasing_soldiers();

                    //Call AL functions
                    AL_actions();

                    //timer for spells
                    for (int i = 0; i < 4; i++) {
                        if (ownership_number[i].spell > 0)ownership_number[i].timer++;
                    }

                    //moving soldiers to destination
                    moving_soldiers();
                }
                //Update screen
                SDL_RenderPresent(gRenderer);

                //delay for decrease
                SDL_Delay(1100/FPS);

            }
        }
    }
    SDL_StopTextInput();
    //Free resources and close SDL
    close();
    return 0;
}
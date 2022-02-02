#ifndef __OTHER_FUNCTION__DEF__
#define __OTHER_FUNCTION__DEF__

#include <SDL.h>
#include <SDL2_gfxPrimitives.h>

#ifdef main
#undef main
#endif

#include <stdio.h>
#include <stdbool.h>

#include "types.h"
#include "Base_Functions.h"
#include "spells_action.h"

//input player name
bool input_name(SDL_Event event)
{
    while(event.key.keysym.sym != SDLK_RETURN && !open_menu)
    {
        switch (event.key.keysym.sym) {
            case SDLK_q :
                if(again != 1) {
                    name[length] = 'Q';
                    length++;
                    again = 1;
                }else {
                    again = 0;
                }
                break;
            case SDLK_w :
                if(again != 2) {
                    name[length] = 'W';
                    length++;
                    again = 2;
                }else {
                    again = 0;
                }
                break;
            case SDLK_e :
                if(again != 3) {
                    name[length] = 'E';
                    length++;
                    again = 3;
                }else {
                    again = 0;
                }
                break;
            case SDLK_r :
                if(again != 4) {
                    name[length] = 'R';
                    length++;
                    again = 4;
                }else {
                    again = 0;
                }
                break;
            case SDLK_t :
                if(again != 5) {
                    name[length] = 'T';
                    length++;
                    again = 5;
                }else {
                    again = 0;
                }
                break;
            case SDLK_y :
                if(again != 6) {
                    name[length] = 'Y';
                    length++;
                    again = 6;
                }else {
                    again = 0;
                }
                break;
            case SDLK_u :
                if(again != 7) {
                    name[length] = 'U';
                    length++;
                    again = 7;
                }else {
                    again = 0;
                }
                break;
            case SDLK_i :
                if(again != 8) {
                    name[length] = 'I';
                    length++;
                    again = 8;
                }else {
                    again = 0;
                }
                break;
            case SDLK_o :
                if(again != 9) {
                    name[length] = 'O';
                    length++;
                    again = 9;
                }else {
                    again = 0;
                }
                break;
            case SDLK_p :
                if(again != 10) {
                    name[length] = 'P';
                    length++;
                    again = 10;
                }else {
                    again = 0;
                }
                break;
            case SDLK_a :
                if(again != 11) {
                    name[length] = 'A';
                    length++;
                    again = 11;
                }else {
                    again = 0;
                }
                break;
            case SDLK_s :
                if(again != 12) {
                    name[length] = 'S';
                    length++;
                    again = 12;
                }else {
                    again = 0;
                }
                break;
            case SDLK_d :
                if(again != 13) {
                    name[length] = 'D';
                    length++;
                    again = 13;
                }else {
                    again = 0;
                }
                break;
            case SDLK_f :
                if(again != 14) {
                    name[length] = 'F';
                    length++;
                    again = 14;
                }else {
                    again = 0;
                }
                break;
            case SDLK_g :
                if(again != 15) {
                    name[length] = 'G';
                    length++;
                    again = 15;
                }else {
                    again = 0;
                }
                break;
            case SDLK_h :
                if(again != 16) {
                    name[length] = 'H';
                    length++;
                    again = 16;
                }else {
                    again = 0;
                }
                break;
            case SDLK_j :
                if(again != 17) {
                    name[length] = 'J';
                    length++;
                    again = 17;
                }else {
                    again = 0;
                }
                break;
            case SDLK_k :
                if(again != 18) {
                    name[length] = 'K';
                    length++;
                    again = 18;
                }else {
                    again = 0;
                }
                break;
            case SDLK_l :
                if(again != 19) {
                    name[length] = 'L';
                    length++;
                    again = 19;
                }else {
                    again = 0;
                }
                break;
            case SDLK_z :
                if(again != 20) {
                    name[length] = 'Z';
                    length++;
                    again = 20;
                }else {
                    again = 0;
                }
                break;
            case SDLK_x :
                if(again != 21) {
                    name[length] = 'X';
                    length++;
                    again = 21;
                }else {
                    again = 0;
                }
                break;
            case SDLK_c :
                if(again != 22) {
                    name[length] = 'C';
                    length++;
                    again = 22;
                }else {
                    again = 0;
                }
                break;
            case SDLK_v :
                if(again != 23) {
                    name[length] = 'V';
                    length++;
                    again = 23;
                }else {
                    again = 0;
                }
                break;
            case SDLK_b :
                if(again != 24) {
                    name[length] = 'B';
                    length++;
                    again = 24;
                }else {
                    again = 0;
                }
                break;
            case SDLK_n :
                if(again != 25) {
                    name[length] = 'N';
                    length++;
                    again = 25;
                }else {
                    again = 0;
                }
                break;
            case SDLK_m :
                if(again != 26) {
                    name[length] = 'M';
                    length++;
                    again = 26;
                }else {
                    again = 0;
                }
                break;
            case SDLK_SPACE :
                if(again != 27) {
                    name[length] = ' ';
                    length++;
                    again = 27;
                }else {
                    again = 0;
                }
                break;
            case SDLK_BACKSPACE :
                if(again != 28 && length != 0) {
                    length--;
                    name[length] = '\0';
                    again = 28;
                }else {
                    again = 0;
                }
                break;
            case SDLK_1 :
                if(again != 29) {
                    name[length] = '1';
                    length++;
                    again = 29;
                }else {
                    again = 0;
                }
                break;
            case SDLK_2 :
                if(again != 30) {
                    name[length] = '2';
                    length++;
                    again = 30;
                }else {
                    again = 0;
                }
                break;
            case SDLK_3 :
                if(again != 31) {
                    name[length] = '3';
                    length++;
                    again = 31;
                }else {
                    again = 0;
                }
                break;
            case SDLK_4 :
                if(again != 32) {
                    name[length] = '4';
                    length++;
                    again = 32;
                }else {
                    again = 0;
                }
                break;
            case SDLK_5 :
                if(again != 33) {
                    name[length] = '5';
                    length++;
                    again = 33;
                }else {
                    again = 0;
                }
                break;
            case SDLK_6 :
                if(again != 34) {
                    name[length] = '6';
                    length++;
                    again = 34;
                }else {
                    again = 0;
                }
                break;
            case SDLK_7 :
                if(again != 35) {
                    name[length] = '7';
                    length++;
                    again = 35;
                }else {
                    again = 0;
                }
                break;
            case SDLK_8 :
                if(again != 36) {
                    name[length] = '8';
                    length++;
                    again = 36;
                }else {
                    again = 0;
                }
                break;
            case SDLK_9 :
                if(again != 37) {
                    name[length] = '9';
                    length++;
                    again = 37;
                }else {
                    again = 0;
                }
                break;
            default:
                break;
        }
        return false;
    }
    if(length != 0)return true;
}

//check lose or win
void lose_OR_win()
{
    bool game_over = false;
    bool wining = true;
    if(map_number == 1) {
        for (int i = 1; i < 18; i++) {
            if (region[i].ownership == 0)game_over = true;
        }
        if (!game_over) {
            GAME_OVER = true;
            return;
        }
        for (int i = 1; i < 18; i++) {
            if (region[i].ownership == 1 || region[i].ownership == 2 || region[i].ownership == 3)wining = false;
        }
        if (wining) {
            WIN = true;
            return;
        }
    }else if(map_number == 2){
        for (int i = 1; i < 12; i++) {
            if (region[i].ownership == 0)game_over = true;
        }
        if (!game_over) {
            GAME_OVER = true;
            return;
        }
        for (int i = 1; i < 12; i++) {
            if (region[i].ownership == 1 || region[i].ownership == 2 || region[i].ownership == 3)wining = false;
        }
        if (wining) {
            WIN = true;
            return;
        }
    }else if(map_number == 3){
        for (int i = 1; i < 10; i++) {
            if (region[i].ownership == 0)game_over = true;
        }
        if (!game_over) {
            GAME_OVER = true;
            return;
        }
        for (int i = 1; i < 10; i++) {
            if (region[i].ownership == 1 || region[i].ownership == 2 || region[i].ownership == 3)wining = false;
        }
        if (wining) {
            WIN = true;
            return;
        }
    }else if(map_number == 4){
        for (int i = 1; i < 21; i++) {
            if (region[i].ownership == 0)game_over = true;
        }
        if (!game_over) {
            GAME_OVER = true;
            return;
        }
        for (int i = 1; i < 21; i++) {
            if (region[i].ownership == 1 || region[i].ownership == 2 || region[i].ownership == 3)wining = false;
        }
        if (wining) {
            WIN = true;
            return;
        }
    }
}

//convert pictures to texture
SDL_Texture* loadTexture( char* path )
{
    //The final texture
    SDL_Texture* newTexture = NULL;

    //Load image at specified path
    SDL_Surface* loadedSurface = SDL_LoadBMP( path );
    if( loadedSurface == NULL )
    {
        printf( "Unable to load image %s! SDL Error: %s\n", path, SDL_GetError() );
    }
    else
    {
        //Convert surface to screen format
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
        if( newTexture == NULL )
        {
            printf( "Unable to optimize image %s! SDL Error: %s\n", path, SDL_GetError() );
        }

        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }

    return newTexture;
}

//first region ownerships for Map1
void Determining_ownership1()
{
    //player region_ownerships
    region[3].ownership = 0;
    region[6].ownership = 0;
    region[14].ownership = 0;
    region[16].ownership = 0;

    //AL1 region_ownerships
    region[8].ownership = 1;
    region[10].ownership = 1;
    region[11].ownership = 1;
    region[17].ownership = 1;

    //AL2 region_ownerships
    region[1].ownership = 2;
    region[4].ownership = 2;
    region[9].ownership = 2;
    region[12].ownership = 2;

    //neutral region_ownerships
    region[2].ownership = 4;
    region[5].ownership = 4;
    region[7].ownership = 4;
    region[13].ownership = 4;
    region[15].ownership = 4;
}

//first region ownerships for Map2
void Determining_ownership2()
{
    //player region ownerships
    region[2].ownership = 0;
    region[10].ownership = 0;

    //Al1 region ownerships
    region[3].ownership = 1;
    region[9].ownership = 1;

    //Al2 region ownerships
    region[1].ownership = 2;
    region[11].ownership = 2;

    //Al3 region ownerships
    region[4].ownership = 3;
    region[8].ownership = 3;

    //neutral region ownerships
    region[5].ownership = 4;
    region[6].ownership = 4;
    region[7].ownership = 4;
}

//first region ownerships for Map3
void Determining_ownership3()
{

    //player region ownerships
    region[5].ownership = 0;

    //Al1 region ownerships
    region[4].ownership = 1;

    //Al2 region ownerships
    region[6].ownership = 2;

    //neutral region ownerships
    region[1].ownership = 4;
    region[2].ownership = 4;
    region[3].ownership = 4;
    region[7].ownership = 4;
    region[8].ownership = 4;
    region[9].ownership = 4;
}

//first region ownerships for Map4
void Determining_ownership4()
{
    //player region ownerships
    region[11].ownership = 0;

    //Al1 region ownerships
    region[9].ownership = 1;

    //Al2 region ownerships
    region[12].ownership = 2;

    //Al3 region ownerships
    region[10].ownership = 3;

    //neutral region ownerships
    region[1].ownership = 4;
    region[2].ownership = 4;
    region[3].ownership = 4;
    region[4].ownership = 4;
    region[5].ownership = 4;
    region[6].ownership = 4;
    region[7].ownership = 4;
    region[8].ownership = 4;
    region[13].ownership = 4;
    region[14].ownership = 4;
    region[15].ownership = 4;
    region[16].ownership = 4;
    region[17].ownership = 4;
    region[18].ownership = 4;
    region[19].ownership = 4;
    region[20].ownership = 4;
}

//first region ownerships for test map and set soldiers
void Determining_ownership5()
{
    for(int i = 1; i < 12; i++)
    {
        if(i != 5)
        {
            region[i].ownership = 0;
            region[i].soldiers = 1;
        }
        else
        {
            region[i].ownership = 2;
            region[i].soldiers = 1;
        }
        ownership_number[0].limitation = 30;
        ownership_number[2].limitation = 30;
    }

}

//Reset Maps
void Reset_maps()
{
    for(int i = 1; i < 21; i++)
    {
        if(region[i].ownership == 4)region[i].soldiers = 20;
        else region[i].soldiers = 0;
        ownership_number[region[i].ownership].spell = 0;
        ownership_number[region[i].ownership].timer = 0;
        ownership_number[region[i].ownership].action = 1;
        ownership_number[region[i].ownership].shield = false;
        if(region[i].ownership != 3)ownership_number[region[i].ownership].limitation = 30;
        else ownership_number[region[i].ownership].limitation = 22;
        ownership_number[region[i].ownership].all_ownership = false;
        region[i].starter = 1;
        region[i].counter = 0;
        region[i].check = 0;
        AL[1].destination[i] = false;
        AL[2].destination[i] = false;
        AL[3].destination[i] = false;
    }
}

//Increase soldiers
void Increasing_all()
{
    for(int i = 1; i < 21; i++)
    {
        //Increasing all soldier except neutrals and beginning region for attack
        if(region[i].ownership != 4 && region[i].soldiers < ownership_number[region[i].ownership].limitation &&
           !region[i].attacking && !region[i].defending)region[i].soldiers++;
    }

}

//Convert number to char
char int_to_string1(int number)
{
    char num;
    switch (number % 10) {
        case 0:
            num = '0';
            break;
        case 1:
            num = '1';
            break;
        case 2:
            num = '2';
            break;
        case 3:
            num = '3';
            break;
        case 4:
            num = '4';
            break;
        case 5:
            num = '5';
            break;
        case 6:
            num = '6';
            break;
        case 7:
            num = '7';
            break;
        case 8:
            num = '8';
            break;
        case 9:
            num = '9';
            break;
        default:
            num = '0';
            break;
    }
    return num;
}

//Convert number to char
char int_to_string2(int number)
{
    char num;
    switch ((number / 10) % 10) {
        case 0:
            num = '0';
            break;
        case 1:
            num = '1';
            break;
        case 2:
            num = '2';
            break;
        case 3:
            num = '3';
            break;
        case 4:
            num = '4';
            break;
        case 5:
            num = '5';
            break;
        case 6:
            num = '6';
            break;
        case 7:
            num = '7';
            break;
        case 8:
            num = '8';
            break;
        case 9:
            num = '9';
            break;
        default:
            num = '0';
            break;
    }
    return num;
}

//Convert number to char
char int_to_string3(int number)
{
    char num;
    switch (number / 100) {
        case 0:
            num = '0';
            break;
        case 1:
            num = '1';
            break;
        case 2:
            num = '2';
            break;
        case 3:
            num = '3';
            break;
        case 4:
            num = '4';
            break;
        case 5:
            num = '5';
            break;
        case 6:
            num = '6';
            break;
        case 7:
            num = '7';
            break;
        case 8:
            num = '8';
            break;
        case 9:
            num = '9';
            break;
        default:
            num = '0';
            break;
    }
    return num;
}

//Mouse events for choose barracks
bool first_mouse_handling(SDL_Event event)
{
    for(int i = 1; i < 25; i++)
    {
        if(event.motion.x < region[i].x + 65 && event.motion.x > region[i].x + 15 && event.motion.y < region[i].y + 65 &&
           event.motion.y > region[i].y + 5&& ending != i && region[i].ownership == 0 && !region[i].attacking){
            beginning = i;
            return true;
        }
    }
    return false;
}
bool second_mouse_handling(SDL_Event event)
{
    for(int i = 1; i < 25; i++)
    {
        if(event.motion.x < region[i].x + 65 && event.motion.x > region[i].x + 15 && event.motion.y < region[i].y + 65 && event.motion.y > region[i].y + 5 && beginning != i && !ownership_number[region[i].ownership].shield){
            region[beginning].attacking = true;
            region[beginning].destination = i;
            region[beginning].counter = 0;
            region[beginning].check = 0;
            region[beginning].starter = 1;
            ending = i;
            return false;
        }
    }
    return true;
}

//define which1
void define_which1(int i)
{
    x_distance = abs(region[region[i].destination].x - region[i].x);
    y_distance = abs(region[region[i].destination].y - region[i].y);
    if(y_distance > x_distance && x_distance != 0){
        region[i].soldier_line_slope = y_distance / x_distance;
        fix_slope = (float)y_distance / (float)x_distance;
        if(fix_slope - (float)region[i].soldier_line_slope > 0.3)region[i].soldier_line_slope++;
        which1[i] = 1;
    }else if(y_distance != 0 && x_distance != 0){
        region[i].soldier_line_slope = x_distance / y_distance;
        fix_slope = (float)x_distance / (float)y_distance;
        if(fix_slope - (float)region[i].soldier_line_slope > 0.3)region[i].soldier_line_slope++;
        which1[i] = 2;
    }else if(y_distance == 0){
        which1[i] = 3;
    }else if(x_distance == 0){
        which1[i] = 4;
    }
}

//define which2
void define_which2(int i)
{
    if(region[region[i].destination].x >= region[i].x && region[region[i].destination].y >= region[i].y){
        which2[i] = 1;
    }else if(region[region[i].destination].x >= region[i].x && region[region[i].destination].y <= region[i].y){
        which2[i] = 2;
    }else if(region[region[i].destination].x <= region[i].x && region[region[i].destination].y <= region[i].y){
        which2[i] = 3;
    }else if(region[region[i].destination].x <= region[i].x && region[region[i].destination].y >= region[i].y){
        which2[i] = 4;
    }
}

//Creating and decreasing soldiers
void creating_AND_decreasing_soldiers()
{
    for(int i = 1; i < 25; i++)
    {
        if(region[i].attacking && region[i].soldiers > 0){
            region[i].soldiers--;
            region[i].counter++;
            region[i].soldier_x[region[i].counter] = region[i].x + 40;
            region[i].soldier_y[region[i].counter] = region[i].y + 40;
        }else if(region[i].soldiers <= 0){
            region[i].attacking = false;
        }
    }
}

//moving soldiers
void moving_soldiers()
{
    for(int i = 1; i < 25; i++)
    {
        if(region[i].attacking || region[i].check != region[i].counter){
            for(int j = region[i].starter; j <= region[i].counter; j++)
            {
                if(region[i].soldiers < 0)region[i].soldiers = 0;
                if(region[region[i].destination].soldiers < 0)region[region[i].destination].soldiers = 0;
                if (abs(region[i].soldier_x[j] - region[region[i].destination].x) < 80 &&
                    abs(region[i].soldier_y[j] - region[region[i].destination].y) < 80){
                    region[i].starter++;
                    region[i].check++;
                    region[i].soldier_x[j] = 1200;
                    region[i].soldier_y[j] = 1200;
                    if(!region[i].accident[j] && region[region[i].destination].ownership != region[i].ownership && !ownership_number[region[region[i].destination].ownership].all_ownership && !ownership_number[region[i].destination].shield){
                        if(region[region[i].destination].soldiers > 0  && !ownership_number[region[i].destination].shield){
                            region[region[i].destination].defending = true;
                            region[region[i].destination].soldiers -= ownership_number[region[i].ownership].action;
                        }else if(region[region[i].destination].soldiers <= 0 && !ownership_number[region[i].destination].shield){
                            region[region[i].destination].soldiers += ownership_number[region[i].ownership].action;
                            region[region[i].destination].ownership = region[i].ownership;
                        }
                    }else if (!region[i].accident[j]){
                        region[region[i].destination].soldiers += ownership_number[region[i].ownership].action;
                    }
                    if(region[i].check == region[i].counter){
                        region[region[i].destination].defending = false;
                    }
                    region[i].accident[j] = false;
                    continue;
                }
                if(ownership_number[region[i].ownership].timer > 350)
                {
                    ownership_number[region[i].ownership].spell = 0;
                    display_spell1 = true;
                    display_spell2 = true;
                }
                define_which1(i);
                define_which2(i);
                if(which1[i] == 1){
                    if(when % region[i].soldier_line_slope == 0){
                        if(which2[i] == 1 || which2[i] == 2)region[i].soldier_x[j]++;
                        else region[i].soldier_x[j]--;
                    }
                    if(which2[i] == 1 || which2[i] == 4)region[i].soldier_y[j]++;
                    else region[i].soldier_y[j]--;
                }else if(which1[i] == 2){
                    if(when % region[i].soldier_line_slope == 0){
                        if(which2[i] == 1 || which2[i] == 4)region[i].soldier_y[j]++;
                        else region[i].soldier_y[j]--;
                    }
                        if(which2[i] == 1 || which2[i] == 2)region[i].soldier_x[j]++;
                        else region[i].soldier_x[j]--;
                }else if(which1[i] == 3){
                        if(which2[i] == 1 || which2[i] == 2)region[i].soldier_x[j]++;
                        else region[i].soldier_x[j]--;
                }else if(which1[i] == 4){
                        if(which2[i] == 1 || which2[i] == 4)region[i].soldier_y[j]++;
                        else region[i].soldier_y[j]--;
                }
                if(region[i].accident[j] == true)continue;
                if(region[i].ownership == 0){
                    if(ownership_number[region[i].ownership].spell == 2) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF000000);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFF0070FF);
                    }else if(ownership_number[region[i].ownership].spell == 0 || ownership_number[region[i].ownership].spell == 5) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF000000);
                    }else if(ownership_number[region[i].ownership].spell == 1) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF0070FF);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFF000000);
                    }else if(ownership_number[region[i].ownership].spell == 3) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF000000);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFFFEA700);
                    }else if(ownership_number[region[i].ownership].spell == 4) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFEA700);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFF000000);
                    }
                }else if(region[i].ownership == 1){
                    if(ownership_number[region[i].ownership].spell == 2) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFF3397);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFF0070FF);
                    }else if(ownership_number[region[i].ownership].spell == 0 || ownership_number[region[i].ownership].spell == 5) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFF3397);
                    }else if(ownership_number[region[i].ownership].spell == 1) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF0070FF);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFFFF3397);
                    }else if(ownership_number[region[i].ownership].spell == 3) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFF3397);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFFFEA700);
                    }else if(ownership_number[region[i].ownership].spell == 4) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFEA700);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFFFF3397);
                    }
                }else if(region[i].ownership == 2){
                    if(ownership_number[region[i].ownership].spell == 2) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF33F6FF);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFF0070FF);
                    }else if(ownership_number[region[i].ownership].spell == 0 || ownership_number[region[i].ownership].spell == 5) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF33F6FF);
                    }else if(ownership_number[region[i].ownership].spell == 1) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF0070FF);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFF33F6FF);
                    }else if(ownership_number[region[i].ownership].spell == 3) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF33F6FF);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFFFEA700);
                    }else if(ownership_number[region[i].ownership].spell == 4) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFEA700);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFF33F6FF);
                    }
                }else if(region[i].ownership == 3){
                    if(ownership_number[region[i].ownership].spell == 2) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFF2100);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFF0070FF);
                    }else if(ownership_number[region[i].ownership].spell == 0 || ownership_number[region[i].ownership].spell == 5) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFF2100);
                    }else if(ownership_number[region[i].ownership].spell == 1) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF0070FF);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFFFF2100);
                    }else if(ownership_number[region[i].ownership].spell == 3) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFF2100);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFFFEA700);
                    }else if(ownership_number[region[i].ownership].spell == 4) {
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFFFEA700);
                        filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFFFF2100);
                    }
                }
                for(int p1 = 1; p1 < 21; p1++)
                {
                    //if(region[i].outside)
                    for(int p2 = 1; p2 < 750; p2++)
                    {
                        if(abs(region[i].soldier_x[j] - region[p1].soldier_x[p2]) < 16 && abs(region[i].soldier_y[j] - region[p1].soldier_y[p2]) < 16 &&
                           region[i].ownership != region[p1].ownership && !region[i].accident[j] && !region[p1].accident[p2])
                        {
                            region[i].accident[j] = true;
                            region[p1].accident[p2] = true;
                        }
                    }
                }
                for(int s = 1; s < 3; s++)
                {
                    if (region[i].soldier_x[j] <= spell_info[s].x + 60 && region[i].soldier_x[j] >= spell_info[s].x - 40 &&
                        region[i].soldier_y[j] <= spell_info[s].y + 60 && region[i].soldier_y[j] >= spell_info[s].y - 40 &&
                        !ownership_number[region[i].ownership].spell && spell_info[s].display){
                        ownership_number[region[i].ownership].timer = 0;
                        ownership_number[region[i].ownership].spell = spell_info[s].which;
                        spell_info[s].display = false;
                        if(s == 1)display_spell1 = false;
                        else display_spell2 = false;
                    }
                }
                checking_spells_actions(i , j);
            }
        }
    }
}
#endif

#ifndef __MAPS__DEF__
#define __MAPS__DEF__

#include "Base_Functions.h"
//#include "Other_Functions.h"
#include "types.h"

void Spell_maker1(int which);
void Spell_maker2(int which);
void spl(int which);

//coordination of spells
int x_range1;
int y_range1;
int x_range2;
int y_range2;

// spells texture for show in map
SDL_Texture* number_one = NULL;
SDL_Texture* number_two = NULL;

//maps
void Maps1()
{
    //Clear screen
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0x00, 0xFF );
    SDL_RenderClear( gRenderer );
    //coordination of shapes
    Sint16 x[10] = {0 , 120 , 165 , 0};
    Sint16 y[10] = {0 , 0 , 85 ,  160};
    //fill color
    if(region[1].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFF2DFF57);    /** light green **/
    else if ( region[1].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFA517FF);    /** pink **/
    else if ( region[1].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[1].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 4 ; i++) {
        if(i < 3)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 120;x[1] = 165;x[2] = 165;x[3] = 250;x[4] = 300;x[5] = 360;
    y[0] = 0;y[1] = 85;y[2] = 200;y[3] = 240;y[4] = 200;y[5] = 0;
    //fill color
    if(region[2].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[2].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[2].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[2].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 0;x[1] = 165;x[2] = 165;x[3] = 0;
    y[0] = 160;y[1] = 85;y[2] = 360;y[3] = 445;
    //fill color
    if(region[8].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFF2DFF57);    /** light green **/
    else if ( region[8].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFA517FF);    /** pink **/
    else if ( region[8].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[8].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 4; i++) {
        if(i < 3)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 165;x[1] = 250;x[2] = 350;x[3] = 300;x[4] = 165;
    y[0] = 85;y[1] = 240;y[2] = 320;y[3] = 360;y[4] = 360;
    //fill color
    if(region[9].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFF2DFF57);    /** light green **/
    else if ( region[9].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFFA517FF);    /** pink **/
    else if ( region[9].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[9].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 5; i++) {
        if(i < 4
                )SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 0;x[1] = 165;x[2] = 300;x[3] = 300;x[4] = 0;
    y[0] = 445;y[1] = 360;y[2] = 360;y[3] = 600;y[4] = 600;
    //fill color
    if(region[13].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFF2DFF57);    /** light green **/
    else if ( region[13].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFFA517FF);    /** pink **/
    else if ( region[13].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[13].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 5; i++) {
        if(i < 4)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 250;x[1] = 300;x[2] = 350;
    y[0] = 240;y[1] = 200;y[2] = 320;
    //fill color
    if(region[10].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFF2DFF57);    /** light green **/
    else if ( region[10].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFA517FF);    /** pink **/
    else if ( region[10].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[10].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 3; i++) {
        if(i < 2)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 360;x[1] = 440;x[2] = 400;x[3] = 460;x[4] = 460;x[5] = 360;x[6] = 350;x[7] = 300;
    y[0] = 0;y[1] = 60;y[2] = 90;y[3] = 140;y[4] = 200;y[5] = 200;y[6] = 320;y[7] = 200;
    //fill color
    if(region[3].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[3].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[3].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[3].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 360;x[1] = 580;x[2] = 580;x[3] = 460;x[4] = 460;x[5] = 400;x[6] = 440;
    y[0] = 0;y[1] = 0;y[2] = 250;y[3] = 200;y[4] = 140;y[5] = 90;y[6] = 60;
    //fill color
    if(region[4].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 7 , 0xFF2DFF57);    /** light green **/
    else if ( region[4].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 7 , 0xFFA517FF);    /** pink **/
    else if ( region[4].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 7 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[4].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 7 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 7; i++) {
        if(i < 6)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 300;x[1] = 300;x[2] = 350;x[3] = 580;x[4] = 580;
    y[0] = 600;y[1] = 360;y[2] = 320;y[3] = 250;y[4] = 600;
    //fill color
    if(region[14].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFF2DFF57);    /** light green **/
    else if ( region[14].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFFA517FF);    /** pink **/
    else if ( region[14].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[14].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 5 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 5; i++) {
        if(i < 4)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 350;x[1] = 580;x[2] = 460;x[3] = 360;
    y[0] = 320;y[1] = 250;y[2] = 200;y[3] = 200;
    //fill color
    if(region[11].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFF2DFF57);    /** light green **/
    else if ( region[11].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFA517FF);    /** pink **/
    else if ( region[11].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[11].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 4; i++) {
        if(i < 3)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 580;x[1] = 730;x[2] = 730;x[3] = 580;
    y[0] = 0;y[1] = 0;y[2] = 150;y[3] = 150;
    //fill color
    if(region[5].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFF2DFF57);    /** light green **/
    else if ( region[5].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFA517FF);    /** pink **/
    else if ( region[5].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[5].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 4; i++) {
        if(i < 3)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 800;x[1] = 950;x[2] = 950;x[3] = 800;
    y[0] = 0;y[1] = 0;y[2] = 150;y[3] = 150;
    //fill color
    if(region[7].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFF2DFF57);    /** light green **/
    else if ( region[7].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFA517FF);    /** pink **/
    else if ( region[7].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[7].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 4 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 4; i++) {
        if(i < 3)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 730;x[1] = 730;x[2] = 580;x[3] = 580;x[4] = 950;x[5] = 950;x[6] = 800;x[7] = 800;
    y[0] = 0;y[1] = 150;y[2] = 150;y[3] = 220;y[4] = 220;y[5] = 150;y[6] = 150;y[7] = 0;
    //fill color
    if(region[6].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[6].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[6].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[6].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 580;x[1] = 765;x[2] = 950;
    y[0] = 220;y[1] = 410;y[2] = 220;
    //fill color
    if(region[12].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFF2DFF57);    /** light green **/
    else if ( region[12].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFA517FF);    /** pink **/
    else if ( region[12].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[12].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 3; i++) {
        if(i < 2)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 580;x[1] = 765;x[2] = 580;
    y[0] = 220;y[1] = 410;y[2] = 600;
    //fill color
    if(region[15].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFF2DFF57);    /** light green **/
    else if ( region[15].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFA517FF);    /** pink **/
    else if ( region[15].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[15].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 3; i++) {
        if(i < 2)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 580;x[1] = 765;x[2] = 950;
    y[0] = 600;y[1] = 410;y[2] = 600;
    //fill color
    if(region[17].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFF2DFF57);    /** light green **/
    else if ( region[17].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFA517FF);    /** pink **/
    else if ( region[17].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[17].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 3; i++) {
        if(i < 2)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 950;x[1] = 765;x[2] = 950;
    y[0] = 600;y[1] = 410;y[2] = 220;
    //fill color
    if(region[16].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFF2DFF57);    /** light green **/
    else if ( region[16].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFA517FF);    /** pink **/
    else if ( region[16].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[16].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 3 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 3; i++) {
        if(i < 2)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    char num[4];
    SDL_Rect DestR;

    DestR.x = 350; // ** 1 ** //
    DestR.y = 100;
    DestR.w = 65; region[3].x = DestR.x;
    DestR.h = 65; region[3].y = DestR.y;
    if ( region[3].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 325 , 175 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[3].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 325 , 175 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[3].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 325 , 175 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[3].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 335 , 175 , "ZAMIN BISAHAB" , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[3].ownership].spell == 4){
        DestR.x = 330;
        DestR.y = 80;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[3].ownership].spell == 3){
        DestR.x = 330;
        DestR.y = 80;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[3].ownership].spell == 5){
        DestR.x = 330;
        DestR.y = 80;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[3].soldiers);
    num[1] = int_to_string2(region[3].soldiers);
    num[2] = int_to_string1(region[3].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 380 , 185 , num , 0x00 , 0x00 , 0x00 , 0xFF);


    DestR.x = 735; // ** 2 ** //
    DestR.y = 125;
    DestR.w = 65; region[6].x = DestR.x;
    DestR.h = 65; region[6].y = DestR.y;
    if ( region[6].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 200 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[6].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 200 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[6].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 200 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[6].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 715 , 200 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[6].ownership].spell == 4){
        DestR.x = 715;
        DestR.y = 105;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[6].ownership].spell == 3){
        DestR.x = 715;
        DestR.y = 105;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[6].ownership].spell == 5){
        DestR.x = 715;
        DestR.y = 105;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[6].soldiers);
    num[1] = int_to_string2(region[6].soldiers);
    num[2] = int_to_string1(region[6].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 760 , 210 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 420; // ** 3 ** //
    DestR.y = 420;
    DestR.w = 65; region[14].x = DestR.x;
    DestR.h = 65; region[14].y = DestR.y;
    if ( region[14].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 395 , 500 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[14].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 395 , 500 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[14].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 395 , 500 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[14].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 405 , 500 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[14].ownership].spell == 4){
        DestR.x = 400;
        DestR.y = 400;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[14].ownership].spell == 3){
        DestR.x = 400;
        DestR.y = 400;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[14].ownership].spell == 5){
        DestR.x = 400;
        DestR.y = 400;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[14].soldiers);
    num[1] = int_to_string2(region[14].soldiers);
    num[2] = int_to_string1(region[14].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 450 , 510 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 860; // ** 4 ** //
    DestR.y = 380;
    DestR.w = 65; region[16].x = DestR.x;
    DestR.h = 65; region[16].y = DestR.y;
    if ( region[16].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 832 , 460 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[16].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 832 , 460 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[16].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 832 , 460 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[16].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 842 , 460 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[16].ownership].spell == 4){
        DestR.x = 840;
        DestR.y = 360;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[16].ownership].spell == 3){
        DestR.x = 840;
        DestR.y = 360;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[16].ownership].spell == 5){
        DestR.x = 840;
        DestR.y = 360;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[16].soldiers);
    num[1] = int_to_string2(region[16].soldiers);
    num[2] = int_to_string1(region[16].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 887 , 470 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 45; // !! 1 !! //
    DestR.y = 225;
    DestR.w = 65; region[8].x = DestR.x;
    DestR.h = 65; region[8].y = DestR.y;
    if ( region[8].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 18 , 300 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[8].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 18 , 300 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[8].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 18 , 300 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[8].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 28 , 300 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[8].ownership].spell == 4){
        DestR.x = 25;
        DestR.y = 205;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[8].ownership].spell == 3){
        DestR.x = 25;
        DestR.y = 205;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[8].ownership].spell == 5){
        DestR.x = 25;
        DestR.y = 205;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[8].soldiers);
    num[1] = int_to_string2(region[8].soldiers);
    num[2] = int_to_string1(region[8].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 70 , 310 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 268; // !! 2 !! //
    DestR.y = 220;
    DestR.w = 65; region[10].x = DestR.x;
    DestR.h = 65; region[10].y = DestR.y;
    if ( region[10].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 255 , 285 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[10].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 255 , 285 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[10].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 255 , 285 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[10].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 265 , 285 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[10].ownership].spell == 4){
        DestR.x = 248;
        DestR.y = 200;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[10].ownership].spell == 3){
        DestR.x = 248;
        DestR.y = 200;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[10].ownership].spell == 5){
        DestR.x = 248;
        DestR.y = 200;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[10].soldiers);
    num[1] = int_to_string2(region[10].soldiers);
    num[2] = int_to_string1(region[10].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 307 , 295 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 398; // !! 3 !! //
    DestR.y = 216;
    DestR.w = 65; region[11].x = DestR.x;
    DestR.h = 65; region[11].y = DestR.y;
    if ( region[11].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 370 , 285 , "ZAMIN KHAR PAST" ,0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[11].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 370 , 285 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[11].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 370 , 285 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[11].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 380 , 285 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[11].ownership].spell == 4){
        DestR.x = 378;
        DestR.y = 196;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[11].ownership].spell == 3){
        DestR.x = 378;
        DestR.y = 196;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[11].ownership].spell == 5){
        DestR.x = 378;
        DestR.y = 196;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[11].soldiers);
    num[1] = int_to_string2(region[11].soldiers);
    num[2] = int_to_string1(region[11].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 422 , 295 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 728; // !! 4 !! //
    DestR.y = 490;
    DestR.w = 65; region[17].x = DestR.x;
    DestR.h = 65; region[17].y = DestR.y;
    if ( region[17].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 702 , 560 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[17].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 702 , 560 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[17].ownership == 0) {
        SDL_RenderCopy(gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer, 702 , 560, name, 0x00, 0x00, 0x00, 0xFF); // ** 1 ** //
    }
    else if ( region[17].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 712 , 560 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[17].ownership].spell == 4){
        DestR.x = 708;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[17].ownership].spell == 3){
        DestR.x = 708;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[17].ownership].spell == 5){
        DestR.x = 708;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[17].soldiers);
    num[1] = int_to_string2(region[17].soldiers);
    num[2] = int_to_string1(region[17].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 754 , 570 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 35; // @@ 1 @@ //
    DestR.y = 35;
    DestR.w = 65; region[1].x = DestR.x;
    DestR.h = 65; region[1].y = DestR.y;
    if ( region[1].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 3 , 105 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[1].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 3 , 105 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[1].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 3 , 105 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[1].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 13 , 105 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[1].ownership].spell == 4){
        DestR.x = 15;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[1].ownership].spell == 3){
        DestR.x = 15;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[1].ownership].spell == 5){
        DestR.x = 15;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[1].soldiers);
    num[1] = int_to_string2(region[1].soldiers);
    num[2] = int_to_string1(region[1].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 55 , 115 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 490; // @@ 2 @@ //
    DestR.y = 60;
    DestR.w = 65; region[4].x = DestR.x;
    DestR.h = 65; region[4].y = DestR.y;
    if ( region[4].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 465 , 130 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[4].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 465 , 130 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[4].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 465 , 130 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[4].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 475 , 130 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[4].ownership].spell == 4){
        DestR.x = 470;
        DestR.y = 40;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[4].ownership].spell == 3){
        DestR.x = 470;
        DestR.y = 40;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[4].ownership].spell == 5){
        DestR.x = 470;
        DestR.y = 40;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[4].soldiers);
    num[1] = int_to_string2(region[4].soldiers);
    num[2] = int_to_string1(region[4].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 517 , 140 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 190; // @@ 3 @@ //
    DestR.y = 252;
    DestR.w = 65; region[9].x = DestR.x;
    DestR.h = 65; region[9].y = DestR.y;
    if ( region[9].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 165 , 320 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[9].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 165 , 320 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[9].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 165 , 320 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[9].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 175 , 320 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[9].ownership].spell == 4){
        DestR.x = 170;
        DestR.y = 232;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[9].ownership].spell == 3){
        DestR.x = 170;
        DestR.y = 232;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[9].ownership].spell == 5){
        DestR.x = 170;
        DestR.y = 232;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[9].soldiers);
    num[1] = int_to_string2(region[9].soldiers);
    num[2] = int_to_string1(region[9].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 217 , 330 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 728; // @@ 4 @@ //
    DestR.y = 252;
    DestR.w = 65; region[12].x = DestR.x;
    DestR.h = 65; region[12].y = DestR.y;
    if ( region[12].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 702 , 320 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[12].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 702 , 320 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[12].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 702 , 320 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[12].ownership == 4) {
        SDL_RenderCopy(gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer, 712, 320, "ZAMIN BISAHAB", 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[12].ownership].spell == 4){
        DestR.x = 708;
        DestR.y = 232;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[12].ownership].spell == 3){
        DestR.x = 708;
        DestR.y = 232;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[12].ownership].spell == 5){
        DestR.x = 708;
        DestR.y = 232;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[12].soldiers);
    num[1] = int_to_string2(region[12].soldiers);
    num[2] = int_to_string1(region[12].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 754 , 330 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 215; // $$ 1 $$ //
    DestR.y = 35;
    DestR.w = 65; region[2].x = DestR.x;
    DestR.h = 65; region[2].y = DestR.y;
    if ( region[2].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 175 , 100 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[2].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 175 , 100 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[2].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 175 , 100 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[2].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 185 , 100 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[2].ownership].spell == 4){
        DestR.x = 195;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[2].ownership].spell == 3){
        DestR.x = 195;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[2].ownership].spell == 5){
        DestR.x = 195;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[2].soldiers);
    num[1] = int_to_string2(region[2].soldiers);
    num[2] = int_to_string1(region[2].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 235 , 110 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 620; // $$ 2 $$ //
    DestR.y = 35;
    DestR.w = 65; region[5].x = DestR.x;
    DestR.h = 65; region[5].y = DestR.y;
    if ( region[5].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 585 , 100 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[5].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 585 , 100 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[5].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 585 , 100 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[5].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 595 , 100 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[5].ownership].spell == 4){
        DestR.x = 600;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[5].ownership].spell == 3){
        DestR.x = 600;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[5].ownership].spell == 5){
        DestR.x = 600;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[5].soldiers);
    num[1] = int_to_string2(region[5].soldiers);
    num[2] = int_to_string1(region[5].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 645 , 110 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 840; // $$ 3 $$ //
    DestR.y = 35;
    DestR.w = 65; region[7].x = DestR.x;
    DestR.h = 65; region[7].y = DestR.y;
    if ( region[7].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 800 , 100 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[7].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 800 , 100 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[7].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 800 , 100 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[7].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 810 , 100 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[7].ownership].spell == 4){
        DestR.x = 820;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[7].ownership].spell == 3){
        DestR.x = 820;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[7].ownership].spell == 5){
        DestR.x = 820;
        DestR.y = 15;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[7].soldiers);
    num[1] = int_to_string2(region[7].soldiers);
    num[2] = int_to_string1(region[7].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 860 , 110 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 115; // $$ 4 $$ //
    DestR.y = 440;
    DestR.w = 65; region[13].x = DestR.x;
    DestR.h = 65; region[13].y = DestR.y;
    if ( region[13].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 75 , 510 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[13].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 75 , 510 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[13].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 75 , 510 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[13].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 85 , 510 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[13].ownership].spell == 4){
        DestR.x = 95;
        DestR.y = 420;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[13].ownership].spell == 3){
        DestR.x = 95;
        DestR.y = 420;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[13].ownership].spell == 5){
        DestR.x = 95;
        DestR.y = 420;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[13].soldiers);
    num[1] = int_to_string2(region[13].soldiers);
    num[2] = int_to_string1(region[13].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 135 , 520 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 620; // $$ 5 $$ //
    DestR.y = 360;
    DestR.w = 65; region[15].x = DestR.x;
    DestR.h = 65; region[15].y = DestR.y;
    if ( region[15].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 580 , 425 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[15].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 580 , 425 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }
    else if ( region[15].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 580 , 425 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    else if ( region[15].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 590 , 425 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[15].ownership].spell == 4){
        DestR.x = 600;
        DestR.y = 340;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[15].ownership].spell == 3){
        DestR.x = 600;
        DestR.y = 340;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[15].ownership].spell == 5){
        DestR.x = 600;
        DestR.y = 340;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[15].soldiers);
    num[1] = int_to_string2(region[15].soldiers);
    num[2] = int_to_string1(region[15].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 640 , 435 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    if(when %  499  == 0 || when == 100)
    {
        spell_info[1].display = true;
        Spell_maker1(1);
        spell_info[2].display = true;
        Spell_maker2(1);
    }
    DestR.x = x_range1; spell_info[1].x = DestR.x;
    DestR.y = y_range1; spell_info[1].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if ( display_spell1 )SDL_RenderCopy( gRenderer, number_one, NULL, &DestR);
    DestR.x = x_range2; spell_info[2].x = DestR.x;
    DestR.y = y_range2; spell_info[2].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if ( display_spell2 )SDL_RenderCopy( gRenderer, number_two, NULL, &DestR);
}
void Maps2()
{
    //Clear screen
    SDL_SetRenderDrawColor( gRenderer, 0xF0, 0xD5, 0xD5, 0xFF );
    SDL_RenderClear( gRenderer );
    //coordination of shapes
    Sint16 x[10] = {25 , 65 , 115 , 155 , 155 , 115 , 65 , 25};
    Sint16 y[10] = {40 , 10  , 10  , 40  , 90 , 120 , 120 , 90};
    //fill color
    if(region[1].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[1].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[1].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[1].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[1].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 800;x[1] = 840;x[2] = 890;x[3] = 930;x[4] = 930;x[5] = 890;x[6] = 840;x[7] = 800;
    y[0] = 40;y[1] = 10;y[2] = 10;y[3] = 40;y[4] = 90;y[5] = 120;y[6] = 120;y[7] = 90;
    //fill color
    if(region[3].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[3].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[3].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[3].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[3].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 412;x[1] = 452;x[2] = 502;x[3] = 542;x[4] = 542;x[5] = 502;x[6] = 452;x[7] = 412;
    y[0] = 40;y[1] = 10;y[2] = 10;y[3] = 40;y[4] = 90;y[5] = 120;y[6] = 120;y[7] = 90;
    //fill color
    if(region[2].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[2].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[2].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[2].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[2].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 25;x[1] = 65;x[2] = 115;x[3] = 155;x[4] = 155;x[5] = 115;x[6] = 65;x[7] = 25;
    y[0] = 510;y[1] = 480;y[2] = 480;y[3] = 510;y[4] = 560;y[5] = 590;y[6] = 590;y[7] = 560;
    //fill color
    if(region[9].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[9].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[9].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[9].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[9].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 25;x[1] = 65;x[2] = 115;x[3] = 155;x[4] = 155;x[5] = 115;x[6] = 65;x[7] = 25;
    y[0] = 275;y[1] = 245;y[2] = 245;y[3] = 275;y[4] = 325;y[5] = 355;y[6] = 355;y[7] = 325;
    //fill color
    if(region[4].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[4].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[4].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[4].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[4].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 800;x[1] = 840;x[2] = 890;x[3] = 930;x[4] = 930;x[5] = 890;x[6] = 840;x[7] = 800;
    y[0] = 275;y[1] = 245;y[2] = 245;y[3] = 275;y[4] = 325;y[5] = 355;y[6] = 355;y[7] = 325;
    //fill color
    if(region[8].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[8].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[8].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[8].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[8].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 800;x[1] = 840;x[2] = 890;x[3] = 930;x[4] = 930;x[5] = 890;x[6] = 840;x[7] = 800;
    y[0] = 510;y[1] = 480;y[2] = 480;y[3] = 510;y[4] = 560;y[5] = 590;y[6] = 590;y[7] = 560;
    //fill color
    if(region[11].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[11].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[11].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[11].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[11].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 412;x[1] = 452;x[2] = 502;x[3] = 542;x[4] = 542;x[5] = 502;x[6] = 452;x[7] = 412;
    y[0] = 510;y[1] = 480;y[2] = 480;y[3] = 510;y[4] = 560;y[5] = 590;y[6] = 590;y[7] = 560;
    //fill color
    if(region[10].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[10].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[10].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[10].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[10].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 475;x[1] = 475;x[2] = 423;x[3] = 371;x[4] = 371;x[5] = 423;
    y[0] = 300;y[1] = 240;y[2] = 210;y[3] = 240;y[4] = 300;y[5] = 330;
    //fill color
    if(region[5].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[5].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[5].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[5].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[5].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 475;x[1] = 475;x[2] = 527;x[3] = 579;x[4] = 579;x[5] = 527;
    y[0] = 300;y[1] = 240;y[2] = 210;y[3] = 240;y[4] = 300;y[5] = 330;
    //fill color
    if(region[6].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[6].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[6].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[6].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[6].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 527;x[1] = 527;x[2] = 475;x[3] = 423;x[4] = 423;x[5] = 475;
    y[0] = 330;y[1] = 390;y[2] = 420;y[3] = 390;y[4] = 330;y[5] = 300;
    //fill color
    if(region[7].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[7].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[7].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[7].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[7].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    char num[4];
    SDL_Rect DestR;

    DestR.x = 438; // ** 1 ** //
    DestR.y = 22;
    DestR.w = 65; region[2].x = DestR.x;
    DestR.h = 65; region[2].y = DestR.y;
    if ( region[2].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 415 , 100 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 415 , 100 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 415 , 100 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 425 , 100 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 415 , 100 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[2].ownership].spell == 4){
        DestR.x = 418;
        DestR.y = 2;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[2].ownership].spell == 3){
        DestR.x = 418;
        DestR.y = 2;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[2].ownership].spell == 5){
        DestR.x = 418;
        DestR.y = 2;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[2].soldiers);
    num[1] = int_to_string2(region[2].soldiers);
    num[2] = int_to_string1(region[2].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 465 , 110 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 438; // ** 2 ** //
    DestR.y = 498;
    DestR.w = 65; region[10].x = DestR.x;
    DestR.h = 65; region[10].y = DestR.y;
    if ( region[10].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 410 , 570 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 410 , 570 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 410 , 570 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 420 , 570 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 410 , 570 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[10].ownership].spell == 4){
        DestR.x = 418;
        DestR.y = 478;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[10].ownership].spell == 3){
        DestR.x = 418;
        DestR.y = 478;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[10].ownership].spell == 5){
        DestR.x = 418;
        DestR.y = 478;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[10].soldiers);
    num[1] = int_to_string2(region[10].soldiers);
    num[2] = int_to_string1(region[10].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 465 , 580 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 835; // !! 1 !! //
    DestR.y = 30;
    DestR.w = 65; region[3].x = DestR.x;
    DestR.h = 65; region[3].y = DestR.y;
    if ( region[3].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 100 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 100 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 100 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 815 , 100 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 100 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[3].ownership].spell == 4){
        DestR.x = 815;
        DestR.y = 10;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[3].ownership].spell == 3){
        DestR.x = 815;
        DestR.y = 10;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[3].ownership].spell == 5){
        DestR.x = 815;
        DestR.y = 10;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[3].soldiers);
    num[1] = int_to_string2(region[3].soldiers);
    num[2] = int_to_string1(region[3].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 857 , 110 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 57; // !! 2 !! //
    DestR.y = 498;
    DestR.w = 65; region[9].x = DestR.x;
    DestR.h = 65; region[9].y = DestR.y;
    if ( region[9].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 30 , 570 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 30 , 570 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 30 , 570 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 40 , 570 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 30 , 570 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[9].ownership].spell == 4){
        DestR.x = 37;
        DestR.y = 478;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[9].ownership].spell == 3){
        DestR.x = 37;
        DestR.y = 478;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[9].ownership].spell == 5){
        DestR.x = 37;
        DestR.y = 478;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[9].soldiers);
    num[1] = int_to_string2(region[9].soldiers);
    num[2] = int_to_string1(region[9].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 82 , 580 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 57; // @@ 1 @@ //
    DestR.y = 30;
    DestR.w = 65; region[1].x = DestR.x;
    DestR.h = 65; region[1].y = DestR.y;
    if ( region[1].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 30 , 100 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 30 , 100 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 30 , 100 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 40 , 100 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 30 , 100 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[1].ownership].spell == 4){
        DestR.x = 37;
        DestR.y = 10;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[1].ownership].spell == 3){
        DestR.x = 37;
        DestR.y = 10;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[1].ownership].spell == 5){
        DestR.x = 37;
        DestR.y = 10;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[1].soldiers);
    num[1] = int_to_string2(region[1].soldiers);
    num[2] = int_to_string1(region[1].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 82 , 110 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 835; // @@ 2 @@ //
    DestR.y = 498;
    DestR.w = 65; region[11].x = DestR.x;
    DestR.h = 65; region[11].y = DestR.y;
    if ( region[11].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 570 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 570 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 570 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 815 , 570 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 570 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[11].ownership].spell == 4){
        DestR.x = 815;
        DestR.y = 478;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[11].ownership].spell == 3){
        DestR.x = 815;
        DestR.y = 478;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[11].ownership].spell == 5){
        DestR.x = 815;
        DestR.y = 478;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[11].soldiers);
    num[1] = int_to_string2(region[11].soldiers);
    num[2] = int_to_string1(region[11].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 857 , 580 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 57; // ## 1 ## //
    DestR.y = 265;
    DestR.w = 65; region[4].x = DestR.x;
    DestR.h = 65; region[4].y = DestR.y;
    if ( region[4].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 45 , 335 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 45 , 335 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 45 , 335 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 55 , 335 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 45 , 335 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[4].ownership].spell == 4){
        DestR.x = 37;
        DestR.y = 245;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[4].ownership].spell == 3){
        DestR.x = 37;
        DestR.y = 245;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[4].ownership].spell == 5){
        DestR.x = 37;
        DestR.y = 245;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[4].soldiers);
    num[1] = int_to_string2(region[4].soldiers);
    num[2] = int_to_string1(region[4].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 82 , 345 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 835; // ## 2 ## //
    DestR.y = 265;
    DestR.w = 65; region[8].x = DestR.x;
    DestR.h = 65; region[8].y = DestR.y;
    if ( region[8].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 820 , 335 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 820 , 335 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 820 , 335 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 830 , 335 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 820 , 335 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[8].ownership].spell == 4){
        DestR.x = 815;
        DestR.y = 245;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[8].ownership].spell == 3){
        DestR.x = 815;
        DestR.y = 245;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[8].ownership].spell == 5){
        DestR.x = 815;
        DestR.y = 245;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[8].soldiers);
    num[1] = int_to_string2(region[8].soldiers);
    num[2] = int_to_string1(region[8].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 857 , 345 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 390; // $$ 1 $$ //
    DestR.y = 237;
    DestR.w = 65; region[5].x = DestR.x;
    DestR.h = 65; region[5].y = DestR.y;
    if ( region[5].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 355 , 307 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 355 , 307 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 355 , 307 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 365 , 307 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 355 , 307 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[5].ownership].spell == 4){
        DestR.x = 370;
        DestR.y = 217;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[5].ownership].spell == 3){
        DestR.x = 370;
        DestR.y = 217;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[5].ownership].spell == 5){
        DestR.x = 370;
        DestR.y = 217;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[5].soldiers);
    num[1] = int_to_string2(region[5].soldiers);
    num[2] = int_to_string1(region[5].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 415 , 317 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 493; // $$ 2 $$ //
    DestR.y = 237;
    DestR.w = 65; region[6].x = DestR.x;
    DestR.h = 65; region[6].y = DestR.y;
    if ( region[6].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 458 , 307 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 458 , 307 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 458 , 307 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 468 , 307 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 458 , 307 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[6].ownership].spell == 4){
        DestR.x = 473;
        DestR.y = 217;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[6].ownership].spell == 3){
        DestR.x = 473;
        DestR.y = 217;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[6].ownership].spell == 5){
        DestR.x = 473;
        DestR.y = 217;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[6].soldiers);
    num[1] = int_to_string2(region[6].soldiers);
    num[2] = int_to_string1(region[6].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 518 , 317 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 442; // $$ 3 $$ //
    DestR.y = 321;
    DestR.w = 65; region[7].x = DestR.x;
    DestR.h = 65; region[7].y = DestR.y;
    if ( region[7].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 408 , 391 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 408 , 391 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 408 , 391 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 418 , 391 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 408 , 391 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[7].ownership].spell == 4){
        DestR.x = 422;
        DestR.y = 301;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[7].ownership].spell == 3){
        DestR.x = 422;
        DestR.y = 301;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[7].ownership].spell == 5){
        DestR.x = 422;
        DestR.y = 301;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[7].soldiers);
    num[1] = int_to_string2(region[7].soldiers);
    num[2] = int_to_string1(region[7].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 468 , 401 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    if(when % 499 == 0 || when == 100)
    {
        spell_info[1].display = true;
        Spell_maker1(1);
        spell_info[2].display = true;
        Spell_maker2(1);
    }
    DestR.x = x_range1; spell_info[1].x = DestR.x;
    DestR.y = y_range1; spell_info[1].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if( display_spell1 )SDL_RenderCopy( gRenderer, number_one, NULL, &DestR);
    DestR.x = x_range2; spell_info[2].x = DestR.x;
    DestR.y = y_range2; spell_info[2].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if ( display_spell2 )SDL_RenderCopy( gRenderer, number_two, NULL, &DestR);
}
void Maps3()
{
    //Clear screen
    SDL_SetRenderDrawColor( gRenderer, 0xF0, 0xD5, 0xD5, 0xFF );
    SDL_RenderClear( gRenderer );
    //coordination of shapes
    Sint16 x[20] = {0 , 160 , 160 , 190 , 190 , 160 , 160 , 95  , 95  , 55  , 55  , 0};
    Sint16 y[20] = {0 , 0   , 85  , 85  , 120 , 120 , 180 , 180 , 150 , 150 , 180 , 180};
    //fill color
    if(region[1].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 12 , 0xFF2DFF57);    /** light green **/
    else if ( region[1].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 12 , 0xFFA517FF);    /** pink **/
    else if ( region[1].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 12 , 0xFF713641);    /** dark blue **/
    else if ( region[1].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 12 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[1].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 12 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 12 ; i++) {
        if(i < 11)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 325;x[1] = 500;x[2] = 500;x[3] = 450;x[4] = 450;x[5] = 500;x[6] = 500;x[7] = 400;x[8] = 400;x[9] = 360;x[10] = 370;x[11] = 325;x[12] = 325; x[13] = 290;x[14] = 325;
    y[0] = 0;  y[1] = 0;  y[2] = 60; y[3] = 60; y[4] = 100;y[5] = 100;y[6] = 180;y[7] = 180;y[8] = 145;y[9] = 145;y[10] = 180;y[11] = 180;y[12] = 140; y[13] = 115; y[14] = 100;
    //fill color
    if(region[2].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFF2DFF57);    /** light green **/
    else if ( region[2].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFFA517FF);    /** pink **/
    else if ( region[2].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFF713641);    /** dark blue **/
    else if ( region[2].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[2].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 15 ; i++) {
        if(i < 14)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 725;x[1] = 950;x[2] = 950;x[3] = 900;x[4] = 850;x[5] = 780;x[6] = 725;
    y[0] = 0;  y[1] = 0;  y[2] = 180;y[3] = 170;y[4] = 180;y[5] = 170;y[6] = 180;
    //fill color
    if(region[3].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 7 , 0xFF2DFF57);    /** light green **/
    else if ( region[3].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 7 , 0xFFA517FF);    /** pink **/
    else if ( region[3].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 7 , 0xFF713641);    /** dark blue **/
    else if ( region[3].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 7 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[3].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 7 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 7 ; i++) {
        if(i < 6)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 160;x[1] = 210;x[2] = 210;x[3] = 245;x[4] = 245;x[5] = 325;x[6] = 325;x[7] = 280;x[8] = 325;x[9] = 325;x[10] = 290;x[11] = 230;x[12] = 170;x[13] = 160; x[14] = 160;x[15] = 120; x[16] = 100; x[17] = 120; x[18] = 160;
    y[0] = 180;y[1] = 180;y[2] = 140;y[3] = 140;y[4] = 180;y[5] = 180;y[6] = 210;y[7] = 210;y[8] = 260;y[9] = 410;y[10] = 410;y[11] = 398;y[12] = 410;y[13] = 410; y[14] = 275;y[15] = 275; y[16] = 250; y[17] = 225; y[18] = 225;
    //fill color
    if(region[4].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 19 , 0xFF2DFF57);    /** light green **/
    else if ( region[4].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 19 , 0xFFA517FF);    /** pink **/
    else if ( region[4].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 19 , 0xFF713641);    /** dark blue **/
    else if ( region[4].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 19 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[4].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 19 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 19 ; i++) {
        if(i < 18)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 325;x[1] = 370;x[2] = 360;x[3] = 400;x[4] = 400;x[5] = 500;x[6] = 500;x[7] = 440;x[8] = 440;x[9] = 420;x[10] = 420;x[11] = 500;x[12] = 500; x[13] = 450;x[14] = 465;x[15] = 410;x[16] = 325; x[17] = 325;x[18] = 260;x[19] = 325;
    y[0] = 180;y[1] = 180;y[2] = 145;y[3] = 145;y[4] = 180;y[5] = 180;y[6] = 310;y[7] = 310;y[8] = 290;y[9] = 290;y[10] = 360;y[11] = 360;y[12] = 410; y[13] = 410;y[14] = 390;y[15] = 410;y[16] = 410; y[17] = 280;y[18] = 210;y[19] = 210;
    //fill color
    if(region[5].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 20 , 0xFF2DFF57);    /** light green **/
    else if ( region[5].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 20 , 0xFFA517FF);    /** pink **/
    else if ( region[5].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 20 , 0xFF713641);    /** dark blue **/
    else if ( region[5].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 20 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[5].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 20 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 20 ; i++) {
        if(i < 19)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 500;x[1] = 600;x[2] = 625;x[3] = 725;x[4] = 725;x[5] = 750;x[6] = 750;x[7] = 725;x[8] = 725;x[9] = 600;x[10] = 600;x[11] = 500;x[12] = 500;x[13] = 420;x[14] = 420;x[15] = 440;x[16] = 440;x[17] = 500;
    y[0] = 180;y[1] = 180;y[2] = 150;y[3] = 180;y[4] = 350;y[5] = 350;y[6] = 370;y[7] = 370;y[8] = 410;y[9] = 385;y[10] = 410;y[11] = 410;y[12] = 360;y[13] = 360;y[14] = 290;y[15] = 290;y[16] = 310;y[17] = 310;
    //fill color
    if(region[6].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 18 , 0xFF2DFF57);    /** light green **/
    else if ( region[6].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 18 , 0xFFA517FF);    /** pink **/
    else if ( region[6].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 18 , 0xFF713641);    /** dark blue **/
    else if ( region[6].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 18 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[6].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 18 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 18 ; i++) {
        if(i < 17)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 0;  x[1] = 25; x[2] = 40; x[3] = 85; x[4] = 115;x[5] = 145;x[6] = 160;x[7] = 160;x[8] = 220;x[9] = 160;x[10] = 200;x[11] = 160;x[12] = 0;
    y[0] = 410;y[1] = 410;y[2] = 430;y[3] = 422;y[4] = 435;y[5] = 410;y[6] = 410;y[7] = 500;y[8] = 550;y[9] = 560;y[10] = 580;y[11] = 600;y[12] = 600;
    //fill color
    if(region[7].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 13 , 0xFF2DFF57);    /** light green **/
    else if ( region[7].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 13 , 0xFFA517FF);    /** pink **/
    else if ( region[7].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 13 , 0xFF713641);    /** dark blue **/
    else if ( region[7].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 13 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[7].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 13 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 13 ; i++) {
        if(i < 12)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 325;x[1] = 410;x[2] = 465;x[3] = 450;x[4] = 500;x[5] = 500;x[6] = 470;x[7] = 500;x[8] = 500;x[9] = 325;x[10] = 280;x[11] = 325;x[12] = 295; x[13] = 325;x[14] = 310;
    y[0] = 410;y[1] = 410;y[2] = 390;y[3] = 410;y[4] = 410;y[5] = 505;y[6] = 535;y[7] = 565;y[8] = 600;y[9] = 600;y[10] = 565;y[11] = 530;y[12] = 490; y[13] = 450; y[14] = 430;
    //fill color
    if(region[8].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFF2DFF57);    /** light green **/
    else if ( region[8].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFFA517FF);    /** pink **/
    else if ( region[8].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFF713641);    /** dark blue **/
    else if ( region[8].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[8].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 15 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 15 ; i++) {
        if(i < 14)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 725;x[1] = 760;x[2] = 790;x[3] = 820;x[4] = 890;x[5] = 920;x[6] = 950;x[7] = 950;x[8] = 725;x[9] = 715;x[10] = 725;
    y[0] = 410;y[1] = 410;y[2] = 330;y[3] = 410;y[4] = 410;y[5] = 330;y[6] = 410;y[7] = 600;y[8] = 600;y[9] = 505;y[10] = 410;
    //fill color
    if(region[9].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 11 , 0xFF2DFF57);    /** light green **/
    else if ( region[9].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 11 , 0xFFA517FF);    /** pink **/
    else if ( region[9].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 11 , 0xFF713641);    /** dark blue **/
    else if ( region[9].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 11 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[9].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 11 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 11 ; i++) {
        if(i < 10)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    char num[4];
    SDL_Rect DestR;

    DestR.x = 360; // ** 1 ** //
    DestR.y = 210;
    DestR.w = 65; region[5].x = DestR.x;
    DestR.h = 65; region[5].y = DestR.y;
    if ( region[5].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 335 , 290 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 335 , 290 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 335 , 290 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 290 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 335 , 290 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[5].ownership].spell == 4){
        DestR.x = 340;
        DestR.y = 190;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[5].ownership].spell == 3){
        DestR.x = 340;
        DestR.y = 190;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[5].ownership].spell == 5){
        DestR.x = 340;
        DestR.y = 190;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[5].soldiers);
    num[1] = int_to_string2(region[5].soldiers);
    num[2] = int_to_string1(region[5].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 390 , 300 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 206; // !! 1 !! //
    DestR.y = 265;
    DestR.w = 65; region[4].x = DestR.x;
    DestR.h = 65; region[4].y = DestR.y;
    if ( region[4].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 175 , 335 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 175 , 335 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 175 , 335 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 185 , 335 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 175 , 335 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[4].ownership].spell == 4){
        DestR.x = 186;
        DestR.y = 245;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[4].ownership].spell == 3){
        DestR.x = 186;
        DestR.y = 245;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[4].ownership].spell == 5){
        DestR.x = 186;
        DestR.y = 245;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[4].soldiers);
    num[1] = int_to_string2(region[4].soldiers);
    num[2] = int_to_string1(region[4].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 227 , 345 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 580; // @@ 1 @@ //
    DestR.y = 240;
    DestR.w = 65; region[6].x = DestR.x;
    DestR.h = 65; region[6].y = DestR.y;
    if ( region[6].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 555 , 315 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 555 , 315 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 555 , 315 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 565 , 315 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 555 , 315 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[6].ownership].spell == 4){
        DestR.x = 560;
        DestR.y = 220;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[6].ownership].spell == 3){
        DestR.x = 560;
        DestR.y = 220;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[6].ownership].spell == 5){
        DestR.x = 560;
        DestR.y = 220;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[6].soldiers);
    num[1] = int_to_string2(region[6].soldiers);
    num[2] = int_to_string1(region[6].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 607 , 325 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 45; // $$ 1 $$ //
    DestR.y = 45;
    DestR.w = 65; region[1].x = DestR.x;
    DestR.h = 65; region[1].y = DestR.y;
    if ( region[1].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 10 , 120 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 10 , 120 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 10 , 120 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 20 , 120 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 10 , 120 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[1].ownership].spell == 4){
        DestR.x = 25;
        DestR.y = 25;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[1].ownership].spell == 3){
        DestR.x = 25;
        DestR.y = 25;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[1].ownership].spell == 5){
        DestR.x = 25;
        DestR.y = 25;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[1].soldiers);
    num[1] = int_to_string2(region[1].soldiers);
    num[2] = int_to_string1(region[1].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 62 , 130 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 360; // $$ 2 $$ //
    DestR.y = 50;
    DestR.w = 65; region[2].x = DestR.x;
    DestR.h = 65; region[2].y = DestR.y;
    if ( region[2].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 320 , 120 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 320 , 120 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 320 , 120 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 330 , 120 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 320 , 120 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[2].ownership].spell == 4){
        DestR.x = 340;
        DestR.y = 30;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[2].ownership].spell == 3){
        DestR.x = 340;
        DestR.y = 30;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[2].ownership].spell == 5){
        DestR.x = 340;
        DestR.y = 30;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[2].soldiers);
    num[1] = int_to_string2(region[2].soldiers);
    num[2] = int_to_string1(region[2].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 380 , 130 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 810; // $$ 3 $$ //
    DestR.y = 45;
    DestR.w = 65; region[3].x = DestR.x;
    DestR.h = 65; region[3].y = DestR.y;
    if ( region[3].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 775 , 120 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 775 , 120 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 775 , 120 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 785 , 120 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 775 , 120 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[3].ownership].spell == 4){
        DestR.x = 790;
        DestR.y = 25;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[3].ownership].spell == 3){
        DestR.x = 790;
        DestR.y = 25;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[3].ownership].spell == 5){
        DestR.x = 790;
        DestR.y = 25;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[3].soldiers);
    num[1] = int_to_string2(region[3].soldiers);
    num[2] = int_to_string1(region[3].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 835 , 130 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 45; // $$ 4 $$ //
    DestR.y = 485;
    DestR.w = 65; region[7].x = DestR.x;
    DestR.h = 65; region[7].y = DestR.y;
    if ( region[7].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 10 , 558 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 10 , 558 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 10 , 558 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 20 , 558 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 10 , 558 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[7].ownership].spell == 4){
        DestR.x = 25;
        DestR.y = 465;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[7].ownership].spell == 3){
        DestR.x = 25;
        DestR.y = 465;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[7].ownership].spell == 5){
        DestR.x = 25;
        DestR.y = 465;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[7].soldiers);
    num[1] = int_to_string2(region[7].soldiers);
    num[2] = int_to_string1(region[7].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 70 , 568 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 375; // $$ 5 $$ //
    DestR.y = 470;
    DestR.w = 65; region[8].x = DestR.x;
    DestR.h = 65; region[8].y = DestR.y;
    if ( region[8].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 335 , 550 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 335 , 550 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 335 , 550 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 550 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 335 , 550 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[8].ownership].spell == 4){
        DestR.x = 355;
        DestR.y = 450;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[8].ownership].spell == 3){
        DestR.x = 355;
        DestR.y = 450;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[8].ownership].spell == 5){
        DestR.x = 355;
        DestR.y = 450;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[8].soldiers);
    num[1] = int_to_string2(region[8].soldiers);
    num[2] = int_to_string1(region[8].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 395 , 560 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 815; // $$ 6 $$ //
    DestR.y = 475;
    DestR.w = 65; region[9].x = DestR.x;
    DestR.h = 65; region[9].y = DestR.y;
    if ( region[9].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 775 , 550 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 775 , 550 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 775 , 550 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 785 , 550 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 775 , 550 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[9].ownership].spell == 4){
        DestR.x = 795;
        DestR.y = 455;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[9].ownership].spell == 3){
        DestR.x = 795;
        DestR.y = 455;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[9].ownership].spell == 5){
        DestR.x = 795;
        DestR.y = 455;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[9].soldiers);
    num[1] = int_to_string2(region[9].soldiers);
    num[2] = int_to_string1(region[9].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 835 , 560 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    if(when % 499 == 0 || when == 100)
    {
        spell_info[1].display = true;
        Spell_maker1(1);
        spell_info[2].display = true;
        Spell_maker2(1);
    }
    DestR.x = x_range1; spell_info[1].x = DestR.x;
    DestR.y = y_range1; spell_info[1].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if ( display_spell1 )SDL_RenderCopy( gRenderer, number_one, NULL, &DestR);
    DestR.x = x_range2; spell_info[2].x = DestR.x;
    DestR.y = y_range2; spell_info[2].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if ( display_spell2 )SDL_RenderCopy( gRenderer, number_two, NULL, &DestR);
}
void Maps4()
{
    int fix_place = (length - 6) * 5;
    //Clear screen
    SDL_SetRenderDrawColor( gRenderer, 0xF0, 0xD5, 0xD5, 0xFF );
    SDL_RenderClear( gRenderer );
    Sint16 x[20];
    Sint16 y[20];
    //coordination of shapes
    x[0] = 125;x[1] = 125;x[2] = 73;x[3] = 21;x[4] = 21;x[5] = 73;
    y[0] = 100;y[1] = 40;y[2] = 10;y[3] = 40;y[4] = 100;y[5] = 130;
    //fill color
    if(region[1].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[1].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[1].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[1].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[1].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 125;x[1] = 125;x[2] = 177;x[3] = 229;x[4] = 229;x[5] = 177;
    y[0] = 100;y[1] = 40;y[2] = 10;y[3] = 40;y[4] = 100;y[5] = 130;
    //fill color
    if(region[2].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[2].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[2].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[2].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[2].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 177;x[1] = 177;x[2] = 125;x[3] = 73;x[4] = 73;x[5] = 125;
    y[0] = 130;y[1] = 190;y[2] = 220;y[3] = 190;y[4] = 130;y[5] = 100;
    //fill color
    if(region[5].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[5].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[5].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[5].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[5].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 177;x[1] = 229;x[2] = 281;x[3] = 281;x[4] = 229;x[5] = 177;
    y[0] = 130;y[1] = 100;y[2] = 130;y[3] = 190;y[4] = 220;y[5] = 190;
    //fill color
    if(region[6].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[6].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[6].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[6].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[6].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 825;x[1] = 825;x[2] = 773;x[3] = 721;x[4] = 721;x[5] = 773;
    y[0] = 100;y[1] = 40;y[2] = 10;y[3] = 40;y[4] = 100;y[5] = 130;
    //fill color
    if(region[3].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[3].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[3].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[3].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[3].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 825;x[1] = 825;x[2] = 877;x[3] = 929;x[4] = 929;x[5] = 877;
    y[0] = 100;y[1] = 40;y[2] = 10;y[3] = 40;y[4] = 100;y[5] = 130;
    //fill color
    if(region[4].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[4].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[4].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[4].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[4].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 877;x[1] = 877;x[2] = 825;x[3] = 773;x[4] = 773;x[5] = 825;
    y[0] = 130;y[1] = 190;y[2] = 220;y[3] = 190;y[4] = 130;y[5] = 100;
    //fill color
    if(region[8].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[8].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[8].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[8].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[8].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 773;x[1] = 721;x[2] = 669;x[3] = 669;x[4] = 721;x[5] = 773;
    y[0] = 130;y[1] = 100;y[2] = 130;y[3] = 190;y[4] = 220;y[5] = 190;
    //fill color
    if(region[7].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[7].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[7].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[7].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[7].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 125;x[1] = 125;x[2] = 73;x[3] = 21;x[4] = 21;x[5] = 73;
    y[0] = 560;y[1] = 500;y[2] = 470;y[3] = 500;y[4] = 560;y[5] = 590;
    //fill color
    if(region[17].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[17].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[17].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[17].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[17].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 125;x[1] = 125;x[2] = 177;x[3] = 229;x[4] = 229;x[5] = 177;
    y[0] = 560;y[1] = 500;y[2] = 470;y[3] = 500;y[4] = 560;y[5] = 590;
    //fill color
    if(region[18].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[18].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[18].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[18].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[18].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 177;x[1] = 177;x[2] = 125;x[3] = 73;x[4] = 73;x[5] = 125;
    y[0] = 410;y[1] = 470;y[2] = 500;y[3] = 470;y[4] = 410;y[5] = 380;
    //fill color
    if(region[13].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[13].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[13].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[13].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[13].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 177;x[1] = 229;x[2] = 281;x[3] = 281;x[4] = 229;x[5] = 177;
    y[0] = 410;y[1] = 380;y[2] = 410;y[3] = 470;y[4] = 500;y[5] = 470;
    //fill color
    if(region[14].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[14].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[14].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[14].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[14].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 825;x[1] = 825;x[2] = 773;x[3] = 721;x[4] = 721;x[5] = 773;
    y[0] = 560;y[1] = 500;y[2] = 470;y[3] = 500;y[4] = 560;y[5] = 590;
    //fill color
    if(region[19].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[19].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[19].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[19].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[19].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 825;x[1] = 825;x[2] = 877;x[3] = 929;x[4] = 929;x[5] = 877;
    y[0] = 560;y[1] = 500;y[2] = 470;y[3] = 500;y[4] = 560;y[5] = 590;
    //fill color
    if(region[20].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[20].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[20].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[20].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[20].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 877;x[1] = 877;x[2] = 825;x[3] = 773;x[4] = 773;x[5] = 825;
    y[0] = 410;y[1] = 470;y[2] = 500;y[3] = 470;y[4] = 410;y[5] = 380;
    //fill color
    if(region[16].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[16].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[16].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[16].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[16].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 773;x[1] = 721;x[2] = 669;x[3] = 669;x[4] = 721;x[5] = 773;
    y[0] = 410;y[1] = 380;y[2] = 410;y[3] = 470;y[4] = 500;y[5] = 470;
    //fill color
    if(region[15].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[15].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[15].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[15].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[15].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 345;x[1] = 385;x[2] = 435;x[3] = 475;x[4] = 475;x[5] = 435;x[6] = 385;x[7] = 345;
    y[0] = 220;y[1] = 190;y[2] = 190;y[3] = 220;y[4] = 270;y[5] = 300;y[6] = 300;y[7] = 270;
    //fill color
    if(region[9].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[9].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[9].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[9].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[9].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 475;x[1] = 515;x[2] = 565;x[3] = 605;x[4] = 605;x[5] = 565;x[6] = 515;x[7] = 475;
    y[0] = 220;y[1] = 190;y[2] = 190;y[3] = 220;y[4] = 270;y[5] = 300;y[6] = 300;y[7] = 270;
    //fill color
    if(region[10].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[10].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[10].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[10].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[10].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 475;x[1] = 515;x[2] = 565;x[3] = 605;x[4] = 605;x[5] = 565;x[6] = 515;x[7] = 475;
    y[0] = 330;y[1] = 300;y[2] = 300;y[3] = 330;y[4] = 380;y[5] = 410;y[6] = 410;y[7] = 380;
    //fill color
    if(region[12].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[12].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[12].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[12].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[12].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 345;x[1] = 385;x[2] = 435;x[3] = 475;x[4] = 475;x[5] = 435;x[6] = 385;x[7] = 345;
    y[0] = 330;y[1] = 300;y[2] = 300;y[3] = 330;y[4] = 380;y[5] = 410;y[6] = 410;y[7] = 380;
    //fill color
    if(region[11].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[11].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[11].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[11].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[11].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines2
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    char num[4];
    SDL_Rect DestR;

    DestR.x = 371; // ** 1 ** //
    DestR.y = 308;
    DestR.w = 65; region[11].x = DestR.x;
    DestR.h = 65; region[11].y = DestR.y;
    if ( region[11].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 390 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 390 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 390 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 355 , 390 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 390 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[11].ownership].spell == 4){
        DestR.x = 351;
        DestR.y = 288;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[11].ownership].spell == 3){
        DestR.x = 351;
        DestR.y = 288;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[11].ownership].spell == 5){
        DestR.x = 351;
        DestR.y = 288;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[11].soldiers);
    num[1] = int_to_string2(region[11].soldiers);
    num[2] = int_to_string1(region[11].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 402 , 400 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 375; // !! 1 !! //
    DestR.y = 210;
    DestR.w = 65; region[9].x = DestR.x;
    DestR.h = 65; region[9].y = DestR.y;
    if ( region[9].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 350 , 280 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 350 , 280 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 350 , 280 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 360 , 280 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 350 , 280 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[9].ownership].spell == 4){
        DestR.x = 355;
        DestR.y = 190;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[9].ownership].spell == 3){
        DestR.x = 355;
        DestR.y = 190;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[9].ownership].spell == 5){
        DestR.x = 355;
        DestR.y = 190;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[9].soldiers);
    num[1] = int_to_string2(region[9].soldiers);
    num[2] = int_to_string1(region[9].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 402 , 290 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 507; // @@ 1 @@ //
    DestR.y = 317;
    DestR.w = 65; region[12].x = DestR.x;
    DestR.h = 65; region[12].y = DestR.y;
    if ( region[12].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 390 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[12].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 390 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[12].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 390 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[12].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 488 , 390 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[12].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 390 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[12].ownership].spell == 4){
        DestR.x = 487;
        DestR.y = 297;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[12].ownership].spell == 3){
        DestR.x = 487;
        DestR.y = 297;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[12].ownership].spell == 5){
        DestR.x = 487;
        DestR.y = 297;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[12].soldiers);
    num[1] = int_to_string2(region[12].soldiers);
    num[2] = int_to_string1(region[12].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 530 , 400 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 507; // ## 1 ## //
    DestR.y = 210;
    DestR.w = 65; region[10].x = DestR.x;
    DestR.h = 65; region[10].y = DestR.y;
    if ( region[10].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 280 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 280 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 280 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 488 , 280 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 280 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[10].ownership].spell == 4){
        DestR.x = 487;
        DestR.y = 190;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[10].ownership].spell == 3){
        DestR.x = 487;
        DestR.y = 190;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[10].ownership].spell == 5){
        DestR.x = 487;
        DestR.y = 190;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[10].soldiers);
    num[1] = int_to_string2(region[10].soldiers);
    num[2] = int_to_string1(region[10].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 530 , 290 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 42; // $$ 1 $$ //
    DestR.y = 40;
    DestR.w = 65; region[1].x = DestR.x;
    DestR.h = 65; region[1].y = DestR.y;
    if ( region[1].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 105 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 105  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 105  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 15 , 105 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 105 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[1].ownership].spell == 4){
        DestR.x = 22;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[1].ownership].spell == 3){
        DestR.x = 22;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[1].ownership].spell == 5){
        DestR.x = 22;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[1].soldiers);
    num[1] = int_to_string2(region[1].soldiers);
    num[2] = int_to_string1(region[1].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 65 , 115 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 142; // $$ 2 $$ //
    DestR.y = 40;
    DestR.w = 65; region[2].x = DestR.x;
    DestR.h = 65; region[2].y = DestR.y;
    if ( region[2].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 105 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 105  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 105  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 115 , 105 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 105 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[2].ownership].spell == 4){
        DestR.x = 122;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[2].ownership].spell == 3){
        DestR.x = 122;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[2].ownership].spell == 5){
        DestR.x = 122;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[2].soldiers);
    num[1] = int_to_string2(region[2].soldiers);
    num[2] = int_to_string1(region[2].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 165 , 115 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 742; // $$ 3 $$ //
    DestR.y = 40;
    DestR.w = 65; region[3].x = DestR.x;
    DestR.h = 65; region[3].y = DestR.y;
    if ( region[3].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 105 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 105  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 105  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 715 , 105 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 105 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[3].ownership].spell == 4){
        DestR.x = 722;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[3].ownership].spell == 3){
        DestR.x = 722;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[3].ownership].spell == 5){
        DestR.x = 722;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[3].soldiers);
    num[1] = int_to_string2(region[3].soldiers);
    num[2] = int_to_string1(region[3].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 765 , 115 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 842; // $$ 4 $$ //
    DestR.y = 40;
    DestR.w = 65; region[4].x = DestR.x;
    DestR.h = 65; region[4].y = DestR.y;
    if ( region[4].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 105 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 105  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 105  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 815 , 105 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 105 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[4].ownership].spell == 4){
        DestR.x = 822;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[4].ownership].spell == 3){
        DestR.x = 822;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[4].ownership].spell == 5){
        DestR.x = 822;
        DestR.y = 20;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[4].soldiers);
    num[1] = int_to_string2(region[4].soldiers);
    num[2] = int_to_string1(region[4].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 865 , 115 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 92; // $$ 5 $$ //
    DestR.y = 118;
    DestR.w = 65; region[5].x = DestR.x;
    DestR.h = 65; region[5].y = DestR.y;
    if ( region[5].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 55 , 190 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 55 , 190  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 55 , 190  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 65 , 190 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 55 , 190 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[5].ownership].spell == 4){
        DestR.x = 72;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[5].ownership].spell == 3){
        DestR.x = 72;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[5].ownership].spell == 5){
        DestR.x = 72;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[5].soldiers);
    num[1] = int_to_string2(region[5].soldiers);
    num[2] = int_to_string1(region[5].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 115 , 200 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 195; // $$ 6 $$ //
    DestR.y = 118;
    DestR.w = 65; region[6].x = DestR.x;
    DestR.h = 65; region[6].y = DestR.y;
    if ( region[6].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 155 , 190 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 155 , 190  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 155 , 190  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 165 , 190 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 155 , 190 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[6].ownership].spell == 4){
        DestR.x = 175;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[6].ownership].spell == 3){
        DestR.x = 175;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[6].ownership].spell == 5){
        DestR.x = 175;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[6].soldiers);
    num[1] = int_to_string2(region[6].soldiers);
    num[2] = int_to_string1(region[6].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 215 , 200 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 692; // $$ 7 $$ //
    DestR.y = 118;
    DestR.w = 65; region[7].x = DestR.x;
    DestR.h = 65; region[7].y = DestR.y;
    if ( region[7].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 190 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 190  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 190  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 665 , 190 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 190 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[7].ownership].spell == 4){
        DestR.x = 672;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[7].ownership].spell == 3){
        DestR.x = 672;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[7].ownership].spell == 5){
        DestR.x = 672;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[7].soldiers);
    num[1] = int_to_string2(region[7].soldiers);
    num[2] = int_to_string1(region[7].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 715 , 200 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 792; // $$ 8 $$ //
    DestR.y = 118;
    DestR.w = 65; region[8].x = DestR.x;
    DestR.h = 65; region[8].y = DestR.y;
    if ( region[8].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 190 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 190  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 190  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 765 , 190 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 800 , 190 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[8].ownership].spell == 4){
        DestR.x = 772;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[8].ownership].spell == 3){
        DestR.x = 772;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[8].ownership].spell == 5){
        DestR.x = 772;
        DestR.y = 98;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[8].soldiers);
    num[1] = int_to_string2(region[8].soldiers);
    num[2] = int_to_string1(region[8].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 815 , 200 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 92; // $$ 9 $$ //
    DestR.y = 404;
    DestR.w = 65; region[13].x = DestR.x;
    DestR.h = 65; region[13].y = DestR.y;
    if ( region[13].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 50 , 472 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[13].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 50 , 472 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[13].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 50 , 472 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[13].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 60 , 472 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[13].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 50 , 472 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[13].ownership].spell == 4){
        DestR.x = 72;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[13].ownership].spell == 3){
        DestR.x = 72;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[13].ownership].spell == 5){
        DestR.x = 72;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[13].soldiers);
    num[1] = int_to_string2(region[13].soldiers);
    num[2] = int_to_string1(region[13].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 110 , 482 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 195; // $$ 10 $$ //
    DestR.y = 404;
    DestR.w = 65; region[14].x = DestR.x;
    DestR.h = 65; region[14].y = DestR.y;
    if ( region[14].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 160 , 472 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[14].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 160 , 472 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[14].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 160 , 472 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[14].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 170 , 472 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[14].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 160, 472, "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[14].ownership].spell == 4){
        DestR.x = 175;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[14].ownership].spell == 3){
        DestR.x = 175;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[14].ownership].spell == 5){
        DestR.x = 175;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[14].soldiers);
    num[1] = int_to_string2(region[14].soldiers);
    num[2] = int_to_string1(region[14].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 220 , 482 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 692; // $$ 11 $$ //
    DestR.y = 404;
    DestR.w = 65; region[15].x = DestR.x;
    DestR.h = 65; region[15].y = DestR.y;
    if ( region[15].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 472 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[15].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 472 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[15].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 472 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[15].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 665 , 472 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[15].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 655 , 472, "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[15].ownership].spell == 4){
        DestR.x = 672;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[15].ownership].spell == 3){
        DestR.x = 672;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[15].ownership].spell == 5){
        DestR.x = 672;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[15].soldiers);
    num[1] = int_to_string2(region[15].soldiers);
    num[2] = int_to_string1(region[15].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 715 , 482 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 792; // $$ 12 $$ //
    DestR.y = 404;
    DestR.w = 65; region[16].x = DestR.x;
    DestR.h = 65; region[16].y = DestR.y;
    if ( region[16].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 472 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[16].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 472 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[16].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 472 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[16].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 765 , 472 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[16].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 755, 472, "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[16].ownership].spell == 4){
        DestR.x = 772;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[16].ownership].spell == 3){
        DestR.x = 772;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[16].ownership].spell == 5){
        DestR.x = 772;
        DestR.y = 384;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[16].soldiers);
    num[1] = int_to_string2(region[16].soldiers);
    num[2] = int_to_string1(region[16].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 815 , 482 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 42; // $$ 13 $$ //
    DestR.y = 490;
    DestR.w = 65; region[17].x = DestR.x;
    DestR.h = 65; region[17].y = DestR.y;
    if ( region[17].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 560 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[17].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 560 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[17].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 560 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[17].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 15 , 560 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[17].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 5 , 560 , "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[17].ownership].spell == 4){
        DestR.x = 22;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[17].ownership].spell == 3){
        DestR.x = 22;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[17].ownership].spell == 5){
        DestR.x = 22;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[17].soldiers);
    num[1] = int_to_string2(region[17].soldiers);
    num[2] = int_to_string1(region[17].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 60 , 570 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 142; // $$ 14 $$ //
    DestR.y = 490;
    DestR.w = 65; region[18].x = DestR.x;
    DestR.h = 65; region[18].y = DestR.y;
    if ( region[18].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 560 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[18].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 560 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[18].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 560 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[18].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 115 , 560 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[18].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 105 , 560 , "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[18].ownership].spell == 4){
        DestR.x = 122;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[18].ownership].spell == 3){
        DestR.x = 122;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[18].ownership].spell == 5){
        DestR.x = 122;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[18].soldiers);
    num[1] = int_to_string2(region[18].soldiers);
    num[2] = int_to_string1(region[18].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 165 , 570 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 742; // $$ 15 $$ //
    DestR.y = 490;
    DestR.w = 65; region[19].x = DestR.x;
    DestR.h = 65; region[19].y = DestR.y;
    if ( region[19].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 560 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[19].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 560 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[19].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 560 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[19].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 715 , 560 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[19].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 705 , 560 , "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[19].ownership].spell == 4){
        DestR.x = 722;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[19].ownership].spell == 3){
        DestR.x = 722;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[19].ownership].spell == 5){
        DestR.x = 722;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[19].soldiers);
    num[1] = int_to_string2(region[19].soldiers);
    num[2] = int_to_string1(region[19].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 765 , 570 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 842; // $$ 16 $$ //
    DestR.y = 490;
    DestR.w = 65; region[20].x = DestR.x;
    DestR.h = 65; region[20].y = DestR.y;
    if ( region[20].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 560 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[20].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 560 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[20].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 560 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[20].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 815 , 560 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[20].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 805 , 560 , "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    if(ownership_number[region[20].ownership].spell == 4){
        DestR.x = 822;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, golden_star, NULL, &DestR);
    } else if(ownership_number[region[20].ownership].spell == 3){
        DestR.x = 822;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, black_star, NULL, &DestR);
    }else if(ownership_number[region[20].ownership].spell == 5){
        DestR.x = 822;
        DestR.y = 470;
        DestR.w = 25;
        DestR.h = 25;
        SDL_RenderCopy( gRenderer, shield, NULL, &DestR);
    }
    num[0] = int_to_string3(region[20].soldiers);
    num[1] = int_to_string2(region[20].soldiers);
    num[2] = int_to_string1(region[20].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 865 , 570 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    if(when % 499 == 0 || when == 100)
    {
        spell_info[1].display = true;
        Spell_maker1(1);
        spell_info[2].display = true;
        Spell_maker2(1);
    }
    DestR.x = x_range1; spell_info[1].x = DestR.x;
    DestR.y = y_range1; spell_info[1].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if ( display_spell1 )SDL_RenderCopy( gRenderer, number_one, NULL, &DestR);
    DestR.x = x_range2; spell_info[2].x = DestR.x;
    DestR.y = y_range2; spell_info[2].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if ( display_spell2 )SDL_RenderCopy( gRenderer, number_two, NULL, &DestR);
}
void TEST_MAP()
{
    int fix_place = (length - 6) * 5;
    //Clear screen
    SDL_SetRenderDrawColor( gRenderer, 0xF0, 0xD5, 0xD5, 0xFF );
    SDL_RenderClear( gRenderer );
    Sint16 x[20];
    Sint16 y[20];
    //coordination of shapes
    x[0] = 125;x[1] = 125;x[2] = 73;x[3] = 21;x[4] = 21;x[5] = 73;
    y[0] = 100;y[1] = 40;y[2] = 10;y[3] = 40;y[4] = 100;y[5] = 130;
    //fill color
    if(region[1].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[1].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[1].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[1].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[1].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 125;x[1] = 125;x[2] = 177;x[3] = 229;x[4] = 229;x[5] = 177;
    y[0] = 100;y[1] = 40;y[2] = 10;y[3] = 40;y[4] = 100;y[5] = 130;
    //fill color
    if(region[2].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[2].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[2].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[2].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[2].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 177;x[1] = 177;x[2] = 125;x[3] = 73;x[4] = 73;x[5] = 125;
    y[0] = 130;y[1] = 190;y[2] = 220;y[3] = 190;y[4] = 130;y[5] = 100;
    //fill color
    if(region[5].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[5].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[5].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[5].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[5].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 177;x[1] = 229;x[2] = 281;x[3] = 281;x[4] = 229;x[5] = 177;
    y[0] = 130;y[1] = 100;y[2] = 130;y[3] = 190;y[4] = 220;y[5] = 190;
    //fill color
    if(region[6].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[6].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[6].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[6].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[6].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 825;x[1] = 825;x[2] = 773;x[3] = 721;x[4] = 721;x[5] = 773;
    y[0] = 100;y[1] = 40;y[2] = 10;y[3] = 40;y[4] = 100;y[5] = 130;
    //fill color
    if(region[3].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[3].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[3].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[3].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[3].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 825;x[1] = 825;x[2] = 877;x[3] = 929;x[4] = 929;x[5] = 877;
    y[0] = 100;y[1] = 40;y[2] = 10;y[3] = 40;y[4] = 100;y[5] = 130;
    //fill color
    if(region[4].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[4].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[4].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[4].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[4].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 877;x[1] = 877;x[2] = 825;x[3] = 773;x[4] = 773;x[5] = 825;
    y[0] = 130;y[1] = 190;y[2] = 220;y[3] = 190;y[4] = 130;y[5] = 100;
    //fill color
    if(region[8].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[8].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[8].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[8].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[8].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 773;x[1] = 721;x[2] = 669;x[3] = 669;x[4] = 721;x[5] = 773;
    y[0] = 130;y[1] = 100;y[2] = 130;y[3] = 190;y[4] = 220;y[5] = 190;
    //fill color
    if(region[7].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[7].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[7].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[7].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[7].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 125;x[1] = 125;x[2] = 73;x[3] = 21;x[4] = 21;x[5] = 73;
    y[0] = 560;y[1] = 500;y[2] = 470;y[3] = 500;y[4] = 560;y[5] = 590;
    //fill color
    if(region[17].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[17].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[17].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[17].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[17].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 125;x[1] = 125;x[2] = 177;x[3] = 229;x[4] = 229;x[5] = 177;
    y[0] = 560;y[1] = 500;y[2] = 470;y[3] = 500;y[4] = 560;y[5] = 590;
    //fill color
    if(region[18].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[18].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[18].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[18].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[18].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 177;x[1] = 177;x[2] = 125;x[3] = 73;x[4] = 73;x[5] = 125;
    y[0] = 410;y[1] = 470;y[2] = 500;y[3] = 470;y[4] = 410;y[5] = 380;
    //fill color
    if(region[13].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[13].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[13].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[13].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[13].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 177;x[1] = 229;x[2] = 281;x[3] = 281;x[4] = 229;x[5] = 177;
    y[0] = 410;y[1] = 380;y[2] = 410;y[3] = 470;y[4] = 500;y[5] = 470;
    //fill color
    if(region[14].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[14].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[14].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[14].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[14].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 825;x[1] = 825;x[2] = 773;x[3] = 721;x[4] = 721;x[5] = 773;
    y[0] = 560;y[1] = 500;y[2] = 470;y[3] = 500;y[4] = 560;y[5] = 590;
    //fill color
    if(region[19].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[19].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[19].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[19].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[19].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 825;x[1] = 825;x[2] = 877;x[3] = 929;x[4] = 929;x[5] = 877;
    y[0] = 560;y[1] = 500;y[2] = 470;y[3] = 500;y[4] = 560;y[5] = 590;
    //fill color
    if(region[20].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[20].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[20].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[20].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[20].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 877;x[1] = 877;x[2] = 825;x[3] = 773;x[4] = 773;x[5] = 825;
    y[0] = 410;y[1] = 470;y[2] = 500;y[3] = 470;y[4] = 410;y[5] = 380;
    //fill color
    if(region[16].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[16].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[16].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[16].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[16].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 773;x[1] = 721;x[2] = 669;x[3] = 669;x[4] = 721;x[5] = 773;
    y[0] = 410;y[1] = 380;y[2] = 410;y[3] = 470;y[4] = 500;y[5] = 470;
    //fill color
    if(region[15].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF2DFF57);    /** light green **/
    else if ( region[15].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFA517FF);    /** pink **/
    else if ( region[15].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFF713641);    /** dark blue **/
    else if ( region[15].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[15].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 6 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 6 ; i++) {
        if(i < 5)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 345;x[1] = 385;x[2] = 435;x[3] = 475;x[4] = 475;x[5] = 435;x[6] = 385;x[7] = 345;
    y[0] = 220;y[1] = 190;y[2] = 190;y[3] = 220;y[4] = 270;y[5] = 300;y[6] = 300;y[7] = 270;
    //fill color
    if(region[9].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[9].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[9].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[9].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[9].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 475;x[1] = 515;x[2] = 565;x[3] = 605;x[4] = 605;x[5] = 565;x[6] = 515;x[7] = 475;
    y[0] = 220;y[1] = 190;y[2] = 190;y[3] = 220;y[4] = 270;y[5] = 300;y[6] = 300;y[7] = 270;
    //fill color
    if(region[10].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[10].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[10].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[10].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[10].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 475;x[1] = 515;x[2] = 565;x[3] = 605;x[4] = 605;x[5] = 565;x[6] = 515;x[7] = 475;
    y[0] = 330;y[1] = 300;y[2] = 300;y[3] = 330;y[4] = 380;y[5] = 410;y[6] = 410;y[7] = 380;
    //fill color
    if(region[12].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[12].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[12].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[12].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[12].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    //coordination of shapes
    x[0] = 345;x[1] = 385;x[2] = 435;x[3] = 475;x[4] = 475;x[5] = 435;x[6] = 385;x[7] = 345;
    y[0] = 330;y[1] = 300;y[2] = 300;y[3] = 330;y[4] = 380;y[5] = 410;y[6] = 410;y[7] = 380;
    //fill color
    if(region[11].ownership == 1 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF2DFF57);    /** light green **/
    else if ( region[11].ownership == 2 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFA517FF);    /** pink **/
    else if ( region[11].ownership == 3 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFF713641);    /** dark blue **/
    else if ( region[11].ownership == 4 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFB9FFFF);    /** light yellow **/
    else if ( region[11].ownership == 0 ) filledPolygonColor(gRenderer , x , y , 8 , 0xFFFFC700);    /** cyan **/
    //draw lines2
    SDL_SetRenderDrawColor(gRenderer, 00 , 00 , 00, 0xFF);
    for(int i = 0; i < 8 ; i++) {
        if(i < 7)SDL_RenderDrawLine(gRenderer, x[i], y[i], x[i + 1], y[i + 1]);
        else SDL_RenderDrawLine(gRenderer, x[i], y[i], x[0], y[0]);
    }
    char num[4];
    SDL_Rect DestR;

    DestR.x = 371; // ** 1 ** //
    DestR.y = 308;
    DestR.w = 65; region[11].x = DestR.x;
    DestR.h = 65; region[11].y = DestR.y;
    if ( region[11].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 390 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 390 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 390 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 355 , 390 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[11].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 345 , 390 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[11].soldiers);
    num[1] = int_to_string2(region[11].soldiers);
    num[2] = int_to_string1(region[11].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 402 , 400 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 375; // !! 1 !! //
    DestR.y = 210;
    DestR.w = 65; region[9].x = DestR.x;
    DestR.h = 65; region[9].y = DestR.y;
    if ( region[9].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 350 , 280 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 350 , 280 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 350 , 280 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 360 , 280 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[9].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 350 , 280 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[9].soldiers);
    num[1] = int_to_string2(region[9].soldiers);
    num[2] = int_to_string1(region[9].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 402 , 290 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 507; // @@ 1 @@ //
    DestR.y = 317;
    DestR.w = 65; region[12].x = DestR.x;
    DestR.h = 65; region[12].y = DestR.y;
    if ( region[12].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 390 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[12].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 390 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[12].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 390 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[12].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 488 , 390 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[12].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 390 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[12].soldiers);
    num[1] = int_to_string2(region[12].soldiers);
    num[2] = int_to_string1(region[12].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 530 , 400 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 507; // ## 1 ## //
    DestR.y = 210;
    DestR.w = 65; region[10].x = DestR.x;
    DestR.h = 65; region[10].y = DestR.y;
    if ( region[10].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 280 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 280 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 280 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 488 , 280 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[10].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 478 , 280 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[10].soldiers);
    num[1] = int_to_string2(region[10].soldiers);
    num[2] = int_to_string1(region[10].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 530 , 290 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 42; // $$ 1 $$ //
    DestR.y = 40;
    DestR.w = 65; region[1].x = DestR.x;
    DestR.h = 65; region[1].y = DestR.y;
    if ( region[1].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 105 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 105  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 105  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 15 , 105 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[1].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 105 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[1].soldiers);
    num[1] = int_to_string2(region[1].soldiers);
    num[2] = int_to_string1(region[1].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 65 , 115 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 142; // $$ 2 $$ //
    DestR.y = 40;
    DestR.w = 65; region[2].x = DestR.x;
    DestR.h = 65; region[2].y = DestR.y;
    if ( region[2].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 105 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 105  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 105  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 115 , 105 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[2].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 105 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[2].soldiers);
    num[1] = int_to_string2(region[2].soldiers);
    num[2] = int_to_string1(region[2].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 165 , 115 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 742; // $$ 3 $$ //
    DestR.y = 40;
    DestR.w = 65; region[3].x = DestR.x;
    DestR.h = 65; region[3].y = DestR.y;
    if ( region[3].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 105 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 105  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 105  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 715 , 105 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[3].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 105 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[3].soldiers);
    num[1] = int_to_string2(region[3].soldiers);
    num[2] = int_to_string1(region[3].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 765 , 115 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 842; // $$ 4 $$ //
    DestR.y = 40;
    DestR.w = 65; region[4].x = DestR.x;
    DestR.h = 65; region[4].y = DestR.y;
    if ( region[4].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 105 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 105  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 105  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 815 , 105 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[4].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 105 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[4].soldiers);
    num[1] = int_to_string2(region[4].soldiers);
    num[2] = int_to_string1(region[4].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 865 , 115 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 92; // $$ 5 $$ //
    DestR.y = 118;
    DestR.w = 65; region[5].x = DestR.x;
    DestR.h = 65; region[5].y = DestR.y;
    if ( region[5].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 55 , 190 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 55 , 190  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 55 , 190  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 65 , 190 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[5].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 55 , 190 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[5].soldiers);
    num[1] = int_to_string2(region[5].soldiers);
    num[2] = int_to_string1(region[5].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 115 , 200 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 195; // $$ 6 $$ //
    DestR.y = 118;
    DestR.w = 65; region[6].x = DestR.x;
    DestR.h = 65; region[6].y = DestR.y;
    if ( region[6].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 155 , 190 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 155 , 190  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 155 , 190  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 165 , 190 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[6].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 155 , 190 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[6].soldiers);
    num[1] = int_to_string2(region[6].soldiers);
    num[2] = int_to_string1(region[6].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 215 , 200 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 692; // $$ 7 $$ //
    DestR.y = 118;
    DestR.w = 65; region[7].x = DestR.x;
    DestR.h = 65; region[7].y = DestR.y;
    if ( region[7].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 190 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 190  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 190  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 665 , 190 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[7].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 190 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[7].soldiers);
    num[1] = int_to_string2(region[7].soldiers);
    num[2] = int_to_string1(region[7].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 715 , 200 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 792; // $$ 8 $$ //
    DestR.y = 118;
    DestR.w = 65; region[8].x = DestR.x;
    DestR.h = 65; region[8].y = DestR.y;
    if ( region[8].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 190 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 190  , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 190  , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 765 , 190 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[8].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 800 , 190 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[8].soldiers);
    num[1] = int_to_string2(region[8].soldiers);
    num[2] = int_to_string1(region[8].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 815 , 200 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 92; // $$ 9 $$ //
    DestR.y = 404;
    DestR.w = 65; region[13].x = DestR.x;
    DestR.h = 65; region[13].y = DestR.y;
    if ( region[13].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 50 , 472 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[13].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 50 , 472 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[13].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 50 , 472 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[13].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 60 , 472 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[13].ownership == 3) {
        SDL_RenderCopy( gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer , 50 , 472 , "DOSHMAN KHOONI" , 0x00 , 0xFF , 0xF2 , 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[13].soldiers);
    num[1] = int_to_string2(region[13].soldiers);
    num[2] = int_to_string1(region[13].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 110 , 482 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 195; // $$ 10 $$ //
    DestR.y = 404;
    DestR.w = 65; region[14].x = DestR.x;
    DestR.h = 65; region[14].y = DestR.y;
    if ( region[14].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 160 , 472 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[14].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 160 , 472 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[14].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 160 , 472 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[14].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 170 , 472 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[14].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 160, 472, "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[14].soldiers);
    num[1] = int_to_string2(region[14].soldiers);
    num[2] = int_to_string1(region[14].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 220 , 482 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 692; // $$ 11 $$ //
    DestR.y = 404;
    DestR.w = 65; region[15].x = DestR.x;
    DestR.h = 65; region[15].y = DestR.y;
    if ( region[15].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 472 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[15].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 472 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[15].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 655 , 472 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[15].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 665 , 472 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[15].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 655 , 472, "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[15].soldiers);
    num[1] = int_to_string2(region[15].soldiers);
    num[2] = int_to_string1(region[15].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 715 , 482 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 792; // $$ 12 $$ //
    DestR.y = 404;
    DestR.w = 65; region[16].x = DestR.x;
    DestR.h = 65; region[16].y = DestR.y;
    if ( region[16].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 472 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[16].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 472 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[16].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 755 , 472 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[16].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 765 , 472 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[16].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 755, 472, "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[16].soldiers);
    num[1] = int_to_string2(region[16].soldiers);
    num[2] = int_to_string1(region[16].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 815 , 482 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 42; // $$ 13 $$ //
    DestR.y = 490;
    DestR.w = 65; region[17].x = DestR.x;
    DestR.h = 65; region[17].y = DestR.y;
    if ( region[17].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 560 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[17].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 560 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[17].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 5 , 560 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[17].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 15 , 560 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[17].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 5 , 560 , "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[17].soldiers);
    num[1] = int_to_string2(region[17].soldiers);
    num[2] = int_to_string1(region[17].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 60 , 570 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 142; // $$ 14 $$ //
    DestR.y = 490;
    DestR.w = 65; region[18].x = DestR.x;
    DestR.h = 65; region[18].y = DestR.y;
    if ( region[18].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 560 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[18].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 560 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[18].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 105 , 560 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[18].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 115 , 560 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[18].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 105 , 560 , "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[18].soldiers);
    num[1] = int_to_string2(region[18].soldiers);
    num[2] = int_to_string1(region[18].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 165 , 570 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 742; // $$ 15 $$ //
    DestR.y = 490;
    DestR.w = 65; region[19].x = DestR.x;
    DestR.h = 65; region[19].y = DestR.y;
    if ( region[19].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 560 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[19].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 560 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[19].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 705 , 560 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[19].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 715 , 560 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[19].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 705 , 560 , "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[19].soldiers);
    num[1] = int_to_string2(region[19].soldiers);
    num[2] = int_to_string1(region[19].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 765 , 570 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    DestR.x = 842; // $$ 16 $$ //
    DestR.y = 490;
    DestR.w = 65; region[20].x = DestR.x;
    DestR.h = 65; region[20].y = DestR.y;
    if ( region[20].ownership == 1) {
        SDL_RenderCopy( gRenderer, gTexture3, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 560 , "ZAMIN KHAR PAST" , 0x00 , 0x00 , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[20].ownership == 2) {
        SDL_RenderCopy( gRenderer, gTexture4, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 560 , "SHIMIDAN AHMAGH" , 0xFF , 0xFF , 0xFF , 0xFF); // ** 1 ** //
    }else if ( region[20].ownership == 0) {
        SDL_RenderCopy( gRenderer, gTexture, NULL, &DestR);
        stringRGBA(gRenderer , 805 , 560 , name , 0x00 , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[20].ownership == 4) {
        SDL_RenderCopy( gRenderer, gTexture2, NULL, &DestR);
        stringRGBA(gRenderer , 815 , 560 , "ZAMIN BISAHAB" , 0xFF , 0x00 , 0x00 , 0xFF); // ** 1 ** //
    }else if ( region[20].ownership == 3) {
        SDL_RenderCopy(gRenderer, gTexture5, NULL, &DestR);
        stringRGBA(gRenderer, 805 , 560 , "DOSHMAN KHOONI", 0x00, 0xFF, 0xF2, 0xFF); // ** 1 ** //
    }
    num[0] = int_to_string3(region[20].soldiers);
    num[1] = int_to_string2(region[20].soldiers);
    num[2] = int_to_string1(region[20].soldiers);
    num[3] = '\0';
    stringRGBA(gRenderer , 865 , 570 , num , 0x00 , 0x00 , 0x00 , 0xFF);

    if(when % 499 == 0 || when == 100)
    {
        spell_info[1].display = true;
        Spell_maker1(1);
        spell_info[2].display = true;
        Spell_maker2(1);
    }
    DestR.x = x_range1; spell_info[1].x = DestR.x;
    DestR.y = y_range1; spell_info[1].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if ( display_spell1 )SDL_RenderCopy( gRenderer, number_one, NULL, &DestR);
    DestR.x = x_range2; spell_info[2].x = DestR.x;
    DestR.y = y_range2; spell_info[2].y = DestR.y;
    DestR.w = 65;
    DestR.h = 65;
    if ( display_spell2 )SDL_RenderCopy( gRenderer, number_two, NULL, &DestR);
}

//creat spell1 in random place
void Spell_maker1(int which)
{
    int xMAX;
    int xMIN;
    int yMAX;
    int yMIN;
    srand(time(NULL));
    rand();
    int spell_number;
    switch (which) {
        case 1:
            xMIN = 65;xMAX = 820;
            yMIN = 55;yMAX = 420;
            x_range1 = (rand() % ((xMAX - xMIN) + 1)) + xMIN;
            y_range1 = (rand() % ((yMAX - yMIN) + 1)) + yMIN;
            spell_number = (rand() % 5) + 1;

            spell_info[1].x = x_range1;
            spell_info[1].y = y_range1;
            spell_info[1].which = spell_number;

            spl(spell_number);
            number_one = spell;
            break;
        case 2:
            xMIN = 90;xMAX = 800;
            yMIN = 60;yMAX = 500;
            x_range1 = (rand() % ((xMAX - xMIN) + 1)) + xMIN;
            y_range1 = (rand() % ((yMAX - yMIN) + 1)) + yMIN;
            spell_number = (rand() % 5) + 1;
            spl(spell_number);

            spell_info[1].x = x_range1;
            spell_info[1].y = y_range1;
            spell_info[1].which = spell_number;

            number_one = spell;
            break;
        case 3:
            xMIN = 70;xMAX = 780;
            yMIN = 70;yMAX = 455;
            x_range1 = (rand() % ((xMAX - xMIN) + 1)) + xMIN;
            y_range1 = (rand() % ((yMAX - yMIN) + 1)) + yMIN;
            spell_number = (rand() % 5) + 1;

            spell_info[1].x = x_range1;
            spell_info[1].y = y_range1;
            spell_info[1].which = spell_number;

            spl(spell_number);
            number_one = spell;
            break;
        case 4:
            xMIN = 70;xMAX = 820;
            yMIN = 70;yMAX = 460;
            x_range1 = (rand() % ((xMAX - xMIN) + 1)) + xMIN;
            y_range1 = (rand() % ((yMAX - yMIN) + 1)) + yMIN;
            spell_number = (rand() % 5) + 1;

            spell_info[1].x = x_range1;
            spell_info[1].y = y_range1;
            spell_info[1].which = spell_number;

            spl(spell_number);
            number_one = spell;
            break;
        default:
            printf("cant switch spells with maps");
            break;
    }
}
//creat spell2 in random place
void Spell_maker2(int which)
{
    int xMAX;
    int xMIN;
    int yMAX;
    int yMIN;
    //srand(time(NULL));
    rand();
    int spell_number;
    switch (which) {
        case 1:
            xMIN = 65;xMAX = 820;
            yMIN = 55;yMAX = 420;
            x_range2 = (rand() % ((xMAX - xMIN) + 1)) + xMIN;
            y_range2 = (rand() % ((yMAX - yMIN) + 1)) + yMIN;
            spell_number = (rand() % 5) + 1;

            spell_info[2].x = x_range2;
            spell_info[2].y = y_range2;
            spell_info[2].which = spell_number;

            spl(spell_number);
            number_two = spell;
            break;
        case 2:
            xMIN = 90;xMAX = 800;
            yMIN = 60;yMAX = 500;
            x_range2 = (rand() % ((xMAX - xMIN) + 1)) + xMIN;
            y_range2 = (rand() % ((yMAX - yMIN) + 1)) + yMIN;
            spell_number = (rand() % 5) + 1;

            spell_info[2].x = x_range2;
            spell_info[2].y = y_range2;
            spell_info[2].which = spell_number;

            spl(spell_number);
            number_two = spell;
            break;
        case 3:
            xMIN = 70;xMAX = 780;
            yMIN = 70;yMAX = 455;
            x_range2 = (rand() % ((xMAX - xMIN) + 1)) + xMIN;
            y_range2 = (rand() % ((yMAX - yMIN) + 1)) + yMIN;
            spell_number = (rand() % 5) + 1;

            spell_info[2].x = x_range2;
            spell_info[2].y = y_range2;
            spell_info[2].which = spell_number;

            spl(spell_number);
            number_two = spell;
            break;
        case 4:
            xMIN = 70;xMAX = 820;
            yMIN = 70;yMAX = 460;
            x_range2 = (rand() % ((xMAX - xMIN) + 1)) + xMIN;
            y_range2 = (rand() % ((yMAX - yMIN) + 1)) + yMIN;
            spell_number = (rand() % 5) + 1;

            spell_info[2].x = x_range2;
            spell_info[2].y = y_range2;
            spell_info[2].which = spell_number;

            spl(spell_number);
            number_two = spell;
            break;
        default:
            printf("cant switch spells with maps");
            break;
    }
}
//choosing spells random
void spl(int which)
{
    switch (which) {
        case 1:
            spell = Spell1;
            break;
        case 2:
            spell = Spell2;
            break;
        case 3:
            spell = Spell3;
            break;
        case 4:
            spell = Spell4;
            break;
        case 5:
            spell = Spell5;
            break;
        default:
            printf("cant switch to one the spells");
            break;
    }
}

#endif

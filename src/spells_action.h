#ifndef __DEF_SPELLS_ACTION__
#define __DEF_SPELLS_ACTION__

#include <SDL.h>
#include <SDL2_gfxPrimitives.h>

#ifdef main
#undef main
#endif

#include <stdio.h>
#include <stdbool.h>

#include "types.h"

void spell_action2(int i , int j)
{
    if (region[i].soldier_x[j] == region[region[i].destination].x + 30||
        region[i].soldier_y[j] == region[region[i].destination].y + 30){
        region[i].starter++;
        region[i].check++;
        if(region[region[i].destination].ownership != region[i].ownership){
            if(region[region[i].destination].soldiers > 0){
                region[region[i].destination].defending = true;
                region[region[i].destination].soldiers--;
            }else if(region[region[i].destination].soldiers == 0){
                region[region[i].destination].soldiers++;
                region[region[i].destination].ownership = region[i].ownership;
            }
        }else {
            region[region[i].destination].soldiers++;
        }
        if(region[i].check == region[i].counter){
            region[region[i].destination].defending = false;
        }
        return;
    }
    if(ownership_number[region[i].ownership].timer > 200)
    {
        ownership_number[region[i].ownership].timer = 0;
        ownership_number[region[i].ownership].spell = 0;
        display_spell1 = true;
        display_spell2 = true;
    }
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
    if(region[i].ownership == 0){
        if(ownership_number[region[i].ownership].spell == 2) {
            filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 8, 0xFF000000);
            filledCircleColor(gRenderer, region[i].soldier_x[j], region[i].soldier_y[j], 3, 0xFF0070FF);
        }else if(ownership_number[region[i].ownership].spell == 0) {
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
        }else if(ownership_number[region[i].ownership].spell == 0) {
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
        }else if(ownership_number[region[i].ownership].spell == 0) {
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
        }else if(ownership_number[region[i].ownership].spell == 0) {
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
}

void checking_spells_actions(int i , int j)
{
    if(ownership_number[region[i].ownership].spell == 1)
    {
        ownership_number[region[i].ownership].action = 2;
    }else if(ownership_number[region[i].ownership].spell == 2 && when % 2 == 0){
        spell_action2(i , j);
    }else if(ownership_number[region[i].ownership].spell == 3){
        ownership_number[region[i].ownership].limitation = 300;
    }else if(ownership_number[region[i].ownership].spell == 4){
        ownership_number[region[i].ownership].all_ownership = true;
    }else if(ownership_number[region[i].ownership].spell == 5){
        ownership_number[region[i].ownership].shield = true;
    }else if(ownership_number[region[i].ownership].spell == 0){
        ownership_number[region[i].ownership].action = 1;
        ownership_number[region[i].ownership].limitation = 30;
        ownership_number[region[i].ownership].timer = 0;
        ownership_number[region[i].ownership].all_ownership = false;
        ownership_number[region[i].ownership].shield = false;
    }
}



#endif

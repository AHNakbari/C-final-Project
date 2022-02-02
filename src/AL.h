#ifndef __DEFIN_AL__
#define __DEFIN_AL__

#include "Base_Functions.h"
#include "types.h"

void AL1(int i);
void AL2(int i);
void AL3(int i);

void AL_actions()
{
    for(int i = 1; i < 21; i++)
    {
        if(region[i].ownership == 1){
            AL1(i);
        }else if(region[i].ownership == 2){
            AL2(i);
        }else if(region[i].ownership == 3){
            AL3(i);
        }
        if(when % 300 == 0)
        {
            AL[1].destination[i] = false;
            AL[3].destination[i] = false;
            AL[2].destination[i] = false;
        }
    }
}

void AL1(int i)
{
    bool check = false;
    for(int j = 1; j < 21; j++)
    {
        if(region[j].ownership == 4 && region[i].soldiers > region[j].soldiers+5 && !region[i].attacking && !AL[1].destination[j])
        {
            region[i].attacking = true;
            region[i].destination = j;
            region[i].counter = 0;
            region[i].check = 0;
            region[i].starter = 1;
            AL[1].destination[j] = true;
        }
        if(region[j].ownership == 4)check = true;
        if(region[j].ownership != 4)AL[1].destination[j] = false;
    }
    if(!check)
    {
        for(int j = 1; j < 21; j++)
        {
            if(region[i].soldiers > region[j].soldiers && abs(region[j].x - region[i].x) < 200 &&
               abs(region[j].y - region[i].y) < 200 && !region[i].attacking &&
               !AL[1].destination[j] && region[j].ownership != 1 && !ownership_number[region[j].ownership].shield)
            {
                region[i].attacking = true;
                region[i].destination = j;
                region[i].counter = 0;
                region[i].check = 0;
                region[i].starter = 1;
                AL[1].destination[j] = true;
            }else if( !region[i].attacking && !AL[1].destination[j]  && region[j].attacking && region[j].ownership != 1 && !ownership_number[region[j].ownership].shield){
                region[i].attacking = true;
                region[i].destination = j;
                region[i].counter = 0;
                region[i].check = 0;
                region[i].starter = 1;
                AL[1].destination[j] = true;
            } else if(!region[i].attacking && region[j].ownership == 1 && region[j].defending && region[i].soldiers > 15 && !ownership_number[region[j].ownership].shield){
                region[i].attacking = true;
                region[i].destination = j;
                region[i].counter = 0;
                region[i].check = 0;
                region[i].starter = 1;
                AL[1].destination[j] = true;
            }
        }
    }
}

void AL2(int i)
{
        if( region[i].soldiers > 29 )
        {
            for( int s = 1; s < 3; s++)
            {
                if( spell_info[s].x > region[i].x && spell_info[s].y > region[i].y && spell_info[s].display ){
                    for(int j = 1; j < 21; j++)
                    {
                        if(region[j].x > region[i].x && region[j].y > region[i].y && region[j].ownership != 2 && !region[i].attacking && !ownership_number[region[j].ownership].shield)
                        {
                            region[i].attacking = true;
                            region[i].destination = j;
                            region[i].counter = 0;
                            region[i].check = 0;
                            region[i].starter = 1;
                            AL[2].destination[j] = true;
                        }
                    }
                }else if(spell_info[s].x > region[i].x && spell_info[s].y < region[i].y && spell_info[s].display){
                    for(int j = 1; j < 21; j++)
                    {
                        if(region[j].x > region[i].x && region[j].y < region[i].y && region[j].ownership != 2 && !region[i].attacking && !ownership_number[region[j].ownership].shield)
                        {
                            region[i].attacking = true;
                            region[i].destination = j;
                            region[i].counter = 0;
                            region[i].check = 0;
                            region[i].starter = 1;
                            AL[2].destination[j] = true;
                        }
                    }
                }else if(spell_info[s].x < region[i].x && spell_info[s].y < region[i].y && spell_info[s].display){
                    for(int j = 1; j < 21; j++)
                    {
                        if(region[j].x < region[i].x && region[j].y < region[i].y && region[j].ownership != 2 && !region[i].attacking && !ownership_number[region[j].ownership].shield)
                        {
                            region[i].attacking = true;
                            region[i].destination = j;
                            region[i].counter = 0;
                            region[i].check = 0;
                            region[i].starter = 1;
                            AL[2].destination[j] = true;
                        }
                    }
                }else if(spell_info[s].x < region[i].x && spell_info[s].y > region[i].y && spell_info[s].display){
                    for(int j = 1; j < 21; j++)
                    {
                        if(region[j].x < region[i].x && region[j].y > region[i].y && region[j].ownership != 2 && !region[i].attacking && !ownership_number[region[j].ownership].shield)
                        {
                            region[i].attacking = true;
                            region[i].destination = j;
                            region[i].counter = 0;
                            region[i].check = 0;
                            region[i].starter = 1;
                            AL[2].destination[j] = true;
                        }
                    }
                }
            }
        }
}

void AL3(int i)
{
    for(int j = 1; j < 21; j++)
    {
        if( region[j].ownership == 0 && !region[i].attacking && region[j].attacking && region[i].soldiers > 10 && !AL[3].destination[j] && !ownership_number[0].shield)
        {
            region[i].attacking = true;
            region[i].destination = j;
            region[i].counter = 0;
            region[i].check = 0;
            region[i].starter = 1;
            AL[3].destination[j] = true;
        }
    }
}

#endif //MAIN_C_AL_H

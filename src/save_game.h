#ifndef MAIN_C_SAVE_GAME_H
#define MAIN_C_SAVE_GAME_H

#include "Base_Functions.h"
#include "Other_Functions.h"
#include "types.h"

//save scores in file
void save_score()
{
    FILE *fileptr;
    if((fileptr = fopen("user information.txt" , "r")) == NULL){
        printf("file could not be opened");
    } else {
        int num;
        rewind(fileptr);
        fscanf(fileptr , "%d" , &num);
        rewind(fileptr);
        int i = 0;
        for(i = 0; num != 3 ; i++)
        {
            fscanf(fileptr , "%d%*c%[^\n]s" , &user[i].score , user[i].user_name);
            printf("%d %s\n" , user[i].score , user[i].user_name);
            if(user[i].score == 3)break;
            if(user[i].user_name[0] == name[0] && user[i].user_name[1] == name[1] && user[i].user_name[2] == name[2] &&
               user[i].user_name[3] == name[3] && user[i].user_name[4] == name[4])user_ID = i;
        }
        printf("%d\n" , i);
        if(user_ID != -1){
            user[user_ID].score += score;
        } else {
            user[i].score = score;
            for(int j = 0; name[j] != '\0'; j++)
            {
                user[i].user_name[j] = name[j];
            }
        }
        user[i + 1].score = 3;
        user[i + 1].user_name[0] = 'e';
        fileptr = fopen("user information.txt" , "w");
        for(i = 0; 1 ; i++)
        {
            fprintf(fileptr , "%d %s\n" , user[i].score , user[i].user_name);
            if(user[i].score == 3)break;
        }
    }
}

//reset the scoreboard
void reset_scoreboard()
{
    FILE *fileptr;
    if((fileptr = fopen("user information.txt" , "w")) == NULL){
        printf("file could not be opened");
    } else {
        fprintf(fileptr , "%d %s\n" , 3 , "empty");
    }
}

//updating scoreboard
void scoreboard()
{
    FILE *fileptr;
    if((fileptr = fopen("user information.txt" , "r")) == NULL){
        printf("file could not be opened");
    } else {
        int num;
        rewind(fileptr);
        fscanf(fileptr, "%d", &num);
        rewind(fileptr);
        int i = 0;
        for (i = 0; num != 3; i++) {
            fscanf(fileptr, "%d%*c%[^\n]s", &user[i].score, user[i].user_name);
            if (user[i].score == 3)break;
        }
    }
}

void user_score(int scr)
{
    bool is = false;
    char num1[10];
    if(scr < 0){
        is = true;
        scr *= -1;
    }
    int i;
    for(i = 0; scr ; i++)
    {
        num1[i] = int_to_string1(scr);
        scr /= 10;
    }
    num1[i] = '\0';
    if(is) {
        number[0] = '-';
        int j = i - 1;
        for (i = 1; j ; i++ , j--)
        {
            number[i] = num1[j];
        }
        number[i] = '0';
        number[i + 1] = '\0';
    } else {
        int j = i - 1;
        for (i = 0; j ; i++ , j--)
        {
            number[i] = num1[j];
        }
        number[i] = '0';
        number[i + 1] = '\0';
    }
}

//save game for resume that
void save_game(int map)
{
    FILE *saveptr;
    if((saveptr = fopen("save_game.txt" , "w")) == NULL){
        printf("file could not be opened");
    } else {
        fprintf(saveptr , "%d\n" , map);
        if(map == 1){
            for(int i = 1; i < 18; i++){
                fprintf(saveptr , "%d %d\n" , region[i].ownership , region[i].soldiers);
                fprintf(saveptr , "%d %d\n" , region[i].accident , region[i].attacking);
                fprintf(saveptr , "%d %d\n" , region[i].check , region[i].counter);
                fprintf(saveptr , "%d %d\n" , region[i].starter , region[i].destination);
                fprintf(saveptr , "%d %d\n" , region[i].soldier_line_slope , region[i].x);
                fprintf(saveptr , "%d %d\n" , region[i].y , region[i].defending);
                for(int j = 1; j < 100; j++){
                    fprintf(saveptr , "%d %d\n" , region[i].soldier_x[j] , region[i].soldier_y[j]);
                }
            }
        } else if(map == 2){
            for(int i = 1; i < 12; i++){
                fprintf(saveptr , "%d %d\n" , region[i].ownership , region[i].soldiers);
                fprintf(saveptr , "%d %d\n" , region[i].accident , region[i].attacking);
                fprintf(saveptr , "%d %d\n" , region[i].check , region[i].counter);
                fprintf(saveptr , "%d %d\n" , region[i].starter , region[i].destination);
                fprintf(saveptr , "%d %d\n" , region[i].soldier_line_slope , region[i].x);
                fprintf(saveptr , "%d %d\n" , region[i].y , region[i].defending);
                for(int j = 1; j < 100; j++){
                    fprintf(saveptr , "%d %d\n" , region[i].soldier_x[j] , region[i].soldier_y[j]);
                }
            }
        } else if(map == 3){
            for(int i = 1; i < 10; i++){
                fprintf(saveptr , "%d %d\n" , region[i].ownership , region[i].soldiers);
                fprintf(saveptr , "%d %d\n" , region[i].accident , region[i].attacking);
                fprintf(saveptr , "%d %d\n" , region[i].check , region[i].counter);
                fprintf(saveptr , "%d %d\n" , region[i].starter , region[i].destination);
                fprintf(saveptr , "%d %d\n" , region[i].soldier_line_slope , region[i].x);
                fprintf(saveptr , "%d %d\n" , region[i].y , region[i].defending);
                for(int j = 1; j < 100; j++){
                    fprintf(saveptr , "%d %d\n" , region[i].soldier_x[j] , region[i].soldier_y[j]);
                }
            }
        } else if(map == 4){
            for(int i = 1; i < 21; i++){
                fprintf(saveptr , "%d %d\n" , region[i].ownership , region[i].soldiers);
                fprintf(saveptr , "%d %d\n" , region[i].accident , region[i].attacking);
                fprintf(saveptr , "%d %d\n" , region[i].check , region[i].counter);
                fprintf(saveptr , "%d %d\n" , region[i].starter , region[i].destination);
                fprintf(saveptr , "%d %d\n" , region[i].soldier_line_slope , region[i].x);
                fprintf(saveptr , "%d %d\n" , region[i].y , region[i].defending);
                for(int j = 1; j < 100; j++){
                    fprintf(saveptr , "%d %d\n" , region[i].soldier_x[j] , region[i].soldier_y[j]);
                }
            }
        }
        for(int i = 1; i < 5; i++){
            fprintf(saveptr , "%d %d %d %d %d\n" , ownership_number[i].spell , ownership_number[i].timer , ownership_number[i].limitation , ownership_number[i].all_ownership , ownership_number[i].action);
        }
        fprintf(saveptr , "%s\n" , name);
    }
}

//resume the save game
void load_game()
{
    FILE *saveptr;
    if((saveptr = fopen("save_game.txt" , "r")) == NULL){
        printf("file could not be opened");
    } else {
        int map;
        fscanf(saveptr , "%d" , &map);
        map_number = map;
        if(map == 1){
            for(int i = 1; i < 18; i++){
                fscanf(saveptr , "%d %d\n" , &region[i].ownership , &region[i].soldiers);
                fscanf(saveptr , "%d %d\n" , &region[i].accident , &region[i].attacking);
                fscanf(saveptr , "%d %d\n" , &region[i].check , &region[i].counter);
                fscanf(saveptr , "%d %d\n" , &region[i].starter , &region[i].destination);
                fscanf(saveptr , "%d %d\n" , &region[i].soldier_line_slope , &region[i].x);
                fscanf(saveptr , "%d %d\n" , &region[i].y , &region[i].defending);
                for(int j = 1; j < 100; j++){
                    fscanf(saveptr , "%d %d\n" , &region[i].soldier_x[j] , &region[i].soldier_y[j]);
                }
            }
        } else if(map == 2){
            for(int i = 1; i < 12; i++){printf("##\n");
                fscanf(saveptr , "%d %d\n" , &region[i].ownership , &region[i].soldiers);
                fscanf(saveptr , "%d %d\n" , &region[i].accident , &region[i].attacking);;
                fscanf(saveptr , "%d %d\n" , &region[i].check , &region[i].counter);
                fscanf(saveptr , "%d %d\n" , &region[i].starter , &region[i].destination);
                fscanf(saveptr , "%d %d\n" , &region[i].soldier_line_slope , &region[i].x);
                fscanf(saveptr , "%d %d\n" , &region[i].y , &region[i].defending);
                for(int j = 1; j < 100; j++){
                    fscanf(saveptr , "%d %d\n" , &region[i].soldier_x[j] , &region[i].soldier_y[j]);
                }
            }
        } else if(map == 3){
            for(int i = 1; i < 10; i++){
                fscanf(saveptr , "%d %d\n" , &region[i].ownership , &region[i].soldiers);
                fscanf(saveptr , "%d %d\n" , &region[i].accident , &region[i].attacking);
                fscanf(saveptr , "%d %d\n" , &region[i].check , &region[i].counter);
                fscanf(saveptr , "%d %d\n" , &region[i].starter , &region[i].destination);
                fscanf(saveptr , "%d %d\n" , &region[i].soldier_line_slope , &region[i].x);
                fscanf(saveptr , "%d %d\n" , &region[i].y , &region[i].defending);
                for(int j = 1; j < 100; j++){
                    fscanf(saveptr , "%d %d\n" , &region[i].soldier_x[j] , &region[i].soldier_y[j]);
                }
            }
        } else if(map == 4){
            for(int i = 1; i < 21; i++){
                fscanf(saveptr , "%d %d\n" , &region[i].ownership , &region[i].soldiers);
                fscanf(saveptr , "%d %d\n" , &region[i].accident , &region[i].attacking);
                fscanf(saveptr , "%d %d\n" , &region[i].check , &region[i].counter);
                fscanf(saveptr , "%d %d\n" , &region[i].starter , &region[i].destination);
                fscanf(saveptr , "%d %d\n" , &region[i].soldier_line_slope , &region[i].x);
                fscanf(saveptr , "%d %d\n" , &region[i].y , &region[i].defending);
                for(int j = 1; j < 100; j++){
                    fscanf(saveptr , "%d %d\n" , &region[i].soldier_x[j] , &region[i].soldier_y[j]);
                }
            }
        }
        for(int i = 0; i < 5; i++){printf("##\n");
            fscanf(saveptr , "%d %d %d %d %d\n" , &ownership_number[i].spell , &ownership_number[i].timer , &ownership_number[i].limitation , &ownership_number[i].all_ownership , &ownership_number[i].action);
        }
        fscanf(saveptr , "%s" , name);
    }
}
#endif

/*
** EPITECH PROJECT, 2019
** init_tf.c
** File description:
** init text and fonts
*/

#include "defender.h"

int init_tf(all_t *all)
{
    TEXT->tittle = sfText_create();
    TEXT->play = sfText_create();
    TEXT->quit = sfText_create();
    TEXT->f1 = sfFont_createFromFile("fonts/wizzta.ttf");
    sfText_setString(TEXT->tittle, "Defender");
    sfText_setFont(TEXT->tittle, TEXT->f1);
    sfText_setCharacterSize(TEXT->tittle, 130);
    sfText_setColor(TEXT->tittle, sfBlack);
    sfText_setString(TEXT->play, "Play");
    sfText_setFont(TEXT->play, TEXT->f1);
    sfText_setCharacterSize(TEXT->play, 50);
    sfText_setColor(TEXT->play, sfBlack);
    sfText_setString(TEXT->quit, "Quit");
    sfText_setFont(TEXT->quit, TEXT->f1);
    sfText_setCharacterSize(TEXT->quit, 50);
    sfText_setColor(TEXT->quit, sfBlack);
    init_pos_text(all);
    return (0);
}

void init_pos_text(all_t *all)
{
    sfVector2f tittle_pos = {470, 330};
    sfVector2f play_pos = {615, 240};
    sfVector2f quit_pos = {615, 540};

    // text_pos.x = x;
    // text_pos.y = y;
    sfText_setPosition(TEXT->tittle, tittle_pos);
    sfText_setPosition(TEXT->play, play_pos);
    sfText_setPosition(TEXT->quit, quit_pos);
}
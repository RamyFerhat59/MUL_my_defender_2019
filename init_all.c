/*
** EPITECH PROJECT, 2019
** src/inits/init_all.c
** File description:
** init all struct
*/

#include "defender.h"

int init_all(all_t *all, sfVideoMode mode)
{
    WINDOW = malloc(sizeof(window_t));
    if (WINDOW == NULL)
        return (84);
    TEXT = malloc(sizeof(text_t));
    if (TEXT == NULL)
        return (84);
    // all->music = malloc(sizeof(music_t));
    // if (all->music == NULL)
    //     return (84);
    // all->pos = malloc(sizeof(pos_t));
    // if (all->pos == NULL)
    //     return (84);
    init_struct(all, mode);
    if (check_init(all) == 84)
        return (84);
    return (0);
}

int init_struct(all_t *all, sfVideoMode mode)
{
    init_window(all, mode);
    // init_startmenu(all);
    init_tf(all);
    // init_music(all);

    return (0);
}
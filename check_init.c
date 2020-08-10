/*
** EPITECH PROJECT, 2019
** src/menu/check_init.c
** File description:
** check if initialisation has been succesful
*/

#include "defender.h"

int check_init(all_t *all)
{
    int err = 0;

    err |= (!WINDOW->window) ? 84 : 0;
    err |= (!WINDOW->texture) ? 84 : 0;
    err |= (!WINDOW->sprite) ? 84 : 0;
    err |= (!TEXT->tittle) ? 84 : 0;
    err |= (!TEXT->play) ? 84 : 0;
    err |= (!TEXT->quit) ? 84 : 0;
    if (error_malloc(all) == 84)
        return (84);
    return (err);
}

int error_malloc(all_t *all)
{
    int err = 0;

    err |= (!WINDOW) ? 84 : 0;
    err |= (!TEXT) ? 84 : 0;
    // err |= (!MENU) ? 84 : 0;
    // err |= (!MUSIC) ? 84 : 0;
    // err |= (!all->pos) ? 84 : 0;
    return (err);
}
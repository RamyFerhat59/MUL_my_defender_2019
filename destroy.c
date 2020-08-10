/*
** EPITECH PROJECT, 2020
** destroy.c
** File description:
** functions to destroy the game elements
*/

#include "defender.h"

int destroy(all_t *all)
{
    sfSprite_destroy(WINDOW->sprite);
    sfTexture_destroy(WINDOW->texture);
    sfText_destroy(TEXT->tittle);
    sfText_destroy(TEXT->play);
    sfText_destroy(TEXT->quit);
    sfRenderWindow_destroy(WINDOW->window);
    return (0);
}
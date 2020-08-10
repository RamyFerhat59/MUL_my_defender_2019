/*
** EPITECH PROJECT, 2019
** init_window.c
** File description:
** init window
*/

#include "defender.h"

int init_window(all_t *all, sfVideoMode mode)
{
    // sfFloatRect dimensions = {0.0, 0.0, 1280.0f, 700.0f};
    // sfVector2f center = {1280.0f / 2.0f, 700.0f / 2.0f};

    WINDOW->window = sfRenderWindow_create(mode, "my_defender",
        sfResize | sfClose, NULL);
    WINDOW->sprite = sfSprite_create();
    WINDOW->texture = sfTexture_createFromFile("sprites/startmenu.png",
        NULL);
    sfSprite_setTexture(WINDOW->sprite, WINDOW->texture, sfTrue);
    // CAM = sfView_createFromRect(dimensions);
    // sfRenderWindow_setView(WINDOW->window, CAM);
    return (0);
}
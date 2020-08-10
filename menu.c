/*
** EPITECH PROJECT, 2020
** scenes.c
** File description:
** start menu
*/

#include "defender.h"

void events_menu(all_t *all)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(WINDOW->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(WINDOW->window);
        // if (sfKeyboard_isKeyPressed(sfKeyEscape) &&
        //     sfTime_asSeconds(sfClock_getElapsedTime(MENU->menu_clock)) > 0.5)
        //     pause_game(all, event);
    }
}

// void sound_check_menu(all_t *all)
// {
//     if (all->first == 1) {
//         sfMusic_stop(MUSIC->moving);
//         sfMusic_play(MUSIC->moving);
//     } else
//         all->first = 1;
//     if (sfMusic_getStatus(MUSIC->ruins) == sfPlaying)
//         sfMusic_stop(MUSIC->ruins);
//     if (sfMusic_getStatus(MUSIC->here_we_are) != sfPlaying)
//         sfMusic_play(MUSIC->here_we_are);
// }

void display_menu(all_t *all)
{
    sfRenderWindow_clear(WINDOW->window, sfBlack);
    sfRenderWindow_drawSprite(WINDOW->window, WINDOW->sprite, NULL);
    sfRenderWindow_drawText(WINDOW->window, TEXT->tittle, NULL);
    sfRenderWindow_drawText(WINDOW->window, TEXT->play, NULL);
    sfRenderWindow_drawText(WINDOW->window, TEXT->quit, NULL);
    sfRenderWindow_display(WINDOW->window);
}

int trigger_check_menu(all_t *all)
{
    // return 1 and set scene value to 1 when triggered to start stage_1
    return (0);
}

int menu(all_t *all)
{
    sfRenderWindow_setFramerateLimit(WINDOW->window, 60);
    sfRenderWindow_setMouseCursorVisible(WINDOW->window, sfTrue);
    // sound_check_menu(all);
    while (sfRenderWindow_isOpen(WINDOW->window)) {
        events_menu(all);
        display_menu(all);
    }
    return (0);
}
/*
** EPITECH PROJECT, 2020
** scenes.c
** File description:
** navigate though the different scenes of the game
*/

#include "../../include/rpg.h"

void events_scene_1(all_t *all, sfEvent *event)
{
    while (sfRenderWindow_pollEvent(WINDOW->window, event)) {
        if (event->type == sfEvtClosed)
            sfRenderWindow_close(WINDOW->window);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) &&
            sfTime_asSeconds(sfClock_getElapsedTime(MENU->menu_clock)) > 0.5)
            pause_game(all, event);
        else if (sfKeyboard_isKeyPressed(sfKeyC) &&
            sfTime_asSeconds(sfClock_getElapsedTime(MENU->menu_clock)) > 0.5) {
            sfMusic_stop(MUSIC->ing_menu);
            sfMusic_play(MUSIC->ing_menu);
            game_menu(all);
            sfClock_restart(MENU->menu_clock);
        }
        return;
    }
}

void sound_check_1(all_t *all)
{
    if (all->first == 1) {
        sfMusic_stop(MUSIC->moving);
        sfMusic_play(MUSIC->moving);
    } else
        all->first = 1;
    if (sfMusic_getStatus(MUSIC->ruins) == sfPlaying)
        sfMusic_stop(MUSIC->ruins);
    if (sfMusic_getStatus(MUSIC->here_we_are) != sfPlaying)
        sfMusic_play(MUSIC->here_we_are);
}

int trigger_check_1(all_t *all)
{
    sfVector2f pos = {sfView_getCenter(all->cam).x,
                    sfView_getCenter(all->cam).y};
    sfVector2f cam_2 = {600.0f, 1450.f};

    if ((pos.x >= 2262 && pos.x <= 2454) && pos.y <= 285) {
        all->scene = 2;
        all->trig = 1;
        all->alpha = 255;
        sfView_setCenter(all->cam, cam_2);
        sfRenderWindow_setView(all->window->window, all->cam);
        return (1);
    }
    return (0);
}

int stage_1(all_t *all)
{
    sfEvent event;

    sfRenderWindow_setFramerateLimit(WINDOW->window, 60);
    WINDOW->texture =
    sfTexture_createFromFile("sprites/stage_01.???", NULL);
    sfSprite_setTexture(WINDOW->sprite, WINDOW->texture, sfTrue);
    sound_check_1(all);
    while ((trigger_check_1(all) == 0) &&
        sfRenderWindow_isOpen(WINDOW->window)) {
        events_scene_1(all, &event);
        always_display(all);
        sfRenderWindow_display(WINDOW->window);
    }
    return (0);
}
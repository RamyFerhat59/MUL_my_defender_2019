/*
** EPITECH PROJECT, 2020
** rpg.h
** File description:
** the .h file for the rpg
*/

#ifndef _RPG_H_
#define _RPG_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>

#define WINDOW all->window
#define TEXT all->text

typedef struct s_window
{
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
} window_t;

typedef struct s_text
{
    sfText *tittle;
    sfText *play;
    sfText *quit;
    sfFont *f1;
} text_t;

// typedef struct s_menu
// {
//     sfTexture *menu_texture;
//     sfTexture *menu_texture1;
//     sfTexture *menu_stat_texture;
//     sfSprite *menu_sprite;
//     sfSprite *menu_sprite1;
//     sfSprite *menu_stat_sprite;
//     sfClock *menu_clock;
//     int one;
//     int stat_status;
//     int item_status;
//     int one_t;
//     int selector;
//     int selector_item;
// } menu_t;


// typedef struct s_music
// {
//     sfMusic *start;
// } music_t;

// typedef struct s_pos
// {
//     sfVector2f mousepos;
// } pos_t;

typedef struct s_all
{
    window_t *window;
    text_t *text;
    // menu_t *menu;
    // music_t *music;
    // pos_t *pos;
    // sfView *cam;
    int scene;
} all_t;

// ---------- MAIN ----------
void display_help(void);
int check_error(int ac, char **av);
int main(int ac, char **av, char **env);

// ---------- TOOLS ----------
void my_putchar(char c);
void my_putstr(char *str);
void my_puterr(char d);
void my_putstrerr(char *str);
int my_strcmp(char *s1, char *s2);

// ---------- INIT ----------

int init_window(all_t *all, sfVideoMode mode);
// int init_startmenu(all_t *all);
int init_tf(all_t *all);
void init_pos_text(all_t *all);
int init_all(all_t *all, sfVideoMode mode);
int init_struct(all_t *all, sfVideoMode mode);

// ---------- CHCK INIT ----------
int check_init(all_t *all);
int error_malloc(all_t *all);

// ---------- DESTROY ----------
int destroy(all_t *all);

// ---------- MENU ----------
void events_menu(all_t *all);
void sound_check_menu(all_t *all);
void display_menu(all_t *all);
int trigger_check_menu(all_t *all);
int menu(all_t *all);


#endif /* _RPG_H_ */

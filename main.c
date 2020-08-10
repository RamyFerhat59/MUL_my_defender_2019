/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** 
*/

#include "defender.h"

void display_help(void)
{
    my_putstr("\n============================== my_defender - HELP ");
    my_putstr("=============================\nUSAGE\n");
    my_putstr("\t- ./my_defender\n\t- ./my_defender -h\n\n");
    my_putstr("COMMANDS\n\t[Key_UP]\t\t   Move upward\n\t"
        "[Key_RIGHT]\t\t   Move rightward\n\t[Key_DOWN]\t\t   Move "
        "downward\n\t"
        "[Key_LEFT]\t\t   Move leftward\n\t[Key_C]\t\t           Open menu\n\t"
        "[Key_SPACE]\t\t   Select in menu\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("   - Our RPG project, a tribute to the famous Toby Fox's");
    my_putstr(" game: Undertale.\n");
    my_putstr("================================== Enjoy ! ");
    my_putstr("==================================\n\n");
}

int check_error(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0){
        display_help();
        return (0);
    }
    else if (ac != 1) {
        my_putstrerr("Too much arguments, try to rerun with -h\n");
        return (84);
    }
    return (42);
}

int main(int ac, char **av, char **env)
{
    all_t all = {0};
    int check = check_error(ac, av);
    sfVideoMode mode = {1280, 700, 32};
    int (*ptr[])(all_t *all) = {&menu};

    if (env[0] == NULL)
        return (84);
    else if (check == 0 || check == 84)
        return (check);
    if (init_all(&all, mode) == 84)
        return (84);
    while (sfRenderWindow_isOpen(all.window->window))
        ptr[all.scene](&all);
    destroy(&all);
    return (0);
}
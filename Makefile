##
## EPITECH PROJECT, 2019
## MUL_my_runner_2019
## File description:
## Makefile
##

SRCS	= 	main.c 				\
			check_init.c 		\
			destroy.c 	 		\
			init_all.c 			\
			init_menu.c 		\
			init_tf.c 			\
			init_window.c 		\
			menu.c 				\
			tools.c 			\
			

OBJS	=	$(SRCS:.c=.o)

RM		=	rm -rf

CC 		=	gcc -Wall -Wextra -l csfml-graphics -l csfml-window -l csfml-audio -l csfml-system -l csfml-network

NAME	=	my_defender

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CC) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:
			$(RM) $(NAME) $(OBJS)

re:			fclean all

.PHONY:		all clean fclean re
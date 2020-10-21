##
## EPITECH PROJECT, 2019
## psu_navy_2019
## File description:
## Makefile
##

SRC		=	my_putchar.c	\
			my_putstr.c		\
			my_strlen.c		\
			my_getnbr.c		\
			my_put_nbr.c	\
			my_strcmp.c		\
			my_strcat.c		\
			my_puterror.c	\
			my_print.c		\
			str_to_word_array.c

INC		=	-I./include

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
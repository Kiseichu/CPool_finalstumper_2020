##
## EPITECH PROJECT, 2019
## minishell2
## File description:
## Makefile
##

SRC				=	main.c		\
					error.c		\
					rush3.c


SRC2			=	error.c		\
					rush3.c		\

OBJ				=	$(SRC:.c=.o)

LIB				=	-L ./lib/my -lmy
LIBT			=	-L ./../lib/my -lmy
INC				=	-I ./include -I ./lib/my

TEST			=	$(addprefix $(TEST_FOLDER), $(TEST_FILE))
TEST_FOLDER		=	tests/
TEST_FILE		=	tests_rush3.c

CC				=	gcc
CFLAGS			=	-W -Wall -Wextra -g -g3 -ggdb
LDFLAGS			=	-lcriterion --coverage

NAME			=	rush3
TNAME			=	unit_test

RM				=	rm -f

all:	$(OBJ)
		make -C ./lib/my
		$(CC) -o $(NAME) $(OBJ) $(LIB) $(INC)

tests_run:
		make -C ./lib/my
		$(CC) -o $(TNAME) $(SRC2) $(TEST) $(LIB) $(CFLAGS) $(LDFLAGS)
		./$(TNAME)

clean:
		$(RM) $(OBJ)
		make -C ./lib/my clean
		$(RM) $(TNAME) *.gcda *.gcno

fclean:	clean
		make -C ./lib/my fclean
		$(RM) $(NAME)

re:		fclean all

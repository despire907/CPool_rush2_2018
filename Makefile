##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Compilation file
##

SRC	=	step2.c \
        step3.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush2

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(NAME) > auteur

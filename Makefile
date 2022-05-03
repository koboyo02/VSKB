NAME=	main

SRC=	*.c
OBJ=	$(SRC:%.c=%.o)

$(NAME):
	gcc -Wall -Wextra -Werror -std=c11 $(SRC) -o RPG
all: 
	$(NAME)
clean:	
	rm	-f	$(OBJ)
	rm	-fr	RPG
fclean:	
	clean
	rm	-fr RPG
re:	
	fclean all

##
## EPITECH PROJECT, 2019
## makefile.c
## File description:
## makefile
##

NAME 			= 	unit_tests

CC 				= 	gcc

FILE_EXT		=	c

# SRC 			= 	$(shell find src -name '*.cpp')
SRC 			=

OBJ				= 	$(SRC:%.$(FILE_EXT)=%.o)

INCLUDE			=	-I ../include -I ../lib/my/include

CFLAGS 			=   -W -Wall -Wshadow -Wextra -Werror --coverage $(INCLUDE)

LIB_DIR 		= 	../lib/my

LIB				=	-L $(LIB_DIR) -lmy

LDFLAGS 		=	$(LIB) -lcriterion -lgcov

.PHONY:				all build clean fclean re

all:				$(NAME)

$(NAME):			$(OBJ)
					$(MAKE) -C $(LIB_DIR)
					$(CC)	-o $(NAME)	$(OBJ) $(LDFLAGS)
					@$(MAKE) build

build:
					@mkdir -p build/bin
					@mkdir -p build/src
					@mv src/*.o build/src/ 2>/dev/null || :

clean:
					@$(RM) -r build
					$(MAKE) -C $(LIB_DIR) clean
					$(RM) ../src/*.gcda
					$(RM) ../src/*.gcno

fclean:				clean
					$(MAKE) -C $(LIB_DIR) fclean
					@$(RM) $(NAME)

re: 				fclean all
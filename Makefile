##
## EPITECH PROJECT, 2019
## Makfile
## File description:
## root
##

NAME			=	treeforce

CC 				= 	gcc

# SRC 			= 	$(shell find src -name '*.c')
SRC 			= 	$(shell find src/ -name '*.c')

OBJ				= 	$(SRC:%.c=%.o)

INCLUDES		=	-I include -I lib/my/include

CFLAGS			= 	-W -Wall -Wshadow -Wextra -Werror $(INCLUDES)

LIB_DIR 		= 	lib/my

LIB				=	-L $(LIB_DIR) -lmy

LDFLAGS			=	$(LIB)

.PHONY:				release
release:
					$(shell (cd build 2>/dev/null && find src -name "*.o" | while read ligne ; do mkdir -p "../$${ligne%/*}" 2>/dev/null ; mv $$ligne "../$${ligne%/*}" ; done)) 
					$(RM) -r build 2>/dev/null || :
				    $(RM) $(NAME)
				    $(MAKE) all

all:				$(NAME)

$(NAME):			$(OBJ)
					$(MAKE) -C $(LIB_DIR)
					$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)
					$(MAKE) build

.PHONY:				build
build:
					$(shell find src -name "*.o" | while read ligne ;do mkdir -p "build/$${ligne%/*}" 2>/dev/null ; mv $$ligne "build/$${ligne%/*}" ; done)
					mkdir -p build/bin/
					mv $(NAME) build/bin/
					ln -s build/bin/$(NAME) $(NAME)

.PHONY:				clean
clean:
					$(RM) $(OBJ)
					mv build/bin/$(NAME) . 2>/dev/null || :
					$(RM) -r build
					$(MAKE) -C $(LIB_DIR) clean
					$(MAKE) -C $ tests/ clean

.PHONY:				fclean
fclean:				clean
					$(MAKE) -C $(LIB_DIR) fclean
					$(MAKE) -C tests/ fclean
					$(RM) $(NAME)

.PHONY:				re
re: 				fclean all

.PHONY:				tests_run
tests_run:			fclean
					$(MAKE) -C tests
					./tests/unit_tests
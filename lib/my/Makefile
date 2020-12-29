##
## EPITECH PROJECT, 2019
## Makfile
## File description:
## root
##

NAME 		    = 	libmy.a

CC 				= 	gcc

FILE_EXT		=	c

# SRC 			= 	$(shell find src -name '*.cpp')
SRC 			= 	$(shell ls src/*.$(FILE_EXT))

OBJ				= 	$(SRC:%.$(FILE_EXT)=%.o)

INCLUDE			=	-I include

CFLAGS          =   -W -Wall -Wshadow -Wextra -Werror $(INCLUDE)

.PHONY:				release
release:			
					$(shell (cd build 2>/dev/null && find src -name "*.o" | while read ligne ; do mkdir -p "../$${ligne%/*}" 2>/dev/null ; mv $$ligne "../$${ligne%/*}" ; done)) 2>/dev/null || :
					$(RM) -r build 2>/dev/null || :
				    $(RM) $(NAME)
				    $(MAKE) all

.PHONY:				all					
all:				$(NAME)

$(NAME):			$(OBJ)
			        ar rc $(NAME) $(OBJ)
					$(MAKE) build

.PHONY:				build
build:
					$(shell find src -name "*.o" | while read ligne ;do mkdir -p "build/$${ligne%/*}" 2>/dev/null ; mv $$ligne "build/$${ligne%/*}" ; done)

.PHONY:				clean
clean:
					$(RM) -r build

.PHONY:				fclean
fclean:				clean
					$(RM) $(NAME)

.PHONY:				re
re: 				fclean all
NAME = bsq

MY_SOURCES = allocate.c answer.c check_value.c convert_tab.c \
		count.c ft_atoi.c ft_strcmp.c main.c morph_tab.c \
		other.c print_tab.c processing.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

INCLUDES = BSQ.h

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	gcc -Wall -Wextra -Werror $(MY_OBJECTS) -o $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@ -I .

clean:
	/bin/rm -f $(MY_OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

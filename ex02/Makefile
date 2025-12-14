CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = HI_THIS_IS_BRAIN
SOURCES = main.cpp
HEADERS = 
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

debug: CFLAGS += -g3
debug: clean all

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re debug
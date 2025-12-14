CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98  -pedantic
NAME = harlFilter
SOURCES = main.cpp Harl.cpp
HEADERS = Harl.hpp
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
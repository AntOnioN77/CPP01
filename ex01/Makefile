CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ZombieHorde
SOURCES = Zombie.cpp zombieHorde.cpp main.cpp
HEADERS = Zombie.hpp
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
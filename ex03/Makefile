CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Unnecessary_violence
SOURCES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp
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
NAME = diamondtrap

RM = rm -rf

CC = c++
FLAGS = -std=c++98 -Wshadow -Wno-shadow -Wall -Werror -Wextra -I.

SRC =	./ClapTrap.cpp \
		./ScavTrap.cpp \
		./FragTrap.cpp \
		./DiamondTrap.cpp \
		./main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
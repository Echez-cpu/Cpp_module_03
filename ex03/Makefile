SRC= ClapTrap.cpp ScavTrap.cpp main.cpp FragTrap.cpp DiamondTrap.cpp
NAME= odogwu
OBJ= $(SRC:.cpp=.o)

CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

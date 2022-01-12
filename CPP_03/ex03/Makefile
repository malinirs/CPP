NAME	=	ClapTrap
SRC		=	main.cpp \
			ClapTrap.cpp \
			FragTrap.cpp \
			ScavTrap.cpp \
			DiamondTrap.cpp
HEADER	=	ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
OBJ		=	$(SRC:.cpp=.o)
FLAGS	=	-Wall -Wextra -Werror -Wshadow -Wno-shadow -std='c++98'

all: $(NAME)

%.o		:	%.cpp $(HEADER)
	clang++ $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ) $(HEADER)
	clang++ $(FLAGS) $(OBJ) -o $@

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all


.PHONY	:	all clean fclean re
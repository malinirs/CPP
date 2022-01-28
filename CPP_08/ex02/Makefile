NAME	=	Mutated_abomination
SRC		=	main.cpp \
			mutantstack.cpp
HEADER	=	mutantstack.hpp
OBJ		=	$(SRC:.cpp=.o)
FLAGS	=	-Wall -Wextra -Werror

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
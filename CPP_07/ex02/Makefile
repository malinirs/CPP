NAME	=	Array
SRC		=	main.cpp
HEADER	=	Array.hpp
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
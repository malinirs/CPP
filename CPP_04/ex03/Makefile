NAME	=	Materia
SRC		=	main.cpp \
			AMateria.cpp \
			Character.cpp \
			MateriaSource.cpp \
			Cure.cpp \
			Ice.cpp
HEADER	=	AMateria.hpp ICharacter.hpp Character.hpp MateriaSource.hpp IMateriaSource.hpp Cure.hpp Ice.hpp
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
NAME	=	PhoneBook
SRC		=	main.cpp \
			Contact.cpp \
			PhoneBook.cpp

OBJ		=	$(SRC:.cpp=.o)
FLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

%.o		:	%.cpp
	clang++ $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $@

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all


.PHONY	:	all clean fclean re

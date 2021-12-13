NAME		=	Account
SRC			=	Account.cpp \
				tests.cpp
OBJ			=	$(SRC:.cpp=.o)
FLAGS		=	-Wall -Wextra -Werror
NOW			=	$(shell date '+%Y%m%d_%H%M%S')
DEL_LIST	=	.delete.list
LOG_FILES	=	$(shell cat $(DEL_LIST))

all: $(NAME)

%.o		:	%.cpp
	clang++ $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $@

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)
	$(RM) $(LOG_FILES)
	$(RM) $(DEL_LIST)

re		:	fclean all


.PHONY	:	all clean fclean re

#NAME		=	Account
#CC			=	clang++
#CFLAGS		=	-Wall -Wextra -Werror
#SRCS		=	Account.cpp tests.cpp
#OBJS		=	$(SRCS:.cpp=.o)
#NOW			=	$(shell date '+%Y%m%d_%H%M%S')
#DEL_LIST	=	.delete.list
#LOG_FILES	=	$(shell cat $(DEL_LIST))
#
#.PHONY:	all clean fclean re run
#
#all: $(NAME)
#
#$(NAME): $(OBJS)
#	$(CC) $(CFLAGS) $(OBJS) -o $@
#
#%.o: %.cpp
#	$(CC) $(CFLAGS) -c $< -o $@
#
#clean:
#	$(RM) $(OBJS)
#
#fclean: clean
#	$(RM) $(NAME)
#	$(RM) $(LOG_FILES)
#	$(RM) $(DEL_LIST)
#
#re: fclean all
#
#run: all
#	touch $(DEL_LIST)
#	echo $(NOW).log >> $(DEL_LIST)
#	./$(NAME) > $(NOW).log
NAME	= phoneBook

SRC	=	Contact.cpp \
		PhoneBook.cpp \
		addProcess.cpp \
		searchProcess.cpp \
		utils.cpp \
		main.cpp

OBJ		= $(SRC:.cpp=.o)

RM		= rm -rf
CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98

$(NAME) :
		@$(CC) $(FLAGS) -c $(SRC)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all	: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
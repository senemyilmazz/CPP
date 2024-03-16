SRC =	Account.cpp \
		tests.cpp 

OBJ =	$(SRC:.cpp=.o)

NAME = account
RM = rm -rf
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
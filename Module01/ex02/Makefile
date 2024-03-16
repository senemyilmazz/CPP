SRC	=	main.cpp
OBJ	=	$(SRC:.cpp=.o)

NAME =	main
RM	=	rm -rf
CC	=	g++
FLAGS =	-Wall -Wextra -Werror -std=c++98

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o $(OBJ)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all	: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
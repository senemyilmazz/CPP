SRC:	Account.cpp \
		tests.cpp \

OBJ: $(SRC:.cpp=.o)

NAME = account
RM = rm -rf
CC = g++
CFALGS = -Wall -Wextra -Werror -std=c++98

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
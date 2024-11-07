NAME	= 	btc
SRC		= 	main.cpp \
			BitcoinExchange.cpp \
			printExchange.cpp \
			readFile.cpp

OBJ		= 	$(SRC:.cpp=.o)

RM		=	rm -f
CC		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 

%.o: %.cpp
	@$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
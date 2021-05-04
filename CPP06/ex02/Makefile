NAME = test
FILE = main

OBJ = $(patsubst %,%.o,$(FILE))
SRC = $(patsubst %,%.cpp,$(FILE))
CFLAGS = -Wall -Wextra -Werror
CC = clang++ $(CFLAGS)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): %.o:%.cpp 
	$(CC) -c $< -o $@

clean:
	@rm -f $(patsubst %,%.o,$(FILE))

fclean: clean
	@rm -f $(NAME)

re: fclean all%   
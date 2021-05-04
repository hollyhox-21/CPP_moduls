NAME = phonebook
FILE = Book.class \
	    Contact.class \
		main

OBJ = $(patsubst %,%.o,$(FILE))
SRC = $(patsubst %,%.cpp,$(FILE))
CFLAGS = -Wall -Wextra -Werror
CC = clang++ $(CFLAGS)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): %.o:%.cpp ./Book.class.h ./Contact.class.h
	$(CC) -c $< -o $@

clean:
	@rm -f $(patsubst %,%.o,$(FILE))

fclean: clean
	@rm -f $(NAME)

re: fclean all
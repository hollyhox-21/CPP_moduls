NAME = replace
FILE = Main
CC = clang++
FLAGS = -Wall -Werror -Wextra

OBJ = $(patsubst %,%.o,$(FILE))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f ./*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
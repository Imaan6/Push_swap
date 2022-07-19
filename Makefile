CC = cc
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRC = push_swap.c operations.c operations_continued.c sorts.c utilities.c 
OBJSRC = $(SRC)

all : $(NAME)

$(NAME): $(OBJSRC)
	$(CC) $(FLAGS)  $(OBJSRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all
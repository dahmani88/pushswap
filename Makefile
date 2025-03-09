NAME = push_swap

SRCS = ft_sort.c mouvments.c  sor_50.c sort_three.c \
		list_utils.c push_swap.c sort_more_50.c utils.c

OBJ = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)


$(NAME): $(OBJ)
		cc $(OBJ) -o $@

clean:
		@rm -f $(OBJ) $(OBJB)

fclean: clean
		@rm -f $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re
CC 			:= cc
CFLAGS		:= -Wall -Wextra -Werror
DEBUGFLAGS	:= -g -O0

SRCS		:= main.c
OBJS		:= $(SRCS:.c=.o)

LIBFT		:= ft_printf/libftprintf.a

NAME		:= push_swap

all: $(NAME)

$(NAME): $(LIBFT) 
	$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C ft_printf

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re


CC 			:= cc
CFLAGS		:= -Wall -Wextra -Werror -Iincludes -Ift_printf
DEBUGFLAGS	:= -g -O0

SRCS		:= 	push_swap.c \
				stack_utils.c \
				algorithms/simple/simple_algo.c \
				operations/push.c \
				operations/swap.c \
				operations/rotate.c \
				operations/reverse_rotate.c \

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

bonus:
	$(MAKE) -C bonus

.PHONY: all clean fclean re bonus

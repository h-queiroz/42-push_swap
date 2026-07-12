CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
DEBUGFLAGS	:= -g -O0

NAME		:= ../checker

SRCS		:= bonus.c

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

debug:
	$(CC) $(CFLAGS) $(DEBUGFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

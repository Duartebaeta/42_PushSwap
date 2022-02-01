NAME = pushswap.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = push_swap.c main.c \

OBJS = *.o
LIBS = ../libft/libft.h
LIBFT = ../libft
RM = rm -f

.o: $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

pushswap:
	$(CC) $(CFLAGS) push_swap.o main.o -o pushswap

all: $(NAME)

$(NAME): $(OBJS)
		@make -C $(LIBFT)
		@cp libft/libft.a ./$(NAME)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)

clean:
		@rm -f $(OBJS)
		@make clean -C $(LIBFT)

fclean: clean
		@rm -f $(NAME)
		@make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re libs pushswap



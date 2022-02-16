NAME = push_swap
#Compiling
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFTFLAG = -L$(PATH_LIBFT) -lft
#Paths
PATH_BUILD = ./build
PATH_SRC = ./src
PATH_OBJS = $(PATH_BUILD)/objs
PATH_BIN = $(PATH_BUILD)/bin
PATH_UTILS = $(PATH_SRC)/utils
PATH_LIBFT = ./libft
#Getting all the .c files and turning them into .o files
BIN = $(PATH_BIN)/$(NAME)
SRCS = $(wildcard $(PATH_SRC)/*.c)
OBJ = $(subst .c,.o,$(subst $(PATH_SRC), $(PATH_OBJS), $(SRCS)))
SRCS_UTILS = $(wildcard $(PATH_UTILS)/*.c)
OBJ_UTILS = $(subst .c,.o,$(subst $(PATH_UTILS), $(PATH_OBJS), $(SRCS_UTILS)))
LIBFT = $(PATH_LIBFT)/libft.a

all:$(BIN)

$(BIN): $(OBJ) $(OBJ_UTILS) | $(LIBFT) $(PATH_BIN)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFTFLAG)

$(OBJ): $(PATH_SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_UTILS): $(PATH_UTILS)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
		@make -C $(PATH_LIBFT)

$(PATH_BUILD):
		@mkdir -p $(PATH_BUILD)
		@mkdir -p $(PATH_OBJS) $(PATH_BIN)

clean:
		@rm -rf $(PATH_OBJS)

fclean: clean
		@rm -rf $(PATH_BUILD)
		@make fclean -C $(PATH_LIBFT)

re: fclean all
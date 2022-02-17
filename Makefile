NAME := push_swap
#Compiling
CC := gcc
CFLAGS := -Wall -Wextra -Werror
LIBFTFLAG := -L$(PATH_LIBFT) -lft
#Paths
PATH_BUILD := ./build
PATH_SRC := ./srcs
PATH_OBJS := $(PATH_BUILD)/objs
PATH_OBJS_UTILS := $(PATH_BUILD)/objs_utils
PATH_BIN := $(PATH_BUILD)/bin
PATH_UTILS := $(PATH_SRC)/utils
PATH_LIBFT := ./libft
PATH_INCLUDES := ./includes
#Getting all the .c files and turning them into .o files
BIN := $(PATH_BIN)/$(NAME)
SRCS := $(wildcard $(PATH_SRC)/*.c)

OBJ := $(subst .c,.o,$(subst $(PATH_SRC), $(PATH_OBJS), $(SRCS)))
SRCS_UTILS := $(wildcard $(PATH_UTILS)/*.c)
OBJ_UTILS = $(subst .c,.o,$(subst $(PATH_UTILS), $(PATH_OBJS_UTILS), $(SRCS_UTILS)))
LIBFT := $(PATH_LIBFT)/libft.a

all:$(BIN)

$(BIN): $(OBJ) $(OBJ_UTILS) | $(LIBFT) $(PATH_BIN)
	$(CC) $(CFLAGS) -o $(@) $^ -L$(PATH_LIBFT) -lft -I$(PATH_INCLUDES)

$(PATH_OBJS)/%.o: $(PATH_SRC)/%.c | $(PATH_BUILD)
	$(CC) $(CFLAGS) -c $(^) -o $@

$(PATH_OBJS_UTILS)/%.o: $(PATH_UTILS)/%.c | $(PATH_BUILD)
	$(CC) $(CFLAGS) -c $(^) -o $@

$(LIBFT):
		@make -C $(PATH_LIBFT)

$(PATH_BUILD):
		@mkdir -p $(PATH_BUILD)
		@mkdir -p $(PATH_OBJS) $(PATH_BIN) $(PATH_OBJS_UTILS)

clean:
		@rm -rf $(PATH_OBJS)

fclean: clean
		@rm -rf $(PATH_BUILD)
		@make fclean -C $(PATH_LIBFT)

re: fclean all
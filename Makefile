NAME := push_swap
#Compiling
CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror
#Paths
PATH_BUILD		:= ./build
PATH_SRC		:= ./srcs
PATH_OBJS		:= $(PATH_BUILD)/objs
PATH_OBJS_UTILS	:= $(PATH_BUILD)/objs_utils
PATH_UTILS		:= $(PATH_SRC)/utils
PATH_LIBFT		:= ./libft
PATH_INCLUDES	:= ./includes
#Getting all the .c files and turning them into .o files
BIN				:= ./$(NAME)
SRCS			:= $(wildcard $(PATH_SRC)/*.c)
OBJ				:= $(subst .c,.o,$(subst $(PATH_SRC), $(PATH_OBJS), $(SRCS)))
SRCS_UTILS		:= $(wildcard $(PATH_UTILS)/*.c)
OBJ_UTILS		:= $(subst .c,.o,$(subst $(PATH_UTILS), $(PATH_OBJS_UTILS), $(SRCS_UTILS)))
LIBFT			:= $(PATH_LIBFT)/libft.a

all:$(BIN)

$(BIN): $(OBJ) $(OBJ_UTILS) | $(LIBFT)
		@$(CC) $(CFLAGS) -o $(@) $^ -L$(PATH_LIBFT) -lft -I$(PATH_INCLUDES)

$(PATH_OBJS)/%.o: $(PATH_SRC)/%.c | $(PATH_BUILD)
		@printf "\033[33m[CREATING ${@F}]\033[0m\n"
		@$(CC) $(CFLAGS) -c $(^) -o $@

$(PATH_OBJS_UTILS)/%.o: $(PATH_UTILS)/%.c | $(PATH_BUILD)
		@printf "\033[33m[CREATING ${@F}]\033[0m\n"
		@$(CC) $(CFLAGS) -c $(^) -o $@

$(LIBFT):
		@make -C $(PATH_LIBFT)

$(PATH_BUILD):
		@mkdir -p $(PATH_BUILD)
		@mkdir -p $(PATH_OBJS) $(PATH_OBJS_UTILS)

clean:
		@printf "\033[38;5;1m[REMOVING OBJECTS]\033[0m\n"
		@rm -rf $(PATH_OBJS)

fclean: clean
		@printf "\033[38;5;1m[REMOVING BINARIES]\033[0m\n"
		@rm -rf $(PATH_BUILD) $(NAME)
		@make fclean -C $(PATH_LIBFT)

re: fclean all
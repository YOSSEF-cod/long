NAME = so_long
CC = cc
FLAGS =  -Wall -Wextra -Werror #-g3 -fsanitize=address
LIBS = -lmlx -lXext -lX11 -lm -lbsd

# Path to the libft static library
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Source files (from the bonus directory and root directory)
SIRC = bonus/get_next_line.c bonus/initi_structer.c bonus/so_long_bonus.c bonus/so_utlis.c \
	    bonus/check_file_name.c bonus/full_maps.c bonus/check_maps.c bonus/check_map_utlis.c \
		bonus/check_flood_fill.c bonus/initialization_enverment.c bonus/texture_loader.c \
		bonus/handle_key_press_events.c bonus/control_key_press.c bonus/close_window.c bonus/free_map.c 
OBJS = $(SIRC:.c=.o)

# Link with libft.a
LIBS += $(LIBFT)

# Rule to build the final executable
all: $(LIBFT) $(NAME)

# Rule to link the final executable with all object files and libft
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(LIBS) -o $(NAME)

# Rule to compile source files in the bonus/ directory
bonus/%.o: bonus/%.c
	$(CC) $(FLAGS) -c $< -o $@

# Rule to compile source files in the root directory
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Rule to build libft.a (called automatically by main target)
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Rule to clean object files for the main project
clean:
	rm -f $(OBJS)

# Rule to clean the main project and libft
fclean: clean
	# Clean libft
	$(MAKE) -C $(LIBFT_DIR) fclean
	# Remove the executable
	rm -f $(NAME)

# Rule to recompile everything
re: fclean all

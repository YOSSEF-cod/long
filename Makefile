NAME = so_long
CC = cc
FLAGS =  -Wall -Wextra -Werror
LIBS = -lmlx -lXext -lX11 -lm -lbsd

# Path to the libft static library
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
libftprintf_DIR = ft_printf
libftprintf = $(libftprintf_DIR)/libftprintf.a
# src/so_long_src.o
SIRC =	src/get_next_line.c src/initi_structer.c src/so_long.c src/so_utlis.c \
		src/check_file_name.c src/full_maps.c src/check_maps.c src/check_map_utlis.c \
		src/check_flood_fill.c src/initialization_enverment.c src/texture_loader.c \
		src/handle_key_press_events.c src/control_key_press.c src/close_window.c src/update_player_animation.c \
		src/put_string_window.c src/texture_loader_plyer2.c bonus/free_map.c  

# SRCSB = bonus/get_next_line.c bonus/initi_structer.c bonus/so_long_bonus.c bonus/so_utlis.c \
# 		bonus/check_file_name.c bonus/full_maps.c bonus/check_maps.c bonus/check_map_utlis.c \
# 		bonus/check_flood_fill.c bonus/initialization_enverment.c bonus/texture_loader.c \
# 		bonus/handle_key_press_events.c bonus/control_key_press.c bonus/close_window.c bonus/update_player_animation.c \
# 		bonus/put_string_window.c bonus/updat_animatoin_bonus.c bonus/texture_loader_plyer2.c bonus/free_map.c  
OBJS = $(SIRC:.c=.o)
# OBJSBNS = $(bonus:.c=.o)s	

# Link with libft.a
LIBS += $(LIBFT)
LIBS += $(libftprintf)

# Rule to build the final executable
all: $(LIBFT) $(libftprintf) $(NAME)

bonus: $(OBJSB)
	ar rcs $(NAME) $(OBJSB)
# Rule to link the final executable with all object files and libft
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(LIBS) -o $(NAME)

# # Rule to compile source files in the bonus/ directory
# bonus/%.o: bonus/%.c
# 	$(CC) $(FLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) all
$(libftprintf):
	$(MAKE) -C $(libftprintf_DIR) all

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(libftprintf_DIR) clean

fclean: clean
	# Clean libft
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(libftprintf_DIR) fclean
	rm -f $(NAME)

re: fclean all

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:34:07 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/20 15:44:26 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "../libft/libft.h"
# include "get_next_line.h"
# include <stdio.h>
# include <mlx.h>
# include <unistd.h>
# include <fcntl.h>
# include <X11/X.h>

enum	e_key_pord
{
	FRONT = 0,
	BACK = 1,
	LEFT = 2,
	RIGTH = 3,
	ESCAPE = 65307,
	KEY_UP = 119,
	KEY_DOWN = 115,
	KEY_LEFT = 97,
	KEY_RIGHT = 100,
};

typedef struct s_map
{
	int		x;
	int		y;
	int		fd;
	int		rows;
	int		length_of_line;
	int		player_x;
	int		player_y;
	int		exit_x;
	int		exit_y;
	char	**cpy_map;
	char	**map;
}	t_maps;

typedef struct s_animation_player
{
	void	*plyer_front[3];
	void	*plyer_back[3];
	void	*plyer_right[3];
	void	*plyer_left[3];
	int		current_frame;
	int		direction;
	int		animation_speed;
	int		counter_player;
	int		is_moving;
	int		not_move;
}	t_player;

typedef struct s_imag
{
	void	*imag_wall;
	void	*imag_floor;
	void	*imag_lives;
	void	*imag_pack;
	void	*imag_coin[9];
	void	*imag_exit[9];
}	t_imags;

typedef struct s_data_window
{
	void	*mlx;
	void	*mlx_win;// put window
	void	*imag_wall;
	void	*imag_coin[8];
	void	*imag_floor;
	void	*imag_exit[9];
	void	*imag_lives;
	void	*imag_pack;
	int		img_w;
	int		img_h;
	int		player_x;
	int		player_y;
	int		exit_x;
	int		exit_y;
	int		collected_coins;
	int		total_coins;
	int		player_coins;
	t_maps	*t_map;
	// t_imags *t_imag;
	t_player	*t_plyer;
	int		lives;
	int		moves;
	int		timer_player;
	int		animation_frame;
	int		coin_frame;
	int		counter_coins;
}	t_window;

typedef struct s_check_hase_characters
{
	int	has_player;
	int	hase_exit;
	int	collectible;
	int	x;
	int	y;
}	t_check_hase_charc;
// init structer
void	initi_structer_map(t_maps *t_maps);
void	initi_struct_image(t_imags *t_imag);
void	initi_structer_check_hase_characters(t_check_hase_charc *data_caracter);
void	initi_structer_window(t_window *win, t_maps *t_map);
// chech_file_name
void	check_file_name(char *file_name);
int		check_filename_ber(char *file_name, char *str);
//check maps  5
int		check_valid_maps(char *file, t_maps *t_map);
int		validate_map(t_maps *t_map);
int		check_valid_characters(char **map, int rows, int columns);
int		check_bounderies(char **map, int rows, int columns);
int		is_rectangular(char **map, int rows);
// check map utlis
int		calcul_length_of_line(char **map);
int		count_line(int fd);
int		check_if_one_player_exit_collectible(char **map, int length, int rows);
int		check_if_close_plyer(t_maps *d_map);
// full maps 
char	**full_map(int fd, int rows);
// chech_flood_fill 3
int		check_if_close_plyer(t_maps *d_map);
void	player_position(t_maps *d_map);
void	flood_fill(t_maps *maps, int x, int y);
// initailization enverament 
void	initialization_enverment(t_window *win, t_maps t_map);
// texture loder
void	texture_loader(t_window *win, t_maps *t_map);
int		texture_loader_exit(t_window *win);
int		texture_loader_coins(t_window *win);
int		texture_loader_plyer(t_window *win);
// push imag
void	push_image_to_window(t_window *win, t_maps t_map);
// free map 
void	ft_free_map(char **map, int rows);
// void 	print_map(char **map, int length);
// so_utlis.c
int		calcu_how_many_coins(t_maps *t_map);
// control_key_press
int		control_key_(int keycode, t_window *window);
// handle_key_press_events
void	check_for_coins_exit(t_window *window);
void	init_key_word(t_window *win, char c);
void	handle_key_press_events(int keycode, t_window *win);
void	handle_key_press_events_not_exit(int keycode, t_window *win);
// closw window
int		close_window(t_window *win);

#endif
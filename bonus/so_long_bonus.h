/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:34:07 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/18 16:41:02 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

// # include "../libft/libft.h"
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

typedef struct t_check_hase_characters
{
	int has_player;
    int hase_exit;
	int collectible;
    int x;
    int y;
} check_hase_characters;
// init structer
void	initi_structer_map(t_maps *t_maps);
void	Initi_structer_check_hase_characters(check_hase_characters *data_caracter);

// chech_file_name
void	check_file_name(char *file_name);
int		check_filename_ber(char *file_name, char *str);
//check maps  5
int		check_valid_maps(char *file, t_maps *t_map);
int		validate_map(t_maps *t_map);
int		check_valid_characters(char **map, int rows,int columns);
int		check_bounderies(char **map, int rows, int columns);
int		is_rectangular(char **map, int rows);
// check map utlis
int		calcul_length_of_line(char **map);
int 	count_line(int fd);
int		check_if_one_player_exit_collectible(char **map, int length, int rows);
int		check_if_close_plyer(t_maps *d_map);

// full maps 
char	**full_map(int	fd, int	rows);
// chech_flood_fill 3
int	check_if_close_plyer(t_maps *d_map);
void	Player_Position(t_maps *d_map);
void	flood_fill(char **maps, int x, int y, int rows, int length_of_line);
// free map gg
void	ft_free_map(char **map, int rows);
void 	print_map(char **map, int length);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initi_structer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:42:33 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/20 15:43:11 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	initi_structer_map(t_maps *t_map)
{
	t_map->fd = 0;
	t_map->x = 0;
	t_map->y = 0;
	t_map->rows = 0;
	t_map->length_of_line = 0;
	t_map->exit_x = 0;
	t_map->exit_y = 0;
	t_map->player_x = 0;
	t_map->player_y = 0;
	t_map->map = NULL;
	t_map->cpy_map = NULL;
}
void	initi_struct_image_plyer(t_player *t_plyer)
{
	t_plyer->animation_speed = 5;
	t_plyer->current_frame = 0;
	t_plyer->direction = 0;
	t_plyer->is_moving = 0;
	t_plyer->counter_player = 0;
	t_plyer->plyer_back[0] = NULL;
	t_plyer->plyer_back[1] = NULL;
	t_plyer->plyer_back[2] = NULL;
	t_plyer->plyer_left[0] = NULL;
	t_plyer->plyer_left[1] = NULL;
	t_plyer->plyer_left[2] = NULL;
	t_plyer->plyer_front[0] = NULL;
	t_plyer->plyer_front[1] = NULL;
	t_plyer->plyer_front[2] = NULL;
	t_plyer->plyer_right[0] = NULL;
	t_plyer->plyer_right[1] = NULL;
	t_plyer->plyer_right[2] = NULL;
}
void	initi_structer_check_hase_characters(t_check_hase_charc *data_caracter)
{
	data_caracter->collectible = 0;
	data_caracter->has_player = 0;
	data_caracter->hase_exit = 0;
	data_caracter->x = 0;
	data_caracter->y = 0;
}

void	initi_struct_image(t_imags *t_imag)
{
	t_imag->imag_coin[0] = NULL;
	t_imag->imag_coin[1] = NULL;
	t_imag->imag_coin[2] = NULL;
	t_imag->imag_coin[3] = NULL;
	t_imag->imag_coin[4] = NULL;
	t_imag->imag_coin[5] = NULL;
	t_imag->imag_coin[6] = NULL;
	t_imag->imag_coin[7] = NULL;
	t_imag->imag_coin[8] = NULL;
	t_imag->imag_floor = NULL;
	t_imag->imag_lives = NULL;
	t_imag->imag_wall = NULL;
	t_imag->imag_pack = NULL;
	t_imag->imag_exit[0] = NULL;
	t_imag->imag_exit[1] = NULL;
	t_imag->imag_exit[2] = NULL;
	t_imag->imag_exit[3] = NULL;
	t_imag->imag_exit[4] = NULL;
	t_imag->imag_exit[5] = NULL;
	t_imag->imag_exit[6] = NULL;
	t_imag->imag_exit[7] = NULL;
	t_imag->imag_exit[8] = NULL;
}

void	initi_structer_window(t_window *win, t_maps *d_map)
{
	t_player *player = malloc(sizeof(t_player));
	if (!player)
	{
		perror("\nError: Memory allocation failed\n");
		ft_free_map(d_map->map, d_map->rows);
		exit(EXIT_FAILURE);
	}
	initi_struct_image_plyer(player);
	// initi_struct_image_coin(win);
	// initi_structer_image(win);
	win->imag_coin[0] = NULL;
	win->imag_coin[1] = NULL;
	win->imag_coin[2] = NULL;
	win->imag_coin[3] = NULL;
	win->imag_coin[4] = NULL;
	win->imag_coin[5] = NULL;
	win->imag_coin[6] = NULL;
	win->imag_coin[7] = NULL;
	win->imag_coin[8] = NULL;
	win->imag_floor = NULL;
	win->imag_lives = NULL;
	win->imag_wall = NULL;
	win->imag_pack = NULL;
	win->imag_exit[0] = NULL;
	win->imag_exit[1] = NULL;
	win->imag_exit[2] = NULL;
	win->imag_exit[3] = NULL;
	win->imag_exit[4] = NULL;
	win->imag_exit[5] = NULL;
	win->imag_exit[6] = NULL;
	win->imag_exit[7] = NULL;
	win->imag_exit[8] = NULL;
	// initi_struct_image(t_imag);
	win->mlx_win = NULL;
	win->mlx = NULL;
	win->img_h = 0;
	win->img_w = 0;
	win->player_x = d_map->player_x;
	win->player_y = d_map->player_y;
	win->exit_x = 0;
	win->exit_y = 0;
	win->collected_coins = 0;
	win->player_coins = 0;
	win->total_coins = 0;
	win->lives = 3;
	win->moves = 0;
	win->t_map = d_map;
	win->timer_player = 0; //
	win->animation_frame = 0;
	win->coin_frame = 0;
	win->t_plyer = player;
}

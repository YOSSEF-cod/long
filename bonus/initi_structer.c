/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initi_structer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:42:33 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/18 21:28:27 by ybounite         ###   ########.fr       */
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
void	initi_structer_check_hase_characters(t_check_hase_charc *data_caracter)
{
	data_caracter->collectible = 0;
	data_caracter->has_player = 0;
	data_caracter->hase_exit = 0;
	data_caracter->x = 0;
	data_caracter->y = 0;
}
void	initi_structer_imag(t_imags *t_imag)
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
void	initi_structer_window(t_window *win, t_maps *t_map)
{
	// anim_plyer *player = malloc(sizeof(anim_plyer));
	// if (!player)
	// {
	// 	perror("\nError: Memory allocation failed for anim_plyer\n");
	// 	exit(EXIT_FAILURE);
	// }
	// initi_struct_image_plyer(player);
	// initi_struct_image_coin(win);
	// initi_structer_image(win);
	initi_struct_image(win->t_imag);
	win->mlx_win = NULL;
	win->mlx = NULL;
	win->imag_wall = NULL;
	win->imag_plyer = NULL;
	win->imag_coin = NULL;
	win->imag_floor = NULL
	win->imag_lives = NULL;
	win->img_h = 0;
	win->img_w = 0;
	win->player_x = t_map->player_x;
	win->player_y = t_map->player_y;
	win->exit_x = 0;
	win->exit_y = 0;
	win->collected_coins = 0;
	win->player_coins = 0;
	win->total_coins = 0;
	win->lives = 3;
	win->moves = 0;
	win->data_map = t_map;
	win->timer_player = 0; //
	win->animation_frame = 0;
	win->coin_frame = 0;
	// win->t_plyer = player;
}

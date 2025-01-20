/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_loader.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:44:21 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/20 15:43:49 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	texture_loader_exit(t_window *win)
{
	win->imag_exit[0] = mlx_xpm_file_to_image(win->mlx,
			"/home/ybounite/goinfre/long/textures/clons/exit.xpm",
			&win->img_w, &win->img_h);
	win->imag_exit[1] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/clons/exit_2.xpm",
			&win->img_w, &win->img_h);
	win->imag_exit[2] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/clons/exit_3.xpm",
			&win->img_w, &win->img_h);
	win->imag_exit[3] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/clons/exit_4.xpm",
			&win->img_w, &win->img_h);
	win->imag_exit[4] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/clons/exit_5.xpm",
			&win->img_w, &win->img_h);
	win->imag_exit[5] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/clons/exit_6_back.xpm",
			&win->img_w, &win->img_h);
	win->imag_exit[6] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/clons/exit_7_black.xpm",
			&win->img_w, &win->img_h);
	win->imag_exit[7] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/clons/exit_8_black.xpm",
			&win->img_w, &win->img_h);
	win->imag_exit[8] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/clons/exit_9.xpm",
			&win->img_w, &win->img_h);
	if (!win->imag_exit[0] || !win->imag_exit[1] || !win->imag_exit[2]
		|| !win->imag_exit[3] || !win->imag_exit[4] || !win->imag_exit[5]
		|| !win->imag_exit[6] || !win->imag_exit[7] || !win->imag_exit[8])
		return (perror("Error loading image exit"), 1);
	return (0);
}

int	texture_loader_plyer(t_window *win)
{
	win->t_plyer->plyer_back[0] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_10.xpm",
			&win->img_w, &win->img_h);
	win->t_plyer->plyer_back[1] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_11.xpm",
			&win->img_w, &win->img_h);
	win->t_plyer->plyer_back[2] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_12.xpm",
			&win->img_w, &win->img_h);
	if (!win->t_plyer->plyer_back[0] || !win->t_plyer->plyer_back[1]
		|| !win->t_plyer->plyer_back[2])
		return (perror("\nError loading image plyer back !\n"), 1);
	win->t_plyer->plyer_front[0] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_1.xpm",
			&win->img_w, &win->img_h);
	win->t_plyer->plyer_front[1] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_2.xpm",
			&win->img_w, &win->img_h);
	win->t_plyer->plyer_front[2] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_3.xpm",
			&win->img_w, &win->img_h);
	if (!win->t_plyer->plyer_front[0] || !win->t_plyer->plyer_front[1]
		|| !win->t_plyer->plyer_front[2])
		return (perror("\nError loading image plyer front !\n"), 1);
	win->t_plyer->plyer_left[0] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_4.xpm",
			&win->img_w, &win->img_h);
	win->t_plyer->plyer_left[1] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_5.xpm",
			&win->img_w, &win->img_h);
	win->t_plyer->plyer_left[2] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_6.xpm",
			&win->img_w, &win->img_h);
	if (!win->t_plyer->plyer_left[0] || !win->t_plyer->plyer_left[1]
		|| !win->t_plyer->plyer_left[2])
		return (perror("\nError loading image plyer left !\n"), 1);
	win->t_plyer->plyer_right[0] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_7.xpm",
			&win->img_w, &win->img_h);
	win->t_plyer->plyer_right[1] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_8.xpm",
			&win->img_w, &win->img_h);
	win->t_plyer->plyer_right[2] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/plyer/plyer_9.xpm",
			&win->img_w, &win->img_h);
	if (!win->t_plyer->plyer_right[0] || !win->t_plyer->plyer_right[1]
		|| !win->t_plyer->plyer_right[2])
		return (perror("Error:\nloading image plyer right !\n"), 1);
	return (0);
}

int	texture_loader_coins(t_window *win)
{
	// open window 
	win->imag_coin[0] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/coin/open_win_coin_1.xpm",
			&win->img_w, &win->img_h);
	win->imag_coin[1] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/coin/open_win_coin_2.xpm",
			&win->img_w, &win->img_h);
	win->imag_coin[2] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/coin/open_win_coin_3.xpm",
			&win->img_w, &win->img_h);
	if (!win->imag_coin[0] || !win->imag_coin[1] || !win->imag_coin[2])
		return (perror("Error:\nloading image open win coins  left !\n"), 1);
	// loop coins 
	win->imag_coin[3] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/coin/coin_1.xpm",
			&win->img_w, &win->img_h);
	win->imag_coin[4] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/coin/coin_2.xpm",
			&win->img_w, &win->img_h);
	win->imag_coin[5] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/coin/coin_3.xpm",
			&win->img_w, &win->img_h);
	win->imag_coin[6] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/coin/coin_4.xpm",
			&win->img_w, &win->img_h);
	win->imag_coin[7] = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/coin/coin_5.xpm",
			&win->img_w, &win->img_h);
	if (!win->imag_coin[3] || !win->imag_coin[4] || !win->imag_coin[5]
		|| !win->imag_coin[6] || !win->imag_coin[7])
		return (perror("Error:\nloading loop image coins left !\n"), 1);
	return (0);
}

void	texture_loader(t_window *win, t_maps *d_map)
{
	win->imag_wall = mlx_xpm_file_to_image(win->mlx,
			"/home/ybounite/goinfre/long/textures/wall.xpm",
			&win->img_w, &win->img_h);
	win->imag_floor = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/floor.xpm",
			&win->img_w, &win->img_h);
	win->imag_lives = mlx_xpm_file_to_image(win->mlx,
			"/goinfre/ybounite/long/textures/lives.xpm",
			&win->img_w, &win->img_h);
	if (!win->imag_wall || !win->imag_floor || !win->imag_lives
		|| texture_loader_coins(win) || texture_loader_plyer(win)
		|| texture_loader_exit(win))
	{
		perror("Error\nloading image\n");
		// mlx_destroy_window(win->mlx, win->mlx_win);
		ft_free_map(d_map->map, d_map->rows);
		// free(win->player);
		exit(EXIT_FAILURE);
	}
}

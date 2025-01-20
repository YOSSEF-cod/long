/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization_enverment.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 21:12:23 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/19 18:41:39 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	push_image_to_window(t_window *win, t_maps t_map)
{
	int (x), (y);
	x = 0;
	while (x < t_map.rows)
	{
		y = 0;
		while (y < t_map.length_of_line)
		{
			if (t_map.map[x][y] == '1')
				mlx_put_image_to_window(win->mlx, win->mlx_win,
					win->imag_wall, y * 64, x * 64);
			else if (t_map.map[x][y] == 'P')
				mlx_put_image_to_window(win->mlx, win->mlx_win,
					win->t_plyer->plyer_front[0], y * 64, x * 64);
			else if (t_map.map[x][y] == '0')
				mlx_put_image_to_window(win->mlx, win->mlx_win,
					win->imag_floor, y * 64, x * 64);
			else if (t_map.map[x][y] == 'E')
				mlx_put_image_to_window(win->mlx, win->mlx_win,
					win->imag_exit[0], y * 64, x * 64);
			else if (t_map.map[x][y] == 'C')
				mlx_put_image_to_window(win->mlx, win->mlx_win,
					win->imag_coin[0], y * 64, x * 64);
			y++;
		}
		x++;
	}
}

void	initialization_enverment(t_window *win, t_maps t_map)
{
	win->mlx = mlx_init();
	if (!win->mlx)
	{
		perror("Error initializing MLX");
		exit(1);
	}
	win->mlx_win = mlx_new_window(win->mlx,
			t_map.length_of_line * 64, t_map.rows * 64, "so_long");
	if (!win->mlx_win)
	{
		ft_putstr_fd("Error:\nFailed to create window\n", 2);
		mlx_destroy_window(win->mlx, win->mlx_win);
	}
	texture_loader(win, &t_map);
	push_image_to_window(win, t_map);
	win->total_coins = calcu_how_many_coins(&t_map);
}

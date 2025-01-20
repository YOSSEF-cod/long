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

void	initialization_enverment(t_window *win, t_maps t_map)
{
	win->mlx = mlx_init();
	if (!win->mlx)
	{
		perror("Error initializing MLX");
		exit(1);
	}
	win->mlx_win = mlx_new_window(win->mlx, t_map.length_of_line * 64, t_map.rows * 64, "so_long");
	if (!win->mlx_win)
	{
		ft_putstr_fd("Error:\nFailed to create window\n", 2);
		mlx_destroy_window(win->mlx, win->mlx_win);
	}
	texture_loader(win, &t_map);
	// push_image_to_window(win, t_map);
	// win->total_coins = calcu_how_many_coins(&t_map);
}

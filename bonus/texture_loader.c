/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_loader.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:44:21 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/19 19:06:03 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	texture_loader(t_window *win, t_maps *d_map)
{
	win->t_imag->imag_wall = mlx_xpm_file_to_image(win->mlx, "../textures/wall.xmp", &win->img_w, &win->img_h);
	// win->t_imag->imag_floor = mlx_xpm_file_to_image(win->mlx, "../textures/floor.xpm", &win->img_w, &win->img_h);
	// texture_loader_exit(data_win, d_map);
	// texture_loader_plyer(data_win, d_map);
	// texture_loader_coins(data_win, d_map);
	// win->t_imag->imag_lives = mlx_xpm_file_to_image(win->mlx, "../textures/lives.xmp", &win->img_w, &win->img_h);
	if (!win->t_imag->imag_wall)
	{
		perror("Error:\nloading image");
		mlx_destroy_window(win->mlx, win->mlx_win);
		ft_free_map(d_map->map, d_map->rows);
	}
}

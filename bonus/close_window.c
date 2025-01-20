/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:19:20 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/20 18:19:21 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"
void	free_data_window(t_window *win)
{
	int i;

	i = 0;
	mlx_destroy_image(win->mlx, win->imag_wall);
	win->imag_wall =NULL;
	mlx_destroy_image(win->mlx, win->imag_floor);
	win->imag_floor = NULL;
	mlx_destroy_image(win->mlx, win->imag_lives);
	win->imag_lives = NULL;
	while (i < 8)
	{
		if (i < 3)
		{
			mlx_destroy_image(win->mlx, win->t_plyer->plyer_back[i]);
			win->t_plyer->plyer_back[i] = NULL;
			mlx_destroy_image(win->mlx, win->t_plyer->plyer_front[i]);
			win->t_plyer->plyer_front[i] = NULL;
			mlx_destroy_image(win->mlx, win->t_plyer->plyer_left[i]);
			win->t_plyer->plyer_left[i] = NULL;
			mlx_destroy_image(win->mlx, win->t_plyer->plyer_right[i]);
			win->t_plyer->plyer_right[i] = NULL;
		}
		mlx_destroy_image(win->mlx, win->imag_coin[i]);
		win->imag_coin[i] = NULL;
		mlx_destroy_image(win->mlx, win->imag_exit[i]);
		win->imag_exit[i] = NULL;
		i++;
	}
	mlx_destroy_image(win->mlx, win->imag_exit[8]);
	win->imag_exit[8] = NULL;
}

int	close_window(t_window *win)
{
	ft_free_map(win->t_map->map, win->t_map->rows);
	free_data_window(win);
	mlx_destroy_window(win->mlx, win->mlx_win);
	free(win->t_plyer);
	exit(EXIT_SUCCESS);
	return (0);
}

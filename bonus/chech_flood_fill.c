/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chech_flood_fill.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:31:06 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/18 16:33:15 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	flood_fill(char **maps, int x, int y, int rows, int length_of_line)
{
	if (x < 0 || x >= rows || y < 0 || y >= length_of_line || maps[x][y] == '1' || maps[x][y] == 'F')
		return ;
	maps[x][y] = 'F';
	flood_fill(maps, x + 1, y, rows, length_of_line);
	flood_fill(maps, x - 1, y, rows, length_of_line);
	flood_fill(maps, x, y + 1, rows, length_of_line);
	flood_fill(maps, x, y - 1, rows, length_of_line);
}

void	Player_Position(t_maps *d_map)
{
	int	x;
	int	y;

	x = 0;
	while (x < d_map->rows)
	{
		y = 0;
		while (y < d_map->length_of_line)
		{
			if (d_map->map[x][y] == 'P')
			{
				d_map->player_x = x;
				d_map->player_y = y;
			}
			if (d_map->map[x][y] == 'E')
			{
				d_map->exit_x = x;
				d_map->exit_y = y;
			}
			y++;
		}
		x++;
	}
}

int	check_if_close_plyer(t_maps *d_map)
{
	int	x;
	int	y;

	x = 0;
	Player_Position(d_map);
	flood_fill(d_map->cpy_map, d_map->player_x, d_map->player_y,
		d_map->rows, d_map->length_of_line);
	while (x < d_map->rows)
	{
		y = 0;
		while (y < d_map->length_of_line)
		{
			if (d_map->cpy_map[x][y] == 'C' || d_map->cpy_map[x][y] == 'E')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}
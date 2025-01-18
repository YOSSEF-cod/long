/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initi_structer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:42:33 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/18 10:48:09 by ybounite         ###   ########.fr       */
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

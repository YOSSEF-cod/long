/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:08:44 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/25 10:42:05 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_map(char **map, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_maps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:27:46 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/18 14:48:01 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	count_line(int fd)
{
	int		count_line;
	char	*line;

	count_line = 0;
	line = get_next_line(fd);
	while (line)
	{
		count_line++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (count_line);
}

int	check_valid_maps(char *file, t_maps *t_map)
{
	t_map->fd = open(file, O_RDONLY);
	if (t_map->fd < 0)
		return (ft_putstr_fd("Error:\nUnable to open file!\n", 2), 0);
	t_map->rows = count_line(t_map->fd);
	if (t_map->rows == 0)
		return (close(t_map->fd),
			ft_putstr_fd("Error:\nthis file is empty!\n", 2), 0);
	printf("\n%d\n", t_map->rows);
	// t_map->fd = open(file, O_RDONLY);// open file
	// t_map->map = full_map(t_map->fd, t_map->rows);
	// t_map->fd = open(file, O_RDONLY);// open file  and cpy map 
	// t_map->cpy_map = full_map(t_map->fd, t_map->rows);
	// if (!t_map->map || !t_map->cpy_map)
	// 	return (ft_putstr_fd("Error:\n Failed to load map!\n", 2), 0);
	// t_map->length_of_line = calcul_length_of_line(t_map->map) - 1;
	// if (!validate_map(t_map))// ching in map in cpyma
	// 	return (ft_putstr_fd("\nThe map is invalid!\n", 2), 
	// 	ft_free(t_maps->cpy_map, t_maps->rows), 
	// 	ft_free(t_maps->map, t_maps->rows), 0);//// this finctoin for tcheck all valid
	// ft_free(t_map->cpy_map, t_map->rows);
	return (1);
}

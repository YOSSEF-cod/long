/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:17:44 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/19 18:41:26 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	main(int ac, char **av)
{
	t_maps		t_map;
	t_window	win;
	initi_structer_map(&t_map);
	if (ac != 2)
		return (ft_putstr_fd("\nUsage: ./so_long <map_file> !\n", 2), 0);
	check_file_name(av[1]);
	if (!check_valid_maps(av[1], &t_map))
		return (ft_putstr_fd("\nFix the Error\n", 2), 1);
	initi_structer_window(&win, &t_map);
	initialization_enverment(&win, t_map);
	
	mlx_loop(win.mlx);
	printf("vslid");
	ft_free_map(t_map.map, t_map.rows);
	free(win.t_imag);//
}

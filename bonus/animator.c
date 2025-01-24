/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:17:03 by ybounite          #+#    #+#             */
/*   Updated: 2025/01/24 08:59:32 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "so_long_bonus.h"


// #include "so_long_bonus.h"

// Function to calculate distance between two points
// double calculate_distance(int x1, int y1, int x2, int y2) {
//     return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
// }
// void render_game(t_window *win) {
//     for (int y = 0; win->t_map.map[y] != NULL; y++) {
//         for (int x = 0; win->t_map.map[y][x] != '\0'; x++) {
//             if (win->t_map.map[y][x] == '1') // Wall
//                 mlx_put_image_to_window(win->mlx, win->mlx_win, win->wall_image, x * TILE_SIZE, y * TILE_SIZE);
//             else if (win->t_map.map[y][x] == 'C') // Coin
//                 mlx_put_image_to_window(win->mlx, win->mlx_win, win->coin_image, x * TILE_SIZE, y * TILE_SIZE);
//             else if (x == win->player_x && y == win->player_y) // Player
//                 mlx_put_image_to_window(win->mlx, win->mlx_win, win->player_image, x * TILE_SIZE, y * TILE_SIZE);
//             else if (x == win->enemy.x && y == win->enemy.y) // Enemy
//                 mlx_put_image_to_window(win->mlx, win->mlx_win, win->enemy_image, x * TILE_SIZE, y * TILE_SIZE);
//         }
//     }
// }

// int updat_animatoin(t_window *win) {
//     // Get player and enemy positions
//     int player_x = win->player_x;
//     int player_y = win->player_y;
//     int enemy_x = win->enemy.x;
//     int enemy_y = win->enemy.y;

//     // Calculate distance between player and enemy
//     double distance = calculate_distance(player_x, player_y, enemy_x, enemy_y);

//     // Enemy starts moving if within trigger distance
//     if (distance <= TRIGGER_DISTANCE) {
//         int next_x = enemy_x;
//         int next_y = enemy_y;
		
//         if (enemy_x < player_x && win->t_map->map[enemy_y][enemy_x + 1] != '1')
//             next_x++;
//         else if (enemy_x > player_x && win->t_map->map[enemy_y][enemy_x - 1] != '1')
//             next_x--;
//         if (enemy_y < player_y && win->t_map.map[enemy_y + 1][enemy_x] != '1')
//             next_y++;
//         else if (enemy_y > player_y && win->t_map.map[enemy_y - 1][enemy_x] != '1')
//             next_y--;
//         win->enemy.x = next_x;
//         win->enemy.y = next_y;
//     }

//     // Check for collision between player and enemy
//     if (win->enemy.x == player_x && win->enemy.y == player_y) {
//         ft_putstr_fd("Game Over! The enemy caught you.\n", 1);
//         exit(0); // Exit the game
//     }

//     // Update the game display
//     render_game(win);
//     return (0);
// }

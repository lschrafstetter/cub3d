/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_general2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:49:06 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/09 15:57:05 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	is_hex(char *str)
{
	while (*str)
	{
		if ((*str < '0' || *str > '9') && (*str < 'A' || *str > 'F'))
			return (0);
		str++;
	}
	return (1);
}

int	is_number(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_wall_door_closed(int tile)
{
	return (tile == tile_wall || tile == tile_door);
}

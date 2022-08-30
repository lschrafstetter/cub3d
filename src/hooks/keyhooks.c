/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:58:57 by lschrafs          #+#    #+#             */
/*   Updated: 2022/08/30 14:33:53 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	hook_key_press(int keycode, t_data *data)
{
	(void) data;
	printf("Pressed key: %i!\n", keycode);
	return (0);
}

int	hook_key_release(int keycode, t_data *data)
{
	(void) data;
	printf("Released key: %i!\n", keycode);
	return (0);
}
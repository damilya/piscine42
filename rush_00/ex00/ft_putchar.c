/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <dzhantay@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:55 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/15 21:23:18 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *start_finish, char *middle, int width)
{
	write(1, start_finish, 1);
	if (width <= 1)
	{
		write(1, "\n", 1);
		return ;
	}
	while (width > 2)
	{
		write(1, middle, 1);
		--width;
	}
	write(1, start_finish, 1);
	write(1, "\n", 1);
}

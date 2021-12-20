/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:51:47 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/21 22:21:20 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(int digit)
{
	char	c;

	c = digit + '0';
	write(1, &c, 1);
}

void	put_char_c(char c)
{
	write(1, &c, 1);
}

void	printgrid(int arr[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			put_char(arr[i][j]);
			if (j == 3)
			{
				put_char_c('\n');
			}
			else
			{
				put_char_c(' ');
			}
			j++;
		}
		i++;
	}
}

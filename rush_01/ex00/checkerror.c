/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asibille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:03:09 by asibille          #+#    #+#             */
/*   Updated: 2021/11/21 22:59:15 by asibille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkerror(char *string)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (string[++i] != '\0')
		count ++;
	if (count != 31)
		return (0);
	while (i < 31)
	{
		if ((string[i] < '1') || (string[i] > '4'))
			return (0);
		i = i + 2;
	}
	i = 1;
	while (i < 31)
	{
		if (string[i] != ' ')
			return (0);
		i = i + 2;
	}
	return (1);
}

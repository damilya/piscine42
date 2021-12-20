/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:54:54 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/17 14:52:59 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printdigits(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	write(1, ", ", 2);
}

void	ft_print_combo(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '6')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_printdigits(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
	write(1, "789", 3);
}

int    main(void)
{
	ft_print_combo();
	return (0);
}

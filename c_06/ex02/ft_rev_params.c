/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:16:42 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/01 17:16:57 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_params(int n_arg, char **argv)
{
	int	j;

	while (n_arg > 1)
	{
		j = 0;
		while (argv[n_arg - 1][j])
		{
			ft_putchar(argv[n_arg - 1][j]);
			j++;
		}
		ft_putchar('\n');
		n_arg--;
	}
}

int	main(int argc, char **argv)
{
	if (*argv == (void *)0)
		return (0);
	ft_rev_params(argc, argv);
	return (0);
}

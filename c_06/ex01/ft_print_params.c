/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:13:46 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/01 17:15:48 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(int n_arg, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (n_arg > 1)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		n_arg--;
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (*argv == (void *)0)
		return (0);
	ft_print_params(argc, argv);
	return (0);
}

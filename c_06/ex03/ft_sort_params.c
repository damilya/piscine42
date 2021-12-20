/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:17:53 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/01 17:18:01 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_sorted_params(int n_arg, char **sorted_params)
{
	int	i;
	int	j;

	i = 0;
	while (i < n_arg)
	{
		j = 0;
		while (sorted_params[i][j])
		{
			ft_putchar(sorted_params[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int n_arg, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < n_arg)
	{
		j = i;
		while (j > 0 && (ft_strcmp(argv[j - 1], argv[j]) > 0))
		{
			temp = argv[j - 1];
			argv[j - 1] = argv[j];
			argv[j] = temp;
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (*argv == (void *)0)
		return (0);
	ft_sort_params(argc - 1, argv + 1);
	print_sorted_params(argc - 1, argv + 1);
	return (0);
}

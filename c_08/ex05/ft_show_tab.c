/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:06:16 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/02 21:06:17 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		ft_putchar(str[s]);
		s++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr < 10 && nbr >= 0)
	{
		ft_putchar(nbr + '0');
		return ;
	}
	ft_putnbr(nbr / 10);
	ft_putnbr(nbr % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	element;

	element = 0;
	if (!par)
		return ;
	while (par[element].str)
	{
		ft_putstr(par[element].str);
		ft_putchar('\n');
		ft_putnbr(par[element].size);
		ft_putchar('\n');
		ft_putstr(par[element].copy);
		ft_putchar('\n');
		element++;
	}
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	struct s_stock_str	*stocks;
	stocks	= ft_strs_to_tab(argc, argv);
	ft_show_tab(stocks);
	return (0);
}
*/

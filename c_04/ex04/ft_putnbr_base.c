/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:10:47 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/29 11:10:51 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

int	get_base_size(char *base)
{
	int	size;

	size = 0;
	while (base[size])
		size++;
	return (size);
}

int	is_base_valid(char *base)
{
	char	*ptr;
	char	*ptr_base_start;

	ptr_base_start = base;
	while (*ptr_base_start)
	{
		if (*ptr_base_start == '+' || *ptr_base_start == '-')
			return (0);
		ptr = ptr_base_start + 1;
		while (*ptr)
		{
			if (*ptr_base_start == *ptr)
				return (0);
			ptr++;
		}
		ptr_base_start++;
	}
	return (1);
}

void	int_to_base(int nbr, char *base, int base_size)
{
	if (nbr == -2147483648)
	{
		ft_put_char('-');
		int_to_base(2147483648 / base_size, base, base_size);
		return ;
	}
	if (nbr < 0)
	{
		ft_put_char('-');
		nbr = nbr * (-1);
	}
	if (nbr >= 0 && nbr < base_size)
	{
		ft_put_char(base[nbr % base_size]);
		return ;
	}
	if (nbr >= base_size)
	{
		int_to_base(nbr / base_size, base, base_size);
		int_to_base(nbr % base_size, base, base_size);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	base_size = get_base_size(base);
	if (base_size <= 1 || base[0] == '\0')
		return ;
	if (!is_base_valid(base))
		return ;
	int_to_base(nbr, base, base_size);
}

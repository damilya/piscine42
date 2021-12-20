/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:11:38 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/17 15:25:55 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	decimal_to_digits(int number)
{
	int	decimal;
	int	digit;

	decimal = number / 10;
	digit = number % 10;
	ft_putchar(decimal + '0');
	ft_putchar(digit + '0');
}

void	ft_put_comma(void)
{
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	while (left <= 99)
	{
		right = left + 1;
		while (right <= 99)
		{
			decimal_to_digits(left);
			ft_putchar(' ');
			decimal_to_digits(right);
			right++;
			if ((left / 10 != 9) || (left % 10 != 8))
				ft_put_comma();
		}
		left++;
	}
}

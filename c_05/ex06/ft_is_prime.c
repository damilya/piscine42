/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:28:04 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/01 09:28:06 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n <= nb / 2 && n <= 46341)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

/*
#include <stdio.h>
int main()
{
	int nb = 1313;
	printf("%d\n", ft_is_prime(nb));

	return (0);
}
*/
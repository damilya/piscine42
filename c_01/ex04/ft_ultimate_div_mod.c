/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:12:27 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/22 14:45:23 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;
	int	a_val;
	int	b_val;

	a_val = *a;
	b_val = *b;
	division = a_val / b_val;
	remainder = a_val % b_val;
	*a = division;
	*b = remainder;
}

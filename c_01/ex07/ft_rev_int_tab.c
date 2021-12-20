/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sol.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:45:56 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/22 14:35:02 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int *ptr)
{
	int	temp;

	temp = *tab;
	*tab = *ptr;
	*ptr = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	size_copy;
	int	*ptr;

	size_copy = size;
	ptr = tab;
	while (size-- > 1)
	{
		ptr++;
	}
	size_copy /= 2;
	while (size_copy-- > 0)
	{
		swap(tab, ptr);
		ptr--;
		tab++;
	}
}

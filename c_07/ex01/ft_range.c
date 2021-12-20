/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:54:11 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/02 20:15:29 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	r;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	r = 0;
	while (min < max)
	{
		range[r] = min;
		r++;
		min++;
	}
	return (range);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	int min = -5;
	int max = 6;
	int *range = ft_range(min, max);
	for (int i = 0, j = min; j < max; i++, j++)
	{
		printf("%d\n", range[i]);
	}
	return 0;
}
*/

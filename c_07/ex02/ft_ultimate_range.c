/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:16:36 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/02 14:16:38 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	range_size = 0;
	while (min < max)
	{
		(*range)[range_size] = min;
		range_size++;
		min++;
	}
	return (range_size);
}

/*
#include <stdio.h>
int ft_ultimate_range(int**, int, int);

int main(int argc, char **argv)
{
	int min = 5;
	int max = 19;
	int *range;

	int range_size = ft_ultimate_range(&range, min, max);

	printf("range size: %d\n", range_size);

	for (int i = 0, j = min; j < max; i++, j++)
		printf("%d\n", range[i]);
	return 0;
}
*/
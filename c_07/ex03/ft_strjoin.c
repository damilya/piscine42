/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:59:19 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/02 15:59:20 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

int	count_total_length(int size, char **str, int sep_len)
{
	int	total_length;
	int	row;

	total_length = 0;
	row = 0;
	while (row < size)
	{
		total_length += ft_strlen(str[row]) + sep_len;
		row++;
	}
	return (total_length - sep_len);
}

char	*ft_strcpy(char *res, char *src)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (res[i])
		i++;
	while (src[j])
	{
		res[i + j] = src[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		result_str_len;
	int		i;

	if (size == 0)
	{
		result = (char *)malloc(1);
		return (result);
	}
	result_str_len = count_total_length(size, strs, ft_strlen(sep));
	result = malloc(result_str_len + 1);
	if (result == NULL)
		return (0);
	i = -1;
	while (++i < size)
	{	
		result = ft_strcpy(result, strs[i]);
		if (i < size - 1)
			result = ft_strcpy(result, sep);
	}
	return (result);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	char *sep = " //-- ";
	printf("%s\n", ft_strjoin(argc, argv, sep));
	return (0);
}
*/
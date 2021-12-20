/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:06:16 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/02 21:06:17 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*copy_src;
	int		len;
	int		i;

	if (!src)
		return (NULL);
	len = 0;
	while (src[len])
		len++;
	copy_src = (char *)malloc(len + 1);
	if (!copy_src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy_src[i] = src[i];
		i++;
	}
	copy_src[len] = '\0';
	return (copy_src);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			element;
	t_stock_str	*result;

	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	element = 0;
	while (element < ac)
	{
		result[element].size = ft_strlen(av[element]);
		result[element].str = ft_strdup(av[element]);
		result[element].copy = ft_strdup(av[element]);
		element++;
	}
	result[element].size = 0;
	result[element].str = NULL;
	result[element].copy = NULL;
	return (result);
}

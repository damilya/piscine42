/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:59:08 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/26 17:59:14 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	result;

	result = 0;
	while (*dest && size)
	{
		result++;
		dest++;
		size--;
	}
	while (*src && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		result++;
		size--;
	}
	*dest = '\0';
	while (*src)
	{
		result++;
		src++;
	}
	return (result);
}

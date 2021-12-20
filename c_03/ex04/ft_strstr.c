/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:57:20 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/28 13:09:06 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_found(char *str, char *word)
{
	while (*str && *word)
	{
		if (*str != *word)
			return (0);
		str++;
		word++;
	}
	return (*word == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (to_find == 0)
		return (str);
	while (*str)
	{
		if ((*str == *to_find) && is_found(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

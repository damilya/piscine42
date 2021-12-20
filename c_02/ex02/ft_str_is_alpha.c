/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:13:06 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/24 12:21:07 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
			str++;
		else
			return (0);
	}
	return (1);
}
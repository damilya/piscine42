/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:54:50 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/26 17:55:42 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(const unsigned char *) s1 - *(const unsigned char *) s2);
}

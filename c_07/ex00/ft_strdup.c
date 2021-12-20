/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:53:24 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/02 20:15:10 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy_src;
	int		len;
	int		i;

	if (*src == '\0')
		return (NULL);
	len = 0;
	while (src[len])
		len++;
	copy_src = (char *)malloc(len + 1);
	if (copy_src == '\0')
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

/*
#include <stdio.h>
char *ft_strdup(char*);
int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char *copy_test = ft_strdup(argv[1]);
	printf("%s\n", copy_test);
	return 0;
}
*/

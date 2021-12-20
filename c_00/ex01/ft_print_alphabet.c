/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:38:17 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/17 13:54:04 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet_letter;

	alphabet_letter = 'a';
	while (alphabet_letter <= 'z')
	{
		write(1, &alphabet_letter, 1);
		alphabet_letter++;
	}
}

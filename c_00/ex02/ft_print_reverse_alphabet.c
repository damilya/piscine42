/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:38:17 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/17 13:57:14 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet_letter_reverse;

	alphabet_letter_reverse = 'z';
	while (alphabet_letter_reverse >= 'a')
	{
		write(1, &alphabet_letter_reverse, 1);
		alphabet_letter_reverse--;
	}
}

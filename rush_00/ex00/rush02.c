/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <dzhantay@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:55 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/15 21:23:18 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *start_finish, char *middle, int width);

void	rush(int x, int y)
{
	ft_putchar("A", "B", x);
	while (y > 1)
	{
		if (y == 2)
		{
			ft_putchar("C", "B", x);
			break ;
		}
		ft_putchar("B", " ", x);
		--y;
	}
}

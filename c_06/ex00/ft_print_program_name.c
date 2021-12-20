/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:12:49 by dzhantay          #+#    #+#             */
/*   Updated: 2021/12/01 17:13:14 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_program_name(char *prog_name)
{
	char	*ptr_prog_name;

	ptr_prog_name = prog_name;
	while (*ptr_prog_name)
	{
		ft_putchar(*ptr_prog_name);
		ptr_prog_name++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	(void) argc;
	if (argv[0] == (void *)0)
		return (0);
	ft_print_program_name(argv[0]);
	return (0);
}

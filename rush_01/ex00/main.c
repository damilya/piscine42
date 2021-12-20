/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asibille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:50:34 by asibille          #+#    #+#             */
/*   Updated: 2021/11/21 22:54:56 by asibille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	resolve(int *array);
int		checkerror(char *string);
void	input_to_array(int *input_value, char *input);

int	main(int argc, char **argv)
{
	int	input_value[16];

	if (argc == 2)
	{
		if (checkerror(argv[1]))
		{
			input_to_array(input_value, argv[1]);
			resolve(input_value);
		}
	}
	else
		write(1, "Error \n", 1);
	return (0);
}

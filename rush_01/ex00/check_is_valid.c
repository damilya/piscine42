/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asibille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:51:47 by asibille          #+#    #+#             */
/*   Updated: 2021/11/21 22:21:20 by asibille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_the_rows(int matrix[4][4]);
int	check_the_columns(int matrix[4][4]);

int	check_is_valid(int matrix[4][4])
{
	if (check_the_rows(matrix) && check_the_columns(matrix))
		return (1);
	return (0);
}

int	check_the_rows(int matrix[4][4])
{
	int	i;

	i = -1;
	while (i++ < 3)
	{
		if ((matrix[0][i] == matrix[1][i]) || (matrix[0][i] == matrix[2][i]))
			return (0);
		if ((matrix[0][i] == matrix[3][i]) || (matrix[1][i] == matrix[2][i]))
			return (0);
		if ((matrix[1][i] == matrix[3][i]) || (matrix[2][i] == matrix[3][i]))
			return (0);
	}
	return (1);
}

int	check_the_columns(int matrix[4][4])
{
	int	i;

	i = -1;
	while (i++ < 3)
	{
		if ((matrix[i][0] == matrix[i][1]) || (matrix[i][0] == matrix[i][2]))
			return (0);
		if ((matrix[i][0] == matrix[i][3]) || (matrix[i][1] == matrix[i][2]))
			return (0);
		if ((matrix[i][1] == matrix[i][3]) || (matrix[i][2] == matrix[i][3]))
			return (0);
	}
	return (1);
}

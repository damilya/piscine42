/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asibille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:13:24 by asibille          #+#    #+#             */
/*   Updated: 2021/11/21 22:21:01 by asibille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_columns(int matrix[4][4], int *input_values);
int	check_rev_columns(int matrix[4][4], int *input_values);
int	check_rows(int matrix[4][4], int *input_values);
int	check_rev_rows(int matrix[4][4], int *input_values);

/*return 1, if the matrix is a solution, return 0 if not */
int	check2(int matrix[4][4], int *input_values)
{
	if (check_columns(matrix, input_values))
	{
		if (check_rev_columns(matrix, input_values))
		{
			if (check_rows(matrix, input_values))
			{	
				if (check_rev_rows(matrix, input_values))
					return (1);
			}
		}
	}
	return (0);
}

int	check_columns(int matrix[4][4], int *input_values)
{
	int	count;
	int	max;
	int	i;
	int	j;

	i = -1;
	while (i++ < 3)
	{
		j = -1;
		count = 0;
		max = 0;
		while (j++ < 3)
		{
			if (matrix[j][i] > max)
			{
				max = matrix[j][i];
				++count;
			}
		}
		if (count != input_values[i])
			return (0);
	}
	return (1);
}

int	check_rev_columns(int matrix[4][4], int *input_values)
{
	int	count;
	int	max;
	int	i;
	int	j;

	i = -1;
	while (i++ < 3)
	{
		j = 4;
		count = 0;
		max = 0;
		while (j-- > 0)
		{
			if (matrix[j][i] > max)
			{
				max = matrix[j][i];
				++count;
			}
		}
		if (count != input_values[i + 4])
			return (0);
	}
	return (1);
}

int	check_rows(int matrix[4][4], int *input_values)
{
	int	count;
	int	max;
	int	i;
	int	j;

	i = -1;
	while (i++ < 3)
	{
		j = -1;
		count = 0;
		max = 0;
		while (j++ < 3)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				++count;
			}
		}
		if (count != input_values[i + 8])
			return (0);
	}
	return (1);
}

int	check_rev_rows(int matrix[4][4], int *input_values)
{
	int	count;
	int	max;
	int	i;
	int	j;

	i = -1;
	while (i++ < 3)
	{
		j = 4;
		count = 0;
		max = 0;
		while (j-- > 0)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				++count;
			}
		}
		if (count != input_values[i + 12])
			return (0);
	}
	return (1);
}

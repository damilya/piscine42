/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asibille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:37:01 by asibille          #+#    #+#             */
/*   Updated: 2021/11/21 23:08:36 by asibille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	printgrid(int arr[4][4]);
int		check_is_valid(int grid[4][4]);
int		check2(int grid[4][4], int *array);

int	g_int = 0;
int	g_grid[4][4];

void	printarray(int *arr, int size, int res[24][4])
{
	int	i;

	i = 0;
	while (i < size)
	{
		res[g_int][i] = arr[i];
		i++;
	}
	g_int++;
}

void	swap(int *first, int *second)
{
	int	temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

void	permute(int *arr, int start, int finish, int res[24][4])
{
	int	i;

	if (start == finish)
	{
		printarray(arr, finish, res);
		return ;
	}
	i = start;
	while (i < finish)
	{
		swap((arr + start), (arr + i));
		permute(arr, start + 1, finish, res);
		swap((arr + start), (arr + i));
		i++;
	}
}

void	combinations_24_4(int arr[24][4], int len, int start, int *array)
{
	int	i;
	int	j;
	int	new_len;

	if (len == 0)
	{
		if (check_is_valid(g_grid) && check2(g_grid, array))
		{
			printgrid(g_grid);
		}
		return ;
	}
	new_len = 24 - len;
	i = start;
	while (i <= new_len)
	{
		j = 0;
		while (j < 4)
		{
			g_grid[4 - len][j] = arr[i][j];
			j++;
		}
		combinations_24_4(arr, len - 1, i + 1, array);
		i++;
	}
}

void	resolve(int *array)
{
	int	i;
	int	res[24][4];
	int	input[4];

	i = 1;
	while (i <= 4)
	{
		input[i - 1] = i;
		i++;
	}
	permute(input, 0, 4, res);
	combinations_24_4(res, 4, 0, array);
}

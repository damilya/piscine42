/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:31:13 by dzhantay          #+#    #+#             */
/*   Updated: 2021/11/27 16:32:28 by dzhantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_minus_n = 0;

int	ft_calc_int(char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10 + *str - '0');
		str++;
	}
	return (result);
}

int	is_whitespace(char str)
{
	if (str == ' ' || str == '\t'
		|| str == '\r' || str == '\n'
		|| str == '\v' || str == '\f')
		return (1);
	return (0);
}

int	is_valid(char str)
{
	if (str == '-')
	{
		g_minus_n++;
		return (1);
	}
	if (is_whitespace(str) || str == '+')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		res;

	res = 0;
	while (*str)
	{
		if (is_valid(*str))
		{
			str++;
			continue ;
		}
		if (*str >= '0' && *str <= '9')
		{
			res = ft_calc_int(str);
			break ;
		}
		else
			return (0);
	}
	if (g_minus_n % 2 != 0)
		return (res * (-1));
	return (res);
}

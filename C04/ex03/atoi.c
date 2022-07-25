/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:02:55 by qallain           #+#    #+#             */
/*   Updated: 2022/07/19 22:10:54 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	neg(char *str, int i)
{
	int	cpl;

	cpl = 1;
	while (str[i] == '-')
	{
		if (str[i] == '-')
			cpl = cpl * -1;
		i++;
	}
	return (cpl);
}

int	ft_atoi(char *str)
{
	int	i;
	int	cpl;
	int	res;

	i = 0;
	cpl = 1;
	res = 0;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || str[i] <= 13 && str[i] >= 9)
		{
			i++;
		}
		cpl = neg(str, i);
		while (str[i] >= 48 && str[i] <= 57)
		{
			res = res * 10 + (str[i] - '0');
			i++;
			if (!(str[i] >= 48 && str[i] <= 57))
				return (cpl * res);
		}
		i++;
	}
	return (cpl * res);
}

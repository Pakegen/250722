/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:45:45 by qallain           #+#    #+#             */
/*   Updated: 2022/07/24 21:10:54 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] != '\0' && str[i + k] == to_find[k])
		{
			if (to_find[k + i] == '\0')
				return (&str[i]);
			++k;
		}
		++i;
	}
	return (0);
}

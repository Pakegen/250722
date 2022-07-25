/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factoriel.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:32:00 by qallain           #+#    #+#             */
/*   Updated: 2022/07/21 12:49:38 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factoriel(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factoriel(nb - 1));
}

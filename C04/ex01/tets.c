/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tets.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 03:07:38 by qallain           #+#    #+#             */
/*   Updated: 2022/07/25 03:08:43 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include<unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                ft_putchar(str[i]);
                i++;
        }
}


void    ft_putnbr(int nb)
{
        if (nb > 2147483647 || nb < -2147483648)
            return ;
        if (nb == -2147483648)
            ft_putstr("2147483648");
        if (nb < 0)
        {
                nb = nb * -1;
                ft_putchar('-');
        }
        if (nb < 10)
          ft_putchar(nb + '0');
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
}


#include <stdio.h>

void    ft_putnbr(int nb);

int        main(void)
{
    ft_putnbr(42);
    printf("\n");
    ft_putnbr(-42);
    printf("\n");
    ft_putnbr(-2147483648);
    printf("\n");
    ft_putnbr(2147483647);
    printf("\n");
}

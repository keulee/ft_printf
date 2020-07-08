/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:33:56 by k                 #+#    #+#             */
/*   Updated: 2020/07/08 18:35:25 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int nbr)
{
	int num;
	int nbr2;

	num = 1;
	nbr2 = nbr;
	if (nbr >= 0 && nbr < 10)
		ft_putchar(nbr + 48);
	else
	{
		while (nbr2 >= 10)
		{
			num = num * 10;
			nbr2 = nbr2 / 10;
		}
		while (num > 0)
		{
			ft_putchar(nbr / num + 48);
			nbr = nbr % num;
			num = num / 10;
		}
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
		ft_print_nbr(nb);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		ft_putchar('-');
		nb = nb * -1;
		ft_print_nbr(nb);
	}
}

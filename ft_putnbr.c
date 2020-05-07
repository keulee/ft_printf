/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:08:12 by keulee            #+#    #+#             */
/*   Updated: 2020/05/07 13:08:14 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147484648", 11);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	// else if (nb < 0)
	// {
	// 	ft_putchar('-');
	// 	nb = nb * (-1);
	// 	ft_putnbr(nb / 10);
	// 	ft_putnbr(nb % 10);
	// }
	if (nb >= 0 && nb < 10)
		ft_putchar(nb % 10 + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

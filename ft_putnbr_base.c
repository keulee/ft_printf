/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:09:48 by keulee            #+#    #+#             */
/*   Updated: 2020/05/26 17:33:05 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int        ft_error(char *base)
{
    long int i;
    long int j;

    i = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[i])
    {
        j = i + 1;
        if (base[i] == '+' || base[i] == '-')
            return (0);
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void    ft_putnbr_base(long long int nbr, char *base)
{
    int                 size;
    long long int       nb;

    size = ft_strlen(base);
    nb = nbr;
    if (ft_error(base) == 1)
    {
        if (nb < 0)
        {
            nb *= -1;
            ft_putchar('-');
        }
        if (nb >= size)
            ft_putnbr_base(nb / size, base);
        ft_putchar(base[nb % size]);
    }
}

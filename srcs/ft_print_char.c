/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:09:26 by keulee            #+#    #+#             */
/*   Updated: 2020/06/29 16:51:14 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** Function to print 'c'
*/
void    ft_print_char(t_struct *tab)
{
    tab->width -= 1;
    tab->len += tab->width;
    if ((tab->check_width == 0 && tab->check_minus == 0 && tab-> check_s_width == 0) || (tab->check_width == 0 && tab->check_minus == 1 && tab-> check_s_width == 0))
    {
        ft_putchar(va_arg(tab->list, int));
        tab->len += 1;
    }
    else if (tab->check_minus == 1)
    {
        ft_putchar(va_arg(tab->list, int));
        while (tab->width-- > 0)
            ft_putchar(' ');
    }
    else
    {
        while (tab->width-- > 0)
            ft_putchar(' ');
        ft_putchar(va_arg(tab->list, int));
    }
    tab->len += 1;
}

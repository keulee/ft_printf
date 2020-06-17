/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 21:54:13 by keulee            #+#    #+#             */
/*   Updated: 2020/06/17 17:41:02 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_case(t_struct *tab)
{
    if (tab->specifier == 'c')
        ft_print_char(tab);
    if (tab->specifier == 's')
        ft_print_str(tab);
    if (tab->specifier == 'd' || tab->specifier == 'i')
    {
        // printf("check_minus: %d\n", tab->check_minus);
        // printf("check_width: %d\n", tab->check_width);
        // printf("check_precision: %d\n", tab->check_precision);
        // printf("check_zero: %d\n", tab->check_zero);
        // printf("width: %d\n", tab->width);
        // printf("precision: %d\n", tab->precision);
        ft_print_di(tab);
    }
    if (tab->specifier == 'u')
        ft_print_u(tab);
    if (tab->specifier == 'p')
        ft_print_p(tab);
    if (tab->specifier == 'x')
        ft_print_x(tab);
    if (tab->specifier == 'X')
        ft_print_xx(tab);
    if (tab->specifier == '%')
        ft_print_percent(tab);
}

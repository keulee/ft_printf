/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 21:54:13 by keulee            #+#    #+#             */
/*   Updated: 2020/06/22 18:46:08 by keulee           ###   ########.fr       */
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
        ft_print_di(tab);
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

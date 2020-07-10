/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_asterisk.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 22:14:08 by keulee            #+#    #+#             */
/*   Updated: 2020/06/29 16:51:18 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** Asterisk (*)
** (*)가 음수 field width를 받으면 양수 field width에 왼쪽 정렬 (-플래그)로 취급한다.
** (*)가 음수 .precision을 받으면 .precision이 없는 것으로 취급한다.
*/
void    ft_find_asterisk(t_struct *tab)
{
    if (tab->str[tab->i-1] == '0' && (tab->str[tab->i+1] == '.' || tab->str[tab->i] == '*'))
        tab->check_zero = 1;
    if (tab->str[tab->i-1] == '.')
    {
        tab->check_precision = 1;
        tab->precision = va_arg(tab->list, int);
        if (tab->precision < 0)
            tab->check_precision = 0;
    }
    else
    {
        tab->check_width = 1;
        tab->width = va_arg(tab->list, int);
        if (tab->specifier == 'c' && tab->width == 0)
            tab->width = 1;
        if (tab->width < 0)
        {
            tab->width = (tab->width * -1);
            tab->check_minus = 1;
        }
    }
}

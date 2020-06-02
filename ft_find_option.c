/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:08:48 by keulee            #+#    #+#             */
/*   Updated: 2020/06/02 22:22:11 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** Function to find every options (flag, width etc)
*/
/*
** Asterisk (*)
** (*)가 음수 field width를 받으면 양수 field width에 왼쪽 정렬 (-플래그)로 취급한다.
** (*)가 음수 .precision을 받으면 .precision이 없는 것으로 취급한다.
*/
void    ft_find_option(t_struct *tab)
{
    tab->j = tab->i;
    ft_find_specifier(tab);
    while (tab->str[tab->i++] != '\0' && tab->i < tab->j)
    {
        if (tab->str[tab->i] == '-')
            tab->check_minus = 1;
        else if (tab->str[tab->i] == '0' && ((tab->str[tab->i + 1] >= '0' && tab->str[tab->i + 1] <= '9') || tab->str[tab->i - 1] == '-'))
            tab->check_zero = 1;
        else if (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
            ft_parce_width_precision(tab);
        else if (tab->str[tab->i] == '*')
            ft_parce_asterisk(tab);
    }
    tab->i = tab->j;
}

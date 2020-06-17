/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:08:48 by keulee            #+#    #+#             */
/*   Updated: 2020/06/17 14:40:35 by keulee           ###   ########.fr       */
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

void	ft_find_option(t_struct *tab)
{
	tab->j = tab->i;
	ft_find_specifier(tab);
	while (tab->str[tab->i++] != '\0' && tab->i < tab->j)
	{
		if (tab->str[tab->i] == '-')
			tab->check_minus = 1;
		else if (tab->str[tab->i] == '0' && ((tab->str[tab->i + 1] >= '0'
						&& tab->str[tab->i + 1] <= '9')
						|| tab->str[tab->i - 1] == '-'))
			tab->check_zero = 1;
		else if (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
		{
			if (tab->str[tab->i-1] == '.')
			{
				tab->check_precision = 1;
				// tab->precision = ft_atoi(&tab->str[tab->i]);
				while (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
				{
					tab->precision = tab->precision * 10 + tab->str[tab->i] - '0';
					tab->i++;
				}
				// break;
			}
			else
			{
				tab->check_width = 1;
				while (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
				{
					tab->width = tab->width * 10 + tab->str[tab->i] - '0';
					tab->i++;
				}
			}
		}
		if (tab->str[tab->i] == '.')
			tab->check_precision = 1;
		if (tab->str[tab->i] == '*')
			ft_find_asterisk(tab);
	}
	tab->i = tab->j;
}

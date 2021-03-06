/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_specifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:09:09 by keulee            #+#    #+#             */
/*   Updated: 2020/07/10 23:00:04 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** Function to find Specifier (c,s,p,d,i,u,x,X,%)
*/

void	ft_find_specifier(t_struct *tab)
{
	while (tab->str[tab->j++] != '\0')
	{
		if (tab->str[tab->j] == 'c' || tab->str[tab->j] == 's'
				|| tab->str[tab->j] == 'p' || tab->str[tab->j] == 'd'
				|| tab->str[tab->j] == 'i' || tab->str[tab->j] == 'u'
				|| tab->str[tab->j] == 'x' || tab->str[tab->j] == 'X'
				|| tab->str[tab->j] == '%')
			break ;
	}
	if (tab->str[tab->j-1] == '\0')
		tab->error = 1;
	tab->specifier = tab->str[tab->j];
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:06:59 by keulee            #+#    #+#             */
/*   Updated: 2020/07/08 17:11:35 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** ft_printf which works as same as 'the' printf
*/
/*
** This function returns a negative value if an error occurs. (remind it)
*/

int		ft_printf(const char *str, ...)
{
	t_struct tab;

	va_start(tab.list, str);
	ft_init(&tab, str);
	while (tab.str[tab.i] != '\0')
	{
		if (tab.str[tab.i] == '%')
		{
            if (tab.str[tab.i+1] == '%')
				ft_print_double_percent(&tab);
            // {
            //     ft_putchar('%');
            //     tab.len++;
            //     tab.i++;
            // }
            else
            {
    			ft_find_option(&tab);
    			ft_print_case(&tab);
            }
		}
		else
			ft_print_sgl_caracter(&tab);
		// {
		// 	ft_putchar(tab.str[tab.i]);
		// 	tab.len++;
		// }
		tab.i++;
		ft_option_clear(&tab);
	}
	va_end(tab.list);
	return (tab.len);
}

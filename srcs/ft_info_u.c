/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:20:20 by keulee            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/07/12 23:58:24 by k                ###   ########.fr       */
=======
/*   Updated: 2020/07/13 17:48:21 by keulee           ###   ########.fr       */
>>>>>>> 69560fc913e336332d2cb576fab839bd4f0f077f
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ft_info_u(t_struct *tab)
{
    tab->u_number = (unsigned int)va_arg(tab->list, unsigned int);
    tab->string = ft_itoa_u(tab->u_number);
    tab->string_len = ft_strlen(tab->string);
    if (tab->check_minus == 1 && tab->check_zero == 1)
        tab->check_zero = 0;
    if (tab->check_precision == 1 && tab->check_zero == 1)
        tab->check_zero = 0;
<<<<<<< HEAD
    free(tab->string);
=======
	free(tab->string);
>>>>>>> 69560fc913e336332d2cb576fab839bd4f0f077f
}

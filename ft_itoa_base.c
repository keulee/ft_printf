/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 19:39:14 by keulee            #+#    #+#             */
/*   Updated: 2020/05/26 18:17:56 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(long long int n, char *base)
{
	int 			i;
	unsigned int 	base_len;
	char 			*str;
	int 			mark;
	long long int 	rest;

	i = 0;
	mark = (n < 0 ? 1 : 0);
	base_len = ft_strlen(base);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n < 0)
		n = n * -1;
	if (n == 0)
	{
		str[0] = '0';
		i = 1;
	}
	while (n > 0)
	{
	    rest = n % 16;
	    str[i] = base[rest % base_len];
	    n = n / 16;
		i++;
	}
	if (mark == 1)
		str[0] = '-';
	str[i] = '\0';
	return (str);
}

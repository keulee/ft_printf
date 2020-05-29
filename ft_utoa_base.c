/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 17:39:54 by keulee            #+#    #+#             */
/*   Updated: 2020/05/29 23:58:39 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_rev(char *string)
{
	int		len;
	int		i;
	char	tmp;

	len = ft_strlen(string) - 1;
	i = 0;
	while (i < len)
	{
		tmp = string[i];
		string[i] = string[len];
		string[len] = tmp;
		i++;
		len--;
	}
	return (string);
}

unsigned int	ft_nb_len(unsigned long long *nb, int *div)
{
	unsigned int		i;
	long long int		l_nb;

	i = 0;
	l_nb = *nb;
	while (l_nb)
	{
		l_nb /= *div;
		i++;
	}
	return (i);
}

char	*ft_utoa_base(unsigned long long nb, char *base)
{
	char		*string;
	int			div;
	int			i;
	unsigned int nb_len;

	div = ft_strlen(base);
    i = 0;
	nb_len = ft_nb_len(&nb, &div);
	if (div != 16 || !(string = (char *)malloc(sizeof(char) * (nb_len + 1))))
		return (NULL);
    if (nb == 0)
	{
        string[0] = '0';
		i = 1;
	}
	while (nb > 0)
	{
		string[i++] = base[nb % div];
		nb = nb / div;
	}
	string[i] = '\0';
	return (ft_rev(string));
}

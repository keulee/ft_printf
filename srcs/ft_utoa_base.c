/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 17:39:54 by keulee            #+#    #+#             */
/*   Updated: 2020/07/10 23:02:28 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

unsigned long long		ft_pow2(unsigned long long nb, unsigned long long pow)
{
	if (pow == 0)
		return (1);
	else
		return (nb * ft_pow2(nb, pow - 1));
}

char					*ft_utoa_base(unsigned long long value, char *base)
{
	char				*nbr;
	unsigned long long	i;
	unsigned long long	neg;
	unsigned long long	b;

	b = ft_strlen(base);
	i = 1;
	neg = 0;
	while (ft_pow2(b, i) - 1 < value)
		i++;
	if (!(nbr = (char*)malloc(sizeof(nbr) * i)))
		return (NULL);
	nbr[i + neg] = '\0';
	while (i-- > 0)
	{
		nbr[i + neg] = (value % b) + (value % b > 9 ? 'a' - 10 : '0');
		value = value / b;
	}
	(neg ? nbr[0] = '-' : 0);
	if (nbr[0] == '0' && ft_strcmp(nbr, "0") != 0)
	{
		i = 0;
		while (nbr[i] == '0')
			i++;
		return (ft_strsub(nbr, i, ft_strlen(nbr) - i));
	}
	return (nbr);
}

/*char	*ft_rev(char *string)
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
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:27:52 by keulee            #+#    #+#             */
/*   Updated: 2020/05/07 13:10:27 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description
// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.
//
// Parameters
// #1. The string from which to create the substring.
// #2. The start index of the substring in the string ’s’.
// #3. The maximum length of the substring.
//
// Return
// The substring. NULL if the allocation fails.
//
// External functs.
// malloc
//
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*copy;
	unsigned int	j;

	j = 0;
	if (s == NULL)
		return (NULL);
    if ((unsigned int)ft_strlen(s) > start)
        return (ft_strdup(""));
	if (!(copy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = len - start
	while (s[start] != '\0' && 0 < len)
	{
		copy[j++] = s[start++];
		len--;
	}
	copy[j] = '\0';
	return (copy);
}

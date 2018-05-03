/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 23:55:36 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/01 22:02:34 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;

	if (!(*needle))
		return ((char *)haystack);
	x = ft_strlen(needle);
	while (*haystack && len-- >= x)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, x) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return ((void *)0);
}

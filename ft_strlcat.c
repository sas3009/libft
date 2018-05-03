/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 02:40:26 by olmishyn          #+#    #+#             */
/*   Updated: 2018/04/27 12:12:17 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen(src);
	while (dst[i] && i < dstsize)
		i++;
	if (dstsize > 0)
	{
		while (src[j] && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	if (j > 0)
	{
		dst[i] = '\0';
		return (k + i - j);
	}
	return (k + i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 17:01:06 by olmishyn          #+#    #+#             */
/*   Updated: 2018/04/24 18:03:38 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	unsigned char	z;
	size_t			i;

	i = 0;
	b = (unsigned char *)s;
	z = (unsigned char)c;
	while (n)
	{
		if (b[i] == z)
		{
			return (b + i);
		}
		i++;
		n--;
	}
	return (NULL);
}

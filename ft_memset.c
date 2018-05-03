/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 21:43:29 by olmishyn          #+#    #+#             */
/*   Updated: 2018/04/27 11:28:46 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*bb;

	i = 0;
	a = (unsigned char)c;
	bb = (unsigned char *)b;
	while (len > 0)
	{
		bb[i] = a;
		i++;
		len--;
	}
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:55:20 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/02 12:59:42 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*b;
	const char	*src;
	size_t		i;

	if (!s)
		return (NULL);
	b = ft_strnew(len);
	if (b == NULL)
		return (0);
	src = &s[start];
	i = 0;
	while (src[i] && i < len)
	{
		b[i] = src[i];
		i++;
	}
	while (i < len)
	{
		b[i] = '\0';
		i++;
	}
	return (b);
}

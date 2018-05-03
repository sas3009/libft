/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 16:31:05 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/01 03:11:39 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	register const char *ptr;

	ptr = s;
	while (*ptr)
		ptr++;
	if (c == '\0')
		return ((char *)ptr);
	while (ptr-- != s)
		if (*ptr == c)
			return ((char *)ptr);
	return (NULL);
}

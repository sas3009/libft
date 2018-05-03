/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 18:43:19 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/02 12:27:59 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*c;
	unsigned int	i;

	if (!s || !f || (!(c = ft_strnew(ft_strlen(s)))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		c[i] = f(i, s[i]);
		i++;
	}
	return (c);
}

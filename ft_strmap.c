/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 16:33:52 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/02 12:22:16 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*b;

	if (!s || !f || (!(b = ft_strnew(ft_strlen(s)))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		b[i] = f((char)s[i]);
		i++;
	}
	return (b);
}

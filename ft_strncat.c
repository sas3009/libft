/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 01:30:26 by olmishyn          #+#    #+#             */
/*   Updated: 2018/04/27 11:47:29 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i] != '\0' && n != 0)
	{
		s1[j] = s2[i];
		i++;
		j++;
		n--;
	}
	s1[j] = '\0';
	return (s1);
}

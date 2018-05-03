/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 19:14:19 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/02 12:04:26 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*b;

	b = malloc(size + 1);
	if (b == NULL)
		return (NULL);
	while (size + 1)
	{
		b[size] = 0;
		size--;
	}
	return (b);
}

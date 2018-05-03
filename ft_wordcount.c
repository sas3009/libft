/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wordcount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 20:06:12 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/02 20:06:40 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *str, char c)
{
	int	w;
	int	n;

	n = 0;
	w = 0;
	while (str[n])
	{
		if (str[n] != c)
			w++;
		while (str[n] != c && str[n + 1])
			n++;
		n++;
	}
	return (w);
}

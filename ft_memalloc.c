/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 18:16:33 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/02 11:48:49 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*b;

	if (!(b = (void *)malloc(sizeof(*b) * size)))
		return (NULL);
	ft_bzero(b, size);
	return (b);
}

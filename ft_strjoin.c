/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:12:20 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/02 14:40:34 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*constr;

	constr = NULL;
	if (!s1 || !s2 ||
			!(constr = (ft_strnew(ft_strlen(s1) + ft_strlen(s2) - 1))))
		return (NULL);
	constr = ft_strcpy(constr, s1);
	constr = ft_strcat(constr, s2);
	return (constr);
}

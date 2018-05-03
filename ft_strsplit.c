/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 22:09:05 by olmishyn          #+#    #+#             */
/*   Updated: 2018/04/27 12:07:08 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**str_count_malloc(char *s, char c)
{
	char	**dstr;
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	if (!(dstr = (char **)malloc(sizeof(char *) * (words + 1))))
		return ((void *)0);
	dstr[words] = (void *)0;
	return (dstr);
}

static size_t	letter_count(char *s, char c)
{
	size_t	letters;
	size_t	i;

	i = 0;
	letters = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		letters++;
	}
	return (letters);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**dstr;
	size_t	words;
	size_t	letters;
	size_t	i;

	if (!s || !(dstr = str_count_malloc((char *)s, c)))
		return ((void *)0);
	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			letters = letter_count((char *)&s[i], c);
			if (!(dstr[words] = ft_strnew(letters)))
				return (dstr);
			dstr[words] = ft_strsub((char *)s, i, letters);
			words++;
			i = i + letters - 1;
		}
		i++;
	}
	return (dstr);
}

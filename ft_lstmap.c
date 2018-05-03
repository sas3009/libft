/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 22:40:52 by olmishyn          #+#    #+#             */
/*   Updated: 2018/05/01 22:56:07 by olmishyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;

	if (lst != NULL && f != NULL)
	{
		list = f(lst);
		if (list != NULL || lst->next != NULL)
			list->next = ft_lstmap(lst->next, f);
		return (list);
	}
	return (NULL);
}

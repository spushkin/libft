/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:59:50 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 17:59:52 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates a list lst and applies the function f to each link
** to create a “fresh” list (using malloc(3)) resulting from the
** suc- cessive applications of f. If the allocation fails, the function returns NULL.
** Param. #1
** A pointer’s to the first link of a list.
** Param. #2
** The address of a function to apply to each link of a list.
** Return value
** The new list.
** Libc functions
** malloc(3), free(3).
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (lst)
	{
		new = f(lst);
		new->next = ft_lstmap(lst->next, f);
		return (new);
	}
	return (NULL);
}

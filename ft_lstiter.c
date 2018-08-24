/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:59:32 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 17:59:38 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates the list lst and applies the function f to each link.
** Param. #1
** A pointer to the first link of a list.
** Param. #2
** The address of a function to apply to each link of a list.
** Return value
** None.
** Libc functions
** None.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}

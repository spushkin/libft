/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:58:57 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 17:58:59 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter a link’s pointer address and frees
** the memory of the link’s content using the function del given
** as a parameter, then frees the link’s memory using free(3).
** The memory of next must not be freed under any circumstance.
** Finally, the pointer to the link that was just freed must be set
** to NULL (quite similar to the function ft_memdel in the mandatory part).
** Param. #1
** The adress of a pointer to a link that needs to be freed.
** Return value
** None.
** Libc functions
** free(3)
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}

/*
** int main()
** {
** 	t_list *my_tlist = (t_list *)malloc(sizeof(t_list) * 5);
** 	char content[20] = "CONTENT.";
** 	t_list *linked_list_item1 = ft_lstnew((void *)content, 16);
** 	char content2[20] = "CONTENT2.";
** 	t_list *linked_list_item2 = ft_lstnew((void *)content2, 16);
** 	ft_lstadd(&my_tlist, linked_list_item1);
** 	ft_lstadd(&my_tlist, linked_list_item2);
** 	printf("The result is %s\n", (char *)my_tlist[0].content);
** 	printf("The result is %s\n", (char *)my_tlist[0].next->content);
** 	return 0;
** }
*/

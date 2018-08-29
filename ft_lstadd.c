/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:59:21 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 17:59:22 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** In this function we will be adding a new link, called 'new'
** that is passed
** in our parameters, to a list and placing this link at
** the head of our list.
*/

/*
** We check to make sure the link new that is passed to our parameters
** is NULL. If it is not, we set our link new's element next to the first
** link that is pointed to by alst in our parameters. We then set the
** pointer of alst to new, thus setting it to the head of our linked list.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!new || !alst)
		return ;
	new->next = *alst;
	*alst = new;
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
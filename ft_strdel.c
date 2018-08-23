/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:47:46 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:47:51 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.
** Param. #1
** The string’s address that needs to be freed and its pointer set to NULL.
** Return value
** None.
** Libc functions
** Free(3).
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}

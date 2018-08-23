/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:48:07 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:48:10 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Sets every character of the string to the value ’\0’.
** Param. #1
** The string that needs to be cleared.
** Return value
** None.
** Libc functions
** None.
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	while (s != '\0' && *s)
		*s++ = '\0';
}

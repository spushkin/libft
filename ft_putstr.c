/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:53:09 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:53:12 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the file descriptor fd.
** Param. #1
** The string to output.
** Param. #2
** The file descriptor.
** Return value
** None.
** Libc functions
** write(2).
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	if (s)
		while (*s)
			ft_putchar(*s++);
}

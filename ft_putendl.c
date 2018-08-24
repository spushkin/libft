/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:53:27 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:53:28 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function will display the string s on the standard output followed by a
** '\n', which is a new line. We do this by using our ft_putstr and ft_putchar
** functions that we previously made
** Param. #1 The string to output.
** Return value None.
** Libc functions write(2).
*/
#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}

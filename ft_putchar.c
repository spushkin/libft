/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:52:32 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:52:34 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function that writes a single character to the standard
** output stream of the terminal.
** Param. #1 The character to output.
** The last parameter is the number of bytes to write.
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
**	int main ()
**	{
**	char let = 'A';
**	ft_putchar(let);
**	return(0);
**	}
*/

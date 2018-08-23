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
** Outputs the character c to the standard output.
** Param. #1 The character to output.
** Return value None.
** Libc functions write(2).
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
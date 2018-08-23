/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:54:52 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:54:54 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the char c to the file descriptor fd.
** Param. #1 The character to output.
** Param. #2 The file descriptor.
** Return value None.
** Libc functions write(2).
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

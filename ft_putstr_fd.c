/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:55:09 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:55:11 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is exactly the same as our ft_putstr function except that we
** are requiring a file descriptor in the parameter along with the desired
** string to be to be written.
** Param. #1 The string to output.
** Param. #2 The file descriptor.
** Return value None.
** Libc functions write(2).
*/

#include "libft.h"

void		ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*
** int main ()
** {
** 	char string[10] = "letter";
** 	ft_putstr_fd(string, 1);
** 	return(0);
** }
*/

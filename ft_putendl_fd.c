/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:55:21 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:55:23 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function writes the string s to the file descriptor fd followed by a
** '\n' to make a new line. This function is exactly the same as our ft_putendl
** function except that we take in a parameter for the file descriptor.
** We will use our ft_putstr_fd and ft_putchar_fd functions
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

/*
** int main ()
** {
**     char letter = 'A';
**     ft_putchar_fd(letter, 2);
**     return(0);
** }
*/

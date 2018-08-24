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
** This function displays the string s to the standard output.
** We do this using our ft_putchar function.
** Param. #1
** The string to output.
** Return value
** None.
** Libc functions
** write(2).
*/

#include <stdio.h>
#include "libft.h"

void		ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

/*
** int main ()
** {
** char string[15] = "string";
** ft_putstr(string);
** return(0);
** }
*/

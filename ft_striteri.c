/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:48:44 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:48:45 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument,
** and passing its index as first argument. Each character is passed by address
** to f to be modified if necessary.
** Param. #1
** The string to iterate.
** Param. #2
** The function to apply to each character of s and its index.
** Return value
** None.
** Libc functions
** None.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s && f && *s != '\0')
	{
		f(i, s);
		s++;
		i++;
	}
}
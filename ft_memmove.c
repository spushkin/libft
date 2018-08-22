/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:31:51 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:32:09 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  The memmove() function copies len bytes from string src to string
**  dst.  The two strings may overlap; the copy is always done in a non-
**  destructive manner.
*/

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char*)dst;
	s = (char*)src;
	i = 0;
	if (d == s)
		return (d);
	if (s < d)
	{
		i = len;
		while (i--)
			((char*)d)[i] = ((char*)s)[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char*)d)[i] = ((char*)s)[i];
			i++;
		}
	}
	return (d);
}

/*
**  int main () {
**    char dest[] = "oldstring";
**    const char src[]  = "newstring";
**    ft_memmove(dest, src, 9);
**    printf("The result is %s\n", dest);
**
**    return(0);
**}
*/

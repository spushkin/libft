/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:36:41 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 12:36:46 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memset -- fill a byte string with a byte value
** The memset() function writes len bytes of value c
** (converted to an unsigned char) to the string b.
** The memset() function returns its first argument.
*/

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *p;

	p = (char *)b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}

/*
** int main()
** {
**	char str[100] = "first function from my first project";
**
**	ft_memset(str + 11, '.', 8);
**	printf("After memset(): %s\n", str);
**	return 0;
** }
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:37:55 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 15:38:02 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcpy -- copy memory area
** The memcpy() function copies n bytes from memory area src to
** memory area dst.
** If dst and src overlap, behavior is unde-fined.
** Applications in which dst and src might overlap should
** use memmove(3) instead.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	ptr = dst;
	ptr2 = (char *)src;
	i = -1;
	while (++i < n)
		*(ptr + i) = *(ptr2 + i);
	return (dst);
}

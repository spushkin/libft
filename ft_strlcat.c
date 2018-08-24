/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:35:58 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:36:07 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlcat -- size-bounded string copying and concatenation
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	i = 0;
	while ((i < size - (len - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
** int main () {
**    char s1[50] = "This is s1. ";
**    char s2[50] = "This is s2.";
**
**    ft_strcat(s1, s2);
**    printf("Final string : %s\n", s1);
**
**    return(0);
** }
*/

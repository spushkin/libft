/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:34:18 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:34:21 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcpy -- copy strings
** strcpy() functions copy the string src to dst
** (including the terminating `\0' character.
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}

/*
** int main ()
** {
**     char example[50];
**
**     strcpy(example, "Life is good!");
**     printf("%s\n", example);
**
**    return(0);
** }
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:51:55 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:51:57 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a copy of the string
** given as argument without whitespaces at the beginning or at
** the end of the string. Will be considered as whitespaces the following characters
** ’ ’, ’\n’ and ’\t’. If s has no whites- paces at the beginning or at the end, the
** function returns a copy of s. If the allocation fails the function returns NULL.
** Param. #1
** The string to be trimed.
** Return value
** The “fresh” trimmed string or a copy of s.
** Libc functions
** malloc(3)
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	len;
	char	*str;

	start = 0;
	if (!s)
		return (NULL);
	while (((s[start] == ' ') || (s[start] == '\n')
			|| (s[start] == '\t')) && (s[start] != '\0'))
		start++;
	len = ft_strlen(s);
	while (((s[len - 1] == ' ') || (s[len - 1] == '\n')
				|| (s[len - 1] == '\t')) && (s[start] != '\0'))
		len--;
	str = ft_strsub(s, start, len - start);
	if (str)
		return (str);
	return (NULL);
}

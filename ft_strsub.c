/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:50:55 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:51:00 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” substring from
** the string given as argument. The substring begins at indexstart
** and is of size len. If start and len aren’t refer- ing to a valid
** substring, the behavior is undefined. If the allocation fails,
** the function returns NULL.
** Param. #1
** The string from which create the substring.
** Param. #2
** The start index of the substring.
** Param. #3
** The size of the substring.
** Return value
** The substring.
** Libc functions
** malloc(3)
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(str, s, len);
	str[len] = '\0';
	return (str);
}

/*
** int main()
** {
** 	char str[20] = "This is string.";
** 	char *result = ft_strsub(str, 9, 2);
** 	printf("The  result is %s\n", result);
** 	return 0;
** }
*/

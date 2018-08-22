/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:37:08 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:37:13 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  strstr -- locate a substring in a string
**  The strstr() function locates the first occurrence of
**  the null-ter-
**  minated string needle in the null-terminated string haystack.
*/

#include <stdio.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i])
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

/*
**   int main () {
**   const char haystack[20] = "TutorialsPoint";
**   const char needle[10] = "Tu";
**   char *ret;
**
**   ret = ft_strstr(haystack, needle);
**
**   printf("The substring is: %s\n", ret);
**
**   return(0);
**  }
*/

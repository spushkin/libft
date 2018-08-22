/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:37:29 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:37:36 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  strnstr -- locate a substring in a string
**  The strnstr() function locates the first occurrence
**  of the null-ter-
**  minated string needle in the string haystack, where not more than
**  len characters are searched.  Characters that appear after a `\0'
**  character are not searched.
*/

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i] == s2[j] && s1[i] && i < n)
		{
			i++;
			j++;
		}
		if (!s2[j])
			return ((char *)&s1[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

/*
**  int main () {
**  const char haystack[20] = "TutorialsPoint";
**  const char needle[10] = "Ti";
**  char *ret;
**
**  ret = ft_strnstr(haystack, needle, 4);
**
**  printf("The substring is: %s\n", ret);
**
**  return(0);
**  }
*/

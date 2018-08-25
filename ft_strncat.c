/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:35:35 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:35:39 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strncat -- concatenate strings
** The strcat() and strncat() functions append a copy of the null-ter-
** minated string s2 to the end of the null-terminated string s1, then
** add a terminating `\0'.  The string s1 must have sufficient space to
** hold the result.
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

/*
**  int main () {
**     char s1[50] = "This is s1.";
**     char s2[50] = "This is s2.";
**
**     ft_strncat(s1, s2, 5);
**     printf("Final string : %s\n", s1);
**
**     return(0);
**  }
*/

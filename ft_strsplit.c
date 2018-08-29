/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:52:05 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:52:07 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings
** (all ending with ’\0’,
** including the array itself) ob- tained by spliting s using
** the character c as a delimiter.
** If the allocation fails the function returns NULL. Example :
** ft_strsplit("*hello*fellow***students*", ’*’) re- turns the
** array ["hello", "fellow", "students"].
** Param. #1
** The string to split.
** Param. #2
** The delimiter character.
** Return value
** The array of “fresh” strings result of the split.
** Libc functions
** malloc(3), free(3)
*/

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		h;
	int		i;
	int		j;
	char	**p;

	h = 0;
	i = -1;
	if (!s)
		return (NULL);
	if (!(p = (char **)ft_memalloc(sizeof(char *) * (ft_wordcnt(s, c)) + 1)))
		return (NULL);
	while (!(p[h] = NULL) && (++i) < (int)ft_strlen(s))
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (j < i)
		{
			p[h] = ft_strnew(i - j + 1);
			ft_strncpy(p[h++], (char *)s + j, (i - j));
		}
	}
	return (p);
}

/*
** int main()
** {
** 	char str[20] = "This is string.";
** 	char **result = ft_strsplit(str, 'r');
** 	printf("The result is %s\n", *result);
** 	printf("The result is %s\n", result[0]);
** 	printf("The result is %s\n", result[1]);
** 	return 0;
** }
*/

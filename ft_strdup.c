/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:33:56 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:34:00 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strdup, -- save a copy of a string
** The strdup() function allocates sufficient memory for a copy of the
** string s1, does the copy, and returns a pointer to it.  The pointer
** may subsequently be used as an argument to the function free(3).
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*d;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	d = (char *)malloc(i + 1);
	if (d == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

/*
** int main()
** {
**   char str[] = "my library";
**   char* res = ft_strdup(str);
**   printf("%s", res);
**   return 0;
** }
*/

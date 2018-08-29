/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:51:33 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:51:37 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates memory and returns a new string terminated by a '\0'
** which is the result of a concatenation of the parameters s1 and s2. If the
** allocation fails the function will return NULL.
*/

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/*
** int main()
** {
** 	char s1[10] = "String 1.";
** 	char s2[10] = "String 2.";
** 	char *result = ft_strjoin(s1, s2);
** 	printf("The result is %s\n", result);
** 	printf("s1 doesn't change: %s\n", s1);
** 	printf("s2 doesn't change: %s\n", s2);
** 	return 0;
** }
*/

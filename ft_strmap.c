/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:48:56 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:48:58 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This functin applies the given function f to each character of the given
** string in order to create a new string that is the result of have function
** f run on string s. It will return a 'fresh' copy of the modified string
*/

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

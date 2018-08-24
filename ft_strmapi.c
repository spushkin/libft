/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:49:09 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:49:11 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is exactly the same as ft_strmap except that when we run
** our given function f on the character we also pass to f the specific
** index of our character in the given string. Review ft_strmap in order
** to understand how this function works.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	if (!s || !f)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}

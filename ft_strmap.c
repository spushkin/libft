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
** Applies the function f to each character of the string given
** as argument to create a “fresh” new string (with malloc(3)) 
** resulting from the successive applications of f.
** Param. #1
** The string to map.
** Param. #2
** The function to apply to each character of s.
** Return value
** The “fresh” string created from the successive applications of f.
** Libc functions
** malloc(3)
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
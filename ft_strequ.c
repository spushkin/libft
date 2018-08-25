/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:49:34 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:49:38 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function compares lexicographically the given strings s1 and s2. If the
** two strings are equal the function returns 1, otherwise it returns 0. We
** do this using our previously made ft_strcmp function. The way to read what
** is being returned is by thinking, if the result of ft_strcmp returns a number
** greater than or less than 0 (meaning the strings are not equal) then return
** 0, otherwise return 1 (meaning a 0 was returned from ft_strcmp and the
** strings are equal).
*/

#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (-1);
	return (ft_strcmp(s1, s2) ? 0 : 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 15:11:53 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/24 15:12:19 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcnt(const char *t, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (t[i] != '\0')
	{
		while (t[i] == c)
			i++;
		if (t[i] != c)
			count++;
		while (t[i] != c && t[i])
			i++;
	}
	return (count);
}

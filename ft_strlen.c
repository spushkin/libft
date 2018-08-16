/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:33:27 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:33:36 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlen, strnlen -- find length of string
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
** int main()
** {
** 	char str[] = "Life is good.";
** 	int result = ft_strlen(str);
** 	printf("The length of the string is %d.\n", result);
** 	return 0;
** }
*/

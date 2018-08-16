/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:47:15 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:47:23 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** atoi, atoi_l -- convert ASCII string to integer
** The atoi() function converts the initial portion of the string
** pointed to by str to int representation.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

/*
**	int main()
**	{
**    char str[] = "-2";
**    int val = ft_atoi(str);
**    printf ("%d ", val);
**    return 0;
**	}
*/

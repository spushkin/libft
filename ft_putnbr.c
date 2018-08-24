/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:54:29 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:54:36 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the standard output.
** This function is similar to our ft_itoa
** we will be doing it recursively.
** We will be breaking down int number as a whole into individual
** single digit numbers and we will convert those int numbers into characters
** that we will display on the standard output using our ft_putchar function.
** Param. #1 The integer to output.
** Return value None.
** Libc functions write(2).
*/

#include <stdio.h>
#include "libft.h"

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:56:46 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:56:49 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isascii -- test for ASCII character
** The isascii() function tests for an ASCII character,
** which is any character between 0 and octal 0177 inclusive.
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
** int main()
** {
** char c, result;
**
**  c = 'M';
**  result = ft_isascii(c);
**  printf("The result is %d\n", result);
**
**	c = '¥';
**   result = ft_isascii(c);
**    printf("The result is %d\n", result);
**
**   c = '+';
**    result = ft_isascii(c);
**  printf("The result is %d\n", result);
**
**  return 0;
**  }
*/

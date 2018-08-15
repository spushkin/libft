/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:41:45 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:41:48 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tolower, -- upper case to lower case letter conversion
** The tolower() function converts an upper-case letter to the
** corresponding lower-case letter.
** The argument must be repre-sentable as an unsigned char or the value of EOF.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
** int main()
** {
** char c, result;
**
**  c = 'M';
**  result = ft_tolower(c);
**  printf("The result is %c\n", result);
**
**    c = 'm';
**    result = ft_tolower(c);
**    printf("The result is %c\n", result);
**
**   c = '+';
**    result = ft_tolower(c);
**  printf("The result is %c\n", result);
**
**  return 0;
**  }
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:48:44 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:48:45 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function applies the parameter function f to each character of a string
** also passed in it's parameter at at precisely that character's index string
** position. Each character that is passed into the function f is modified if
** necessary.
*/

#include "libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*
** void my_func(unsigned int i, char *str)
** {
** 	printf("My inner function: index = %d and the string is %s\n", i, str);
** }
**
** int main()
** {
** 	char str[10] = "Hello.";
** 	printf("The result is %s\n", str);
** 	ft_striteri(str, my_func);
** 	printf("The result is %s\n", str);
** 	return 0;
** }
*/

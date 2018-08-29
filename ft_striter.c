/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:48:28 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:48:30 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is made to apply the parameter function f
** to each character in
** a string passed as the parameter s. Each character is
** passed by the address
** to the function f so that it can be modified if necessary.
*/

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(s + i);
		i++;
	}
}

/*
** void my_func(char *str)
** {
** 	printf("My inner function %s\n", str);
** }
**
** int main()
** {
** 	char str[10] = "Hello.";
** 	printf("The result is %s\n", str);
** 	ft_striter(str, my_func);
** 	printf("The result is %s\n", str);
** 	return 0;
** }
*/

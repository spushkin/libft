/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:48:07 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:48:10 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function assigns the value '\0' to all the characters in a chain that
** we are changing the value of existing characters to '\0'
** to clear the existing
** string rather than putting '\0' to placehold in a newly allocated memory zone
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	while (s != '\0' && *s)
		*s++ = '\0';
}

/*
** int main()
** {
** 	char str[10] = "Hello.";
** 	printf("The result is %s\n", str);
** 	ft_strclr(str);
** 	printf("The result is %s\n", str);
** 	return 0;
** }
*/

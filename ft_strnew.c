/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:47:29 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:47:32 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates memory and returns a 'fresh' string that ends with
** '\0'. Each character in the string is set to '\0' if the allocation fails the
** function returns NULL. To do this we simply use our ft_memalloc function with
** the size parameter given to our function. We make sure cast
** it as a char string
** because that is what we want to return and we have to add + 1 to our size_t
** to compensate for the terminating '\0'.
*/

#include "libft.h"

char		*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

/*
** int main()
** {
** 	char *result = ft_strnew(5);
** 	printf("The result is %s\n", result);
** 	return 0;
** }
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:46:48 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:46:52 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” memory area.
** The memory allocated is initialized to 0. If the alloca- tion fails,
** the function returns NULL.
** We first make a void variable of pointer mem. This is so that we can use the
** zone of allocated memory that will be applied to it for any type of data.
** We then use malloc to allocate memory to our mem variable based on the size
** given in the parameter. If the allocation fails we return NULL. Otherwise
** we then run the function ft_bzero on our allocated zone of memory mem and
** give it our size parameter. We then return our void variable mem.
*/

#include <stdio.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

/*
**	int main()
**  {
**	char *result = ft_memalloc(5);
**	printf("The result is %s\n", result);
**	return 0;
**	}
*/

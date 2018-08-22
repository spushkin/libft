/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:33:03 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 17:33:11 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcmp -- compare byte string
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
*/

#include <stdio.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1c;
	unsigned char	*s2c;
	size_t			i;

	i = -1;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	while (++i < n && *(s1c + i) == *(s2c + i))
		;
	if (i == n)
		return (0);
	return (*(s1c + i) - *(s2c + i));
}

/*
**  int main () {
**  char str1[15];
**  char str2[15];
**  int ret;
**
**  strcpy(str1, "abcdef");
**  strcpy(str2, "ABCDEF");
**
**  ret = ft_memcmp(str1, str2, 4);
**
**  if(ret < 0) {
**      printf("str1 is less than str2");
**   } else if(ret > 0) {
**      printf("str2 is less than str1");
**   } else {
**      printf("str1 is equal to str2");
**   }
**
**   return(0);
**}
*/

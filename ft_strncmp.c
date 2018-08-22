/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 11:31:58 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/15 11:32:38 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  strncmp -- compare strings
**  The strncmp() function compares not more than n characters.  Because
**  strncmp() is designed for comparing strings rather than binary data,
**  characters that appear after a `\0' character are not compared.
*/

#include <stdio.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && (int)n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	else
		return (0);
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
**  ret = ft_strncmp(str1, str2, 4);
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

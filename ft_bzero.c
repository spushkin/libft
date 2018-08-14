/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:10:51 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/14 14:11:11 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** bzero -- write zeroes to a byte string
** The bzero() function writes n zeroed bytes to the string s.
** If n is zero, bzero() does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	char *p;

	p = (char *)b;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
	return ;
}

/*
** void	ft_bzero(void *s, size_t n)
** {
** 	ft_memset(s, 0, n);
** }
*/

/*
** int main()
** {
**    char str[100] = "working on bzero function.";
**
**    ft_bzero(str + 3, 1);
**    printf("After memset(): %s\n", str);
**    return 0;
** }
*/

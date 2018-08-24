/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:47:46 by spushkin          #+#    #+#             */
/*   Updated: 2018/08/22 16:47:51 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** his function takes in the parameter of an address to a chain of characters
** that should be freed and then set to NULL. We do this by running our
** ft_memdel function and casting the pointer address as a void that we put
** into its parameter.
*/

#include "libft.h"

void		ft_strdel(char **as)
{
	ft_memdel((void **)as);
}

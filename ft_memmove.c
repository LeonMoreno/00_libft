/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:19:50 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/02 13:26:12 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		cont;
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	cont = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (cont < len)
		{	
			d[cont] = s[cont];
			cont++;
		}
	}
	return (dst);
}

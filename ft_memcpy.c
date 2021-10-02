/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:54:20 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/02 13:23:13 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		cont;
	char		*d;
	const char	*s;

	d = (char *) dst;
	s = (const char *) src;
	cont = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	while (cont < n)
	{
		d[cont] = s[cont];
		cont++;
	}
	return (d);
}

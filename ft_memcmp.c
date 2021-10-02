/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:26:09 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/02 14:23:47 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		cont;
	const unsigned char	*s;
	const unsigned char	*d;

	s = (const unsigned char *)s1;
	d = (const unsigned char *)s2;
	cont = 0;
	while (cont < n)
	{
		if (s[cont] != d[cont])
			return (s[cont] - d[cont]);
		cont++;
	}
	return (0);
}

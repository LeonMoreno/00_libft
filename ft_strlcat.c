/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:57:48 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/01 19:07:04 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;

	cont = 0;
	while (src[cont] != '\0' && cont < dstsize)
	{
		dst[cont] = src[cont];
		cont++;
	}
	dst[cont] = '\0';
	return (dst);
}

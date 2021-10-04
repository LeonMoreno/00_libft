/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:39:15 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/04 17:39:59 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dlen;
	int	i;

	i = 0;
	dlen = ft_strlen(dst);
	if ((int) dstsize <= dlen)
		return ((int) dstsize + ft_strlen(src));
	while (src[i] != '\0' && ((int) dstsize - 1) > dlen)
	{
		dst[dlen] = src[i];
		dlen++;
		i++;
	}
	dst[dlen] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

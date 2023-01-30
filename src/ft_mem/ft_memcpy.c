/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:19:05 by LeoMoreno         #+#    #+#             */
/*   Updated: 2022/10/22 14:50:02 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int	main(void)
{
	char *ptr1 = "Hola leo";
	char *dst;

	dst = malloc(sizeof(char) * 10);

	//char dst[50];
	char *res;

	res = ft_memcpy(dst, ptr1, 5);
	printf("%s", res);
	return (0);
}

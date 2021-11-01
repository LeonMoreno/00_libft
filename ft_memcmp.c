/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:18:59 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/01 15:51:02 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return ((((unsigned char *)s1)[i]) - (((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}

/*int main(void)
{
	char s1[] = "\xff\xaa\xde\xffMACOSX\xff";
	char s2[] = "\xff\xaa\xde\x02";

	printf("%d\n", ft_memcmp(s1, s2, 8));
}
*/

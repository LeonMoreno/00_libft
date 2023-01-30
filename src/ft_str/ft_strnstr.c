/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:29:47 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/14 18:41:52 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont_1;
	size_t	cont_2;
	size_t	cont_3;

	cont_1 = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[cont_1] != '\0' && cont_1 < len)
	{
		cont_2 = 0;
		if (haystack[cont_1] == needle[cont_2])
		{
			cont_3 = cont_1;
			while (haystack[cont_2 + cont_1]
				&& haystack[cont_3] == needle[cont_2] && cont_3 < len)
			{
				cont_2++;
				cont_3++;
			}
		}	
		if (needle[cont_2] == '\0')
			return ((char *)&haystack[cont_1]);
		cont_1++;
	}
	return (NULL);
}

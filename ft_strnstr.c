/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:29:47 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/06 12:59:47 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	cont_1;
	int	cont_2;
	int	cont_3;

	cont_1 = 0;
	if (ft_strlen(needle) == 0 || ft_strlen(haystack) == 1)
		return ((char *) haystack);
	while (haystack[cont_1] != '\0' && cont_1 < (int) len)
	{
		cont_2 = 0;
		if (haystack[cont_1] == needle[cont_2])
		{
			cont_3 = cont_1;
			while (haystack[cont_2 + cont_1]
				&& haystack[cont_3] == needle[cont_2] && cont_3 < (int) len)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:04:59 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/19 17:54:13 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		cont;
	int		cont2;
	char	*ptr;

	cont = 0;
	cont2 = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[cont])
	{
		ptr[cont] = s1[cont];
		cont++;
	}
	while (s2[cont2])
	{
		ptr[cont] = s2[cont2];
		cont++;
		cont2++;
	}
	ptr[cont] = '\0';
	return (ptr);
}

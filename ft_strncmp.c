/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:21:37 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/02 14:45:13 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while ((s1[cont] != '\0' && s2[cont] != '\0') && cont < n)
	{
		if (s1[cont] != s2[cont])
			return ((unsigned char) s1[cont] - s2[cont]);
		cont++;
	}
	if (cont < n && ((s2[cont] != '\0' && s1[cont] == '\0')
			|| (s1[cont] != '\0' && s2[cont] == '\0')))
		return ((unsigned char) s1[cont] - s2[cont]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:06:09 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/05 11:09:43 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont])
		cont++;
	while ((cont + 1) > 0)
	{
		if (s[cont] == (char) c)
			return ((char *)&s[cont]);
		cont--;
	}	
	return (NULL);
}

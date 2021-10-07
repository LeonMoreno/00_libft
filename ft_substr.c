/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:06:11 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/07 16:53:06 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t	cont;

	cont = 0;
	if (!s)
		return (NULL);
	nstr = malloc(sizeof(char *) * (len + 1));
	if (!nstr)
		return (NULL);
	if ((int) start <= ft_strlen(s))
	{
		while (s[start + cont] && cont < len)
		{
			nstr[cont] = s[start + cont];
			cont++;
		}
		nstr[cont] = '\0';
	}
	else
		return ("");
	return (nstr);
}

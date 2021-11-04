/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:19:23 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/04 18:01:55 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strcpy(char *src, char *dst)
{
	if (!src || !dst)
		return (NULL);
	while (*src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}

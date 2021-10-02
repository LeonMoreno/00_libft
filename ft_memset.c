/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:21:45 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/01 18:38:43 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*ptr;

	cont = 0;
	ptr = b;
	while (cont < len)
	{
		ptr[cont] = (unsigned char)c;
		cont++;
	}
	return (b);
}

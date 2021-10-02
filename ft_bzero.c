/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:38:59 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/01 18:41:14 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			cont;
	unsigned char	*ptr;

	ptr = s;
	cont = 0;
	while (cont < n)
	{
		ptr[cont] = '\0';
		cont++;
	}
}

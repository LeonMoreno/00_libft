/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:19:46 by lmoreno           #+#    #+#             */
/*   Updated: 2021/10/07 14:04:37 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		cont;
	int		res;
	int		sign;

	cont = 0;
	res = 0;
	sign = 1;
	while ((str[cont] >= 9 && str[cont] <= 13) || str[cont] == 32)
		cont++;
	if (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			sign = sign * -1;
		cont++;
	}
	while (str[cont] != '\0' && ((str[cont] >= '0' && str[cont] <= '9')))
	{
		res = (res * 10) + (str[cont] - 48);
		cont++;
	}
	return (sign * res);
}

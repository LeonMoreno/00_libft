/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:32:41 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/01 19:38:37 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cont;
	int	res;

	cont = 0;
	res = 0;
	if (str[cont] >= 48 && str[cont] <= 57)
	{
		while (str[cont] != '\0' && (str[cont] >= 48 && str[cont] <= 57))
		{
			res = (res * 10) + (str[cont] - 48);
			cont++;
		}
		return (res);
	}
	if ((str[cont] >= 'A' && str[cont] <= 'Z')
		|| (str[cont] >= 97 && str[cont] <= 122))
	{
		while (str[cont] != '\0')
		{
			res = (str[cont] - str[cont]) + '0';
			printf ("res vale: %d\n", res);
			cont++;
		}
		return (res);
	}
	return (7);
}

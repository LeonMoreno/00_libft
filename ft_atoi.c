/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:17:02 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/01 14:47:09 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sing;
	int	res;

	sing = 1;
	res = 0;
	while (ft_space(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sing = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = (10 * res) + (*str - '0');
		str++;
	}
	return (res * sing);
}

/*int main(void)
{
	char s[] = "\t\v\f\r\n \f-06050";
	//char str[] = "      929829 ===== Hola mi leo, TE quiero Mucho";

	printf("%d\n", ft_atoi(s));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:10:09 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/04 18:02:38 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The string is placed in the buffer passed. */
/* The buff must be large enough to hold the output */

#include "libft.h"

static int	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		n = n * -1;
		len++;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	size_t	len;

	len = ft_len(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	nb = n;
	res[len--] = '\0';
	if (nb == 0)
		res[0] = 48;
	if (nb < 0)
	{
		nb = nb * -1;
		res[0] = '-';
	}
	while (nb)
	{
		res[len--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (res);
}

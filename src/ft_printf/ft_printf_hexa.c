/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:46:22 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/09 14:48:27 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexa_mayus(unsigned int nb, int *len)
{
	int	modu;

	modu = 0;
	/*if (nb < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}*/
	if (nb < 10)
		ft_putchar(nb + 48, len);
	if (nb >= 10 && nb < 16)
		ft_putchar(nb + '7', len);
	if (nb >= 16)
	{
		ft_puthexa_mayus (nb / 16, len);
		modu = nb % 16;
		if (modu < 10)
			ft_putchar(modu + 48, len);
		if (modu >= 10 && modu < 16)
			ft_putchar(modu + '7', len);
	}
}

void	ft_puthexa_minus(unsigned int nb, int *len)
{
	int	modu;

	modu = 0;
	/*if (nb < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}*/
	if (nb < 10)
		ft_putchar(nb + 48, len);
	if (nb >= 10 && nb < 16)
		ft_putchar(nb + 'W', len);
	if (nb >= 16)
	{
		ft_puthexa_minus (nb / 16, len);
		modu = nb % 16;
		if (modu < 10)
			ft_putchar(modu + 48, len);
		if (modu >= 10 && modu < 16)
			ft_putchar(modu + 'W', len);
	}
}

void	ft_put_ptr(unsigned long long nb, int *len)
{
	unsigned long long	modu;

	modu = 0;
	if (nb < 16)
		*len += write(1, "0x", 2);
	if (nb < 10)
		ft_putchar(nb + 48, len);
	if (nb >= 10 && nb < 16)
		ft_putchar(nb + 'W', len);
	if (nb >= 16)
	{
		ft_put_ptr (nb / 16, len);
		modu = nb % 16;
		if (modu < 10)
			ft_putchar(modu + 48, len);
		if (modu >= 10 && modu < 16)
			ft_putchar(modu + 'W', len);
	}
}

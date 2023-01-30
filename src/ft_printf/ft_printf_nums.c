/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nums.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:48:13 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/10 12:51:03 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb, int *len)
{
	int	modu;

	modu = 0;
	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + 48, len);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		modu = nb % 10;
		ft_putchar(modu + 48, len);
	}
}

void	ft_put_unsigned(unsigned int nb, int *len)
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
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		modu = nb % 10;
		ft_putchar(modu + 48, len);
	}
}

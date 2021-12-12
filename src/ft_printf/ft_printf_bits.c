#include "libft.h"

void ft_printf_bits (int nb, int *len)
{
	int bits;

	bits = sizeof(nb) * 8;
	while (bits--)
		ft_putchar((nb >> bits & 1) + 48, len);
}


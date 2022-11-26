/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:19:23 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/07 13:57:03 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, char *src)
{
	if (!src && !dst)
		return (NULL);
	while (*src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}

/*int main(void)
{
	char s[] = "--> nyancat <--\n\r";
	//char s[] = "Hola mi Leo";
	char d[100];

	ft_strcpy(d, s);
	printf("%s\n", d);
}*/

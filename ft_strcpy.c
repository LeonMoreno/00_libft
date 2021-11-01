/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:19:23 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/01 14:35:53 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strcpy(char *src, char *dst)
{
	if (!src || !dst)
		return (NULL);
	while ((*dst++ = *src++) != '\0')
		;
	*dst = '\0';
	return (dst);
}

/*int main(void)
{
	char s[] = "Hola mi leo, tu eres LUZ";
	char d[100];

	ft_strcpy(s, d);
	printf("%s\n", d);
}
*/

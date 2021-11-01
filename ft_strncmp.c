/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:20:56 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/01 15:01:08 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	if (i < n && ((s2[i] != '\0' && s1[i] == '\0')
			|| (s1[i] != '\0' && s2[i] == '\0')))
		return ((unsigned char) s1[i] - s2[i]);
	return (0);
}

/*int main(void)
{
	char s1[] = "AAA";
	char s2[] = "";

	printf("%d\n", ft_strncmp(s1, s2, 7));
} */

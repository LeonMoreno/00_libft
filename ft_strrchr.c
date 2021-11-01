/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:21:03 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/01 14:57:00 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char) c)
			return (&((char *)s)[len]);
		len--;
	}
	return (NULL);
}

/*int main(void)
{
	char str[] = "OLe pues mi Leo";

	printf("%s\n", ft_strrchr(str, 'L'));
}
*/

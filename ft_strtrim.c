/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:21:06 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/01 14:44:01 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (res = ft_substr(s1, 0, len + 1));
}

/*int main(void)
{
	char str[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\t\t\n  ";

	printf("|%s|\n", ft_strtrim(str, " \n\t"));
}*/

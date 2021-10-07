/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:28:08 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/07 14:03:07 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char 		*s_f;
	char		*res;
	int			i;

	if (!(s1))
		return (NULL);
	i = 0;
	s_f = (char *) s1;
	while (*s_f != '\0')
		s_f++;
	while (set_check(*s_f, set) || *s_f == '\0')
		s_f--;
	while (set_check(*s1, set))
		s1++;
	if (s_f < s1)
		return ("");
	res = malloc(sizeof(char) * (s_f - s1) + 2);
	if (!res)
		return (NULL);
	while (s1 <= s_f)
	{
		res[i] = *s1++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

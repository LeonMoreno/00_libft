/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:44:09 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/14 18:47:00 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *w, char c)
{
	int	cnt_w;
	int	cnt_c;

	cnt_w = 0;
	cnt_c = 0;
	while (*w != '\0')
	{
		if (cnt_c == 0 && *w != c && *w != '\0')
		{
			cnt_w++;
			cnt_c = 1;
		}
		else if (cnt_c == 1 && *w == c)
			cnt_c = 0;
		w++;
	}
	return (cnt_w);
}

static int	word_len(char const *w, char c)
{
	int	len;

	len = 0;
	while (w[len] != c && w[len] != '\0')
		len++;
	return (len);
}

static char	*cpy_word(char const *w, char c)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (word_len(w, c) + 1));
	if (!word)
		return (NULL);
	while (*w != c && *w != '\0')
		word[i++] = *w++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			res[i++] = cpy_word(s, c);
			s = s + word_len(s, c);
		}
	}
	res[i] = NULL;
	return (res);
}

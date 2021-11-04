/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:08:24 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/11/04 18:01:50 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define IN 1
#define OUT 0

int	ft_cnt_words(char const *s, char c)
{
	int	state;
	int	word;

	word = 0;
	state = OUT;
	while (*s)
	{
		if (*s == (char)c)
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			word++;
		}
		s++;
	}
	return (word);
}

int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	*ft_cpy(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (ft_wordlen(s, c) + 1));
	if (!word)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
	{
		word[i] = s[i];
		i++;
	}
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
	res = malloc(sizeof(char *) * (ft_cnt_words(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		if (*s != c && *s != '\0')
			res[i++] = ft_cpy(s, c);
		s = s + ft_wordlen(s, c);
	}
	res[i] = NULL;
	return (res);
}

#include "libft.h"

void	ft_freetab(char **str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(str[i]);
	free(str);
}

int count_words(char const *w, char c)
{
	int cnt_w;
	int cnt_c;

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

int word_len(char const *w, char c)
{
	int len;

	len = 0;
	while (*w != c && *w != '\0')
	{
		len++;
		w++;
	}
	return (len);
}

char *cpy_word(char const *w, char c)
{
	char *word;
	int i;

	i = 0;
	word = malloc(sizeof(char) * word_len(w, c));
	if (!word)
		return (NULL);
	while (*w != c)
		word[i++] = *w++;
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	char **res;
	int i = 0;

	if(!s)
		return (NULL);
	res = malloc(sizeof(char *) * count_words(s, c));
	if (!res)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			res[i++] = cpy_word(s, c);
				if (!res)
				{
					ft_freetab(res, count_words(s, c));
					return (NULL);
				}
			s = s + word_len(s, c);
		}
	}
	res[i] = NULL;
	return (res);
}	

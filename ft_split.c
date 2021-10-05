#include "libft.h"

int count_word(char const *s, char c)
{
	int cnt_wo;
	
	cnt_wo = 1;
	while (*s != '\0')
	{
		if (*s == c && *(s + 1) == c)
			s++;
		if (*s == c)
			cnt_wo++;		
		s++;
	}
	return (cnt_wo);
}

void word_len(char const *s, char c, char **res)
{
	int word_len;
	int i;

	i = 0;
	word_len = 1;
	while (*s != '\0')
	{
		if (*s == c && *(s + 1) == c)
			s++;
		if (*s != c && *s != '\0')
			word_len++;
		else
		{
			res[i] = malloc (sizeof(char) * word_len);
		   	word_len = 1;
	   		i++;
		}
	s++;		
	}
		res[i] = malloc (sizeof(char) * word_len);
}

void cpy_word(char const *s, char c, char **res)
{
	char *word;
	int i;

	i = 0;
	word = res[i];
	while (*s != '\0')
	{
		if (*s == c && *(s + 1) == c)
			s++;
		if (*s != c && *s != '\0')
			*word++ = *s;
		else
		{
			*word = '\0';
			i++;
			word = res[i];
		}
		s++;
	}
	*word = '\0'; 
}


char **ft_split(char const *s, char c)
{
	char **res;
	if (!s)
		return (NULL);
	if (!(res = malloc(sizeof(*res) *  count_word(s, c))))
			return (NULL);
	word_len(s, c, res);
	cpy_word(s, c, res);
	return (res);
}

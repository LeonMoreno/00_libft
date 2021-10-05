#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *nstr = NULL;
	size_t cont;

	cont = 0;
	if (s == NULL)
		return (NULL);
	//if ((int) start >= ft_strlen(s))
	//	return (nstr);
	nstr = malloc(sizeof (*nstr) * (len + 1));
	if (!nstr)
		return (NULL);
	while (cont < len)
	{
		nstr[cont] = s[start];
		start++;
		cont++;
	}
	nstr[cont] = '\0';
	return (nstr);
}

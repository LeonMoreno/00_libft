#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *tab;
	int i;

	i = 0;
	while (s1[i])
	i++;
	tab = malloc(sizeof(*tab) * (i + 1));
	i = 0;
	while (s1[i])
	{
	tab[i] = s1[i];
	i++;
	}
	return(tab);
}	
	



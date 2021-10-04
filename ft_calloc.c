#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *tab;
	size_t i;

	i = 0;
	tab = malloc(count * size);
	while (i < count)
	{
		((int *)tab)[i] = 0;
		printf("%d\n", ((int *)tab)[i]);
		i++;
	}
	return(tab);
}		

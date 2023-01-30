#include "include/libft.h"

int main (void)
{
	char	**res;
	int		i = 0;

	res = ft_split("hola mi leo", ' ');
	while (res[i] != 0)
	{
		printf("ret = %s\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return	(0);
}

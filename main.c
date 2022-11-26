#include "include/libft.h"

int main(void)
{
	char s[] = "    Hola     mi     leo\n    ";
	char **split;
	int i = 0;

	split = ft_split(s, ' ');
	while (split[i])
	{
		printf("split = %s\n", split[i]);
		i++;
	}
	return (0);
}

#include "libft.h"

int main(void)
{
	int a;
	char res;
	char s9[] = "leo hola  Colombia aqui esot en 42 leo";
	char dst9[100];
	char s1_19[] = "Hola Leo";
	char s2_19[] = "Hola Leo";
	
	printf("Menu des programmes\n\n");
	printf("1. -- ft_isalpha\n");
	printf("2. -- ft_isdigit\n");
	printf("3. -- ft_isalnum\n");
	printf("4. -- ft_isascii\n");
	printf("5. -- ft_isprint\n");
	printf("6. -- ft_strlen\n");
	printf("7. -- ft_memset\n");
	printf("8. -- ft_bzero\n");
	printf("9. -- ft_memcpy\n");
	printf("10. -- ft_memmove\n");
	printf("11. -- ft_strlcpy\n");
	printf("12. -- ft_strlcat\n");
	printf("19. -- ft_memcmp\n");
	printf("Tapez le programme que vous souhaitez exécuter: \n" );
	scanf("%d", &a);

	switch(a)
	{
		case 9:
			ft_memcpy(dst9, s9, 7);
			printf("%s\n", dst9);
			break;
		case 19:
			res = ft_memcmp(s1_19, s2_19, 5);
			printf("%s\n", dst9);
			break;
		case 11:
			ft_strlcpy(dst9, s9, 4);
			printf("%s\n", dst9);
			break;
	}
	return (0);
}
	
	
	
	//int ch;
	//int res;
	//int i;
	//char **ptr;

	//ft_bzero(dst, 100);
	//int res;
	
	//ch = 's';
	//res = ft_isalpha(c);
	//res = ft_isdigit(c);
	//res = ft_isalnum(c);
	//res = ft_isascii(c);
	//res = ft_isprint(c);
	//res = ft_strlen(s);
	//ft_memset(s, c, 4);
	//ft_bzero(s, 4);
	//printf(" Avant d = %s s = %s \n", d, s);
	//ft_memmove(d, s, 9);
	//ft_strlcat(dst, s, 7);
	//printf("Antes func %c\n", ch);
	//res = ft_toupper(ch);
	//res = ft_tolower(ch);
	//res = ft_strchr(s, ch, &ptr);
	//res = ft_strrchr(s, ptr, 3);
	//res = ft_strncmp(s, ptr, 2);
	//res = ft_memchr(s,'s', 15);
	//res = ft_strnstr(s, d);
	//res = ft_atoi(s);
	//ptr = ft_strdup(s);
	//ptr = ft_substr(s, 5, 4);
	//ptr = ft_strjoin(s, d);
	//ptr = ft_strtrim(s, d);
	// ptr = ft_split(s, d);

	//printf("%s\n", *ptr);
	//printf(" Despues d = %s s = %s \n", d, s);
	
	 //for(i = 0; ptr[i]; i++)
	 //{
	// printf("%s \n", ptr[i]);
	 //}
	 

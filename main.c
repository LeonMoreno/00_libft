#include "libft.h"

int main(void)
{
	int a;
	char res;
	char *res_20;
	int res_11;
	char s9[] = "A";
	char dst9[100];
	char needle[] = "";
	char dst_12[] = "aqui";
	char s1_19[] = "";
	char s2_19[] = "Hola Leo";
	char s_26[] = "Leo hola como estas Leo";
	char set[] = "Leo";
	int i = 0;
	char **ptr;
	char s[] = "      split       this for   me  !       ";
	
	printf("\n\t\tMenu des programmes 1era Parte\n\n");
	printf("1. -- ft_isalpha\n");
	printf("2. -- ft_isdigit\n");
	printf("3. -- ft_isalnum\n");
	printf("4. -- ft_isascii\n");
	printf("5. -- ft_isprint\n");
	printf("6. -- ft_strlen\n");
	printf("7. -- ft_memset\n");
	printf("8. -- ft_bzero\n");
	printf("9. -- ft_memcpy\n");
	printf("10. -- ft_memmove\t");
	printf("19. -- ft_memcmp\n");
	printf("11. -- ft_strlcpy\t");
	printf("20. -- ft_strnstr\n");
	printf("12. -- ft_strlcat\t");
	printf("21. -- ft_atoi\n");
	printf("\n\t\tMenu des programmes 2da  Parte\n\n");
	printf("24. -- ft_substr\n");
	printf("26. -- ft_strtrim\n");
	printf("27. -- ft_split\n");
	printf("28. -- ft_itoa\n");
	
	printf("\n\nTapez le programme que vous souhaitez exécuter: " );
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
			res_11 = ft_strlcpy(dst9, s9, 0);
			//ft_strlcpy(((void *)0), ((void *)0), 10);
			printf("%s\n", dst9);
			printf("%d\n", res_11);
			break;
		case 12:
			res_11 = ft_strlcat(dst_12, s9, 20);
			printf("%s\n", dst_12);
			printf("%d\n", res_11);
			break;
		case 20:
			res_20 = ft_strnstr(s9, needle, 2);
			printf("%s\n", res_20);
			printf("%p\n", res_20);
			break;
		case 21:
			res_11 = ft_atoi(s1_19);
			printf("%d\n", res_11);
			break;
		case 24:
			res_20 = ft_substr(s1_19, 5, 4);
			printf("%s\n", res_20);
			break;
		case 26:
			res_20 = ft_strtrim(s_26, set);
			printf("%s\n", res_20);
			break;
		case 27:
			ptr = ft_split(s, ' ');
			for(i = 0; ptr[i]; i++)
	 		{
	 			printf("%s \n", ptr[i]);
			}
			break;
		case 28:
			res_20 = ft_itoa(-9870);
	 		printf("%s \n", res_20);
			break;
	}
	return (0);
}
	
	
	
	//int ch;
	//int res;
	//int i;

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
	//res = ft_toupper(ch);
	//res = ft_tolower(ch);
	//res = ft_strchr(s, ch, &ptr);
	//res = ft_strrchr(s, ptr, 3);
	//res = ft_strncmp(s, ptr, 2);
	//res = ft_memchr(s,'s', 15);
	//ptr = ft_strdup(s);
	//ptr = ft_strjoin(s, d);

	//printf("%s\n", *ptr);
	//printf(" Despues d = %s s = %s \n", d, s);
	
	 

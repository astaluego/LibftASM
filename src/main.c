/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderuell <aderuell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/02 15:34:28 by aderuell          #+#    #+#             */
/*   Updated: 2015/10/16 20:11:16 by aderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void		ft_bzero(void *s, size_t n);
char		*ft_strcat(char *str1, char *str2);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_puts(char *str);

size_t		ft_strlen(char *str);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dst, void *src, size_t n);
char		*ft_strdup(char *s1);

void		test_unitaire_bzero(char *str, int dec, size_t size)
{
	int		len;
	int		i;

	printf("ft_bzero(str + %d, %zu)\n", dec, size);
	len = strlen(str);
	i = 0;
	printf("AVANT :");
	while (i < len)
	{
		printf("\033[32m %c \033[00m",str[i]);
		i = i + 1;
	}
	printf("\n");
	printf("APRES :");
	ft_bzero(str + dec, size);
	i = 0;
	while (i < len)
	{
		if (str[i])
			printf("\033[32m %c \033[00m",str[i]);
		else
			printf("\033[31mnul\033[00m");
		i = i + 1;
	}
	printf("\n\n");
}

void		test_bzero(void)
{
	char	str[] = "hello-le-monde";
	char	str2[] = "hello-le-monde";
	char	str3[] = "hello-le-monde";
	char	str4[] = "hello-le-monde";

	printf("\033[35m___FT_BZERO______________________________________\033[00m\n\n");
	test_unitaire_bzero(str, 0, 5);
	test_unitaire_bzero(str2, 4, 3);
	test_unitaire_bzero(str3, 6, 0);
	test_unitaire_bzero(str4, 11, 3);
}

void		test_unitaire_strcat(char *str2)
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(str2) + 3));
	str[0] = 'h';
	str[1] = 'e';
	str[2] = '\0';
	printf("AVANT : \n");
	printf("[\033[32m%s\033[00m] + [\033[32m%s\033[00m]\n", str, str2);
	printf("APRES : \n");
	printf("[\033[32m%s\033[00m]\n\n", ft_strcat(str, str2));
}

void		test_strcat(void)
{
	printf("\033[35m___FT_STRCAT_____________________________________\033[00m\n\n");
	test_unitaire_strcat("llo");
	test_unitaire_strcat("rcule");
}

void		test_unitaire_isalpha(int c)
{
	int		i;

	i = ft_isalpha(c);
	if (i == 1)
		printf("[%3d][%c] = \033[32mTRUE\033[00m\n", c, c);
	else
		printf("[%3d][%c] = \033[31mFALSE\033[00m\n", c, c);
}

void		test_isalpha(void)
{
	printf("\033[35m___FT_ISALPHA____________________________________\033[00m\n\n");

	test_unitaire_isalpha(-1);
	test_unitaire_isalpha(0);
	test_unitaire_isalpha(64);
	test_unitaire_isalpha(65);
	test_unitaire_isalpha(87);
	test_unitaire_isalpha(90);
	test_unitaire_isalpha(91);
	test_unitaire_isalpha(96);
	test_unitaire_isalpha(97);
	test_unitaire_isalpha(113);
	test_unitaire_isalpha(122);
	test_unitaire_isalpha(123);
	test_unitaire_isalpha(127);
	test_unitaire_isalpha(128);
	printf("\n");
}

void		test_unitaire_isdigit(int c)
{
	int		i;

	i = ft_isdigit(c);
	if (i == 1)
		printf("[%3d][%c] = \033[32mTRUE\033[00m\n", c, c);
	else
		printf("[%3d][%c] = \033[31mFALSE\033[00m\n", c, c);
}

void		test_isdigit(void)
{
	printf("\033[35m___FT_ISDIGIT____________________________________\033[00m\n\n");

	test_unitaire_isdigit(-1);
	test_unitaire_isdigit(0);
	test_unitaire_isdigit(47);
	test_unitaire_isdigit(48);
	test_unitaire_isdigit(57);
	test_unitaire_isdigit(58);
	test_unitaire_isdigit(127);
	test_unitaire_isdigit(128);
	printf("\n");
}

void		test_unitaire_isalnum(int c)
{
	int		i;

	i = ft_isalnum(c);
	if (i == 1)
		printf("[%3d][%c] = \033[32mTRUE\033[00m\n", c, c);
	else
		printf("[%3d][%c] = \033[31mFALSE\033[00m\n", c, c);
}

void		test_isalnum(void)
{
	printf("\033[35m___FT_ISALNUM____________________________________\033[00m\n\n");

	test_unitaire_isalnum(-1);
	test_unitaire_isalnum(0);
	test_unitaire_isalnum(47);
	test_unitaire_isalnum(48);
	test_unitaire_isalnum(57);
	test_unitaire_isalnum(58);
	test_unitaire_isalnum(64);
	test_unitaire_isalnum(65);
	test_unitaire_isalnum(87);
	test_unitaire_isalnum(90);
	test_unitaire_isalnum(91);
	test_unitaire_isalnum(96);
	test_unitaire_isalnum(97);
	test_unitaire_isalnum(113);
	test_unitaire_isalnum(122);
	test_unitaire_isalnum(123);
	test_unitaire_isalnum(127);
	test_unitaire_isalnum(128);
	printf("\n");
}

void		test_unitaire_isascii(int c)
{
	int		i;

	i = ft_isascii(c);
	if (i == 1)
		printf("[%3d][%c] = \033[32mTRUE\033[00m\n", c, c);
	else
		printf("[%3d][%c] = \033[31mFALSE\033[00m\n", c, c);
}

void		test_isascii(void)
{
	printf("\033[35m___FT_ISASCII____________________________________\033[00m\n\n");

	test_unitaire_isascii(-1);
	test_unitaire_isascii(0);
	test_unitaire_isascii(113);
	test_unitaire_isascii(122);
	test_unitaire_isascii(127);
	test_unitaire_isascii(128);
	printf("\n");
}

void		test_unitaire_isprint(int c)
{
	int		i;

	i = ft_isprint(c);
	if (i == 1)
		printf("[%3d][%c] = \033[32mTRUE\033[00m\n", c, c);
	else
		printf("[%3d][%c] = \033[31mFALSE\033[00m\n", c, c);
}

void		test_isprint(void)
{
	printf("\033[35m___FT_ISPRINT____________________________________\033[00m\n\n");

	test_unitaire_isprint(-1);
	test_unitaire_isprint(0);
	test_unitaire_isprint(7);
	test_unitaire_isprint(28);
	test_unitaire_isprint(32);
	test_unitaire_isprint(74);
	test_unitaire_isprint(113);
	test_unitaire_isprint(122);
	test_unitaire_isprint(127);
	test_unitaire_isprint(128);
	printf("\n");
}

void		test_unitaire_toupper(int c)
{
	int		i;

	i = ft_toupper(c);
	if (i != c)
		printf("[%3d][%c] = \033[32m[%c]\033[00m\n", c, c, i);
	else
		printf("[%3d][%c] = \033[31m[%c]\033[00m\n", c, c, i);
}

void		test_toupper(void)
{
	printf("\033[35m___FT_TOUPPER____________________________________\033[00m\n\n");

	test_unitaire_toupper(50);
	test_unitaire_toupper(66);
	test_unitaire_toupper(114);
	test_unitaire_toupper(122);
	test_unitaire_toupper(125);
	printf("\n");
}

void		test_unitaire_tolower(int c)
{
	int		i;

	i = ft_tolower(c);
	if (i != c)
		printf("[%3d][%c] = \033[32m[%c]\033[00m\n", c, c, i);
	else
		printf("[%3d][%c] = \033[31m[%c]\033[00m\n", c, c, i);
}

void		test_tolower(void)
{
	printf("\033[35m___FT_TOLOWER____________________________________\033[00m\n\n");

	test_unitaire_tolower(50);
	test_unitaire_tolower(66);
	test_unitaire_tolower(70);
	test_unitaire_tolower(81);
	test_unitaire_tolower(114);
	test_unitaire_tolower(122);
	test_unitaire_tolower(125);
	printf("\n");
}

void		test_unitaire_puts(char *str)
{
	ft_puts(str);
}

void		test_puts(void)
{
	printf("\033[35m___FT_PUTS_______________________________________\033[00m\n\n");

	test_unitaire_puts("HELLO");
	test_unitaire_puts("");
	test_unitaire_puts(NULL);
	printf("\n");
}

void		test_unitaire_strlen(char *str)
{
	printf("[%s] = %lu\n", str, strlen(str));
}

void		test_strlen(void)
{
	printf("\033[35m___FT_STRLEN_______________________________________\033[00m\n\n");

	test_unitaire_strlen("HELLO");
	test_unitaire_strlen("Dans cette deuxième partie, vous devez recoder en\ncore des fonctions de la libc, mais avec les Instru\nction Repeat String Operations.");
	test_unitaire_strlen("");
	printf("\n");
}

void		test_memcpy(void)
{
	printf("\033[35m___FT_MEMCPY_______________________________________\033[00m\n\n");

	char 	str[2];
	char 	str2[6];

	ft_bzero(str, 2);
	ft_bzero(str2, 6);

	printf("AVANT :\n");
	printf("Str1 size: %d, Content: %s\n", (int)ft_strlen(str), str);
	printf("Str2 size: %d, Content: %s\n", (int)ft_strlen(str2), str2);
	ft_memcpy((void*)str, (void*)"a", 1);
	ft_memcpy((void*)str2, (void*)"hello", 5);
	printf("\nAPRES :\n");
	printf("Str1 size: %d, Content: %s\n", (int)ft_strlen(str), str);
	printf("Str2 size: %d, Content: %s\n\n", (int)ft_strlen(str2), str2);
}


void		test_unitaire_memset(char *str, char c, size_t size)
{
	printf("ft_memset(%s, %c, %zu)\n", str, c, size);
	printf("AVANT : ");
	printf("\033[32m%s\033[00m\n",str);
	printf("APRES : ");
	str = ft_memset(strdup(str), c, size);
	printf("\033[32m%s\033[00m\n",str);
	printf("\n\n");
}


void		test_memset(void)
{
	printf("\033[35m___FT_MEMSET_______________________________________\033[00m\n\n");

	test_unitaire_memset("abcd", 'A', 1);
	test_unitaire_memset("abcd", 'B', 3);
	test_unitaire_memset("abcd", 'C', 5);
}

void 	test_strdup(void)
{
	char 	*str;
	char 	f[] = "h";
	char 	s[] = "hello";
	char 	t[] = "";

	printf("\033[35m___FT_STRDUP_______________________________________\033[00m\n\n");
	str = ft_strdup(f);
	printf("Str after strdup (\"%s\") %d\n", str, (int)ft_strlen(str));
	str = ft_strdup(s);
	printf("Str after strdup (\"%s\") %d\n", str, (int)ft_strlen(str));
	str = ft_strdup(t);
	printf("Str after strdup (\"%s\") %d\n\n", str, (int)ft_strlen(str));
}

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;

	test_bzero();
	test_strcat();
	//test_isalpha();
	//test_isdigit();
	//test_isalnum();
	//test_isascii();
	//test_isprint();
	//test_toupper();
	//test_tolower();
	test_puts();

	test_strlen();
	test_memset();
	test_memcpy();
	test_strdup();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderuell <aderuell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 16:05:17 by aderuell          #+#    #+#             */
/*   Updated: 2015/10/19 16:53:08 by aderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

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
	printf("ft_strcat(\"%s\", \"%s\")\n", str, str2);
	printf("AVANT : ");
	printf("[\033[32m%s\033[00m] + [\033[32m%s\033[00m]\n", str, str2);
	printf("APRES : ");
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
	printf("ft_isalpha(%d) => ", c);
	if (i == 1)
		printf("[%c] = \033[32mTRUE\033[00m\n", c);
	else
		printf("[%c] = \033[31mFALSE\033[00m\n", c);
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
	printf("ft_isdigit(%d) => ", c);
	if (i == 1)
		printf("[%c] = \033[32mTRUE\033[00m\n", c);
	else
		printf("[%c] = \033[31mFALSE\033[00m\n", c);
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
	printf("ft_alnum(%d) => ", c);
	if (i == 1)
		printf("[%c] = \033[32mTRUE\033[00m\n", c);
	else
		printf("[%c] = \033[31mFALSE\033[00m\n", c);
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
	printf("ft_isascii(%d) => ", c);
	if (i == 1)
		printf("[%c] = \033[32mTRUE\033[00m\n", c);
	else
		printf("[%c] = \033[31mFALSE\033[00m\n", c);
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
	printf("ft_isprint(%d) => ", c);
	if (i == 1)
		printf("[%c] = \033[32mTRUE\033[00m\n", c);
	else
		printf("[%c] = \033[31mFALSE\033[00m\n", c);
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
	printf("ft_toupper(%3d) => ", c);
	if (i != c)
		printf("[%c] = \033[32m[%c]\033[00m\n", c, i);
	else
		printf("[%c] = \033[31m[%c]\033[00m\n", c, i);
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
	printf("ft_tolower(%3d) => ", c);
	if (i != c)
		printf("[%c] = \033[32m[%c]\033[00m\n", c, i);
	else
		printf("[%c] = \033[31m[%c]\033[00m\n", c, i);
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
	printf("ft_puts(\"%s\")\n", str);
	ft_puts(str);
	printf("\n");
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
	printf("ft_strlen(\"%s\") = \033[32m%lu\033[00m\n\n", str, strlen(str));
}

void		test_strlen(void)
{
	printf("\033[35m___FT_STRLEN_______________________________________\033[00m\n\n");

	test_unitaire_strlen("HELLO");
	test_unitaire_strlen("Dans cette deuxième partie, vous devez recoder en\ncore des fonctions de la libc, mais avec les Instru\nction Repeat String Operations.");
	test_unitaire_strlen("");
	printf("\n");
}

void		test_unitaire_memset(char *str, char c, size_t size)
{
	printf("ft_memset(\"%s\", %c, %zu)\n", str, c, size);
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

void		test_unitaire_memcpy(int size, char *str, int len)
{	
	char 	str2[size];

	ft_bzero(str2, size);
	printf("ft_memcpy(\"%s\", \"%s\", %d)\n", str2, str, len);
	printf("AVANT :\n");
	printf("- Size = %d\n- Content = [\033[32m%s\033[00m]\n", (int)ft_strlen(str2), str2);
	ft_memcpy((void*)str2, (void*)str, len);
	printf("APRES :\n");
	printf("- Size = %d\n- Content = [\033[32m%s\033[00m]\n\n", (int)ft_strlen(str2), str2);
}

void		test_memcpy(void)
{
	printf("\033[35m___FT_MEMCPY_______________________________________\033[00m\n\n");

	test_unitaire_memcpy(2, "a", 1);
	test_unitaire_memcpy(6, "hello", 5);
}

void	test_unitaire_strdup(char *str2)
{
	char	*str;
	
	printf("str = ft_strdup(\"%s\")\n", str2);
	printf("AVANT : ");
	printf("[\033[32m%s\033[00m]\n", str);
	printf("APRES : ");
	str = ft_strdup(str2);
	printf("[\033[32m%s\033[00m]\n\n", str);
}


void 	test_strdup(void)
{
	char 	f[] = "h";
	char 	s[] = "hello";
	char 	t[] = "ECOLE 42";
	char 	h[] = "";

	printf("\033[35m___FT_STRDUP_______________________________________\033[00m\n\n");
	test_unitaire_strdup(f);
	test_unitaire_strdup(s);
	test_unitaire_strdup(t);
	test_unitaire_strdup(h);
}

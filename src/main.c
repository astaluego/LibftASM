/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderuell <aderuell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/02 15:34:28 by aderuell          #+#    #+#             */
/*   Updated: 2015/10/19 19:10:11 by aderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <fcntl.h>

void	ft_choose(int code)
{
	switch (code)
	{
		case 1:
			test_bzero();
			break;
		case 2:
			test_strcat();
			break;
		case 3:
			test_isalpha();
			break;
		case 4:
			test_isdigit();
			break;
		case 5:
			test_isalnum();
			break;
		case 6:
			test_isascii();
			break;
		case 7:
			test_isprint();
			break;
		case 8:
			test_toupper();
			break;
		case 9:
			test_tolower();
			break;
		case 10:
			test_puts();
			break;
		case 11:
			test_strlen();
			break;
		case 12:
			test_memset();
			break;
		case 13:
			test_memcpy();
			break;
		case 14:
			test_strdup();
			break;
		case 15:
			exit(1);
			break;
		default:
			return;
	}
}

int		main(int ac, char **av)
{
	char	str[4];
	FILE	*fichier = NULL;
	(void)ac;
	(void)av;

	while (42)
	{
		/*printf("\033[35m___________________________________________________\033[00m\n\n");
		printf("\033[35mChoose a test :\033[00m\n\n");
		printf("\t\033[36m 1 => ft_bzero\n");
		printf("\t 2 => ft_strcat\n");
		printf("\t 3 => ft_isalpha\n");
		printf("\t 4 => ft_isdigit\n");
		printf("\t 5 => ft_isalnum\n");
		printf("\t 6 => ft_isascii\n");
		printf("\t 7 => ft_isprint\n");
		printf("\t 8 => ft_toupper\n");
		printf("\t 9 => ft_tolower\n");
		printf("\t10 => ft_puts\n\n");
		printf("\t11 => ft_strlen\n");
		printf("\t12 => ft_memset\n");
		printf("\t13 => ft_memcpy\n");
		printf("\t14 => ft_strdup\n\n");
		printf("\t15 EXIT\033[00m\n\n");
		printf("Tap the code : ");
		fgets(str, 3, fdopen(0, "r"));
		printf("\n");
		ft_choose(atoi(str));	
		fgets(str, 3, fdopen(0, "r"));*/
		//test_strdup();
		//	test_bzero();
		//	test_strcat();
		//	test_isalpha();
		//	test_isdigit();
		//	test_isalnum();
		//	test_isascii();
		//	test_isprint();
		//	test_toupper();
		//	test_tolower();
		//	test_puts();
		//	test_strlen();
		//	test_memset();
		//	test_memcpy();
		int		fd;
		fd = open("../doc/albert.txt", O_RDWR);
		ft_cat(fd);
	}
	return (0);
}

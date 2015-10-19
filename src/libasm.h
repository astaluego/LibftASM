/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderuell <aderuell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 16:06:31 by aderuell          #+#    #+#             */
/*   Updated: 2015/10/19 16:53:40 by aderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

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

void		test_bzero(void);
void		test_strcat(void);
void		test_isalpha(void);
void		test_isdigit(void);
void		test_isalnum(void);
void		test_isascii(void);
void		test_isprint(void);
void		test_toupper(void);
void		test_tolower(void);
void		test_strlen(void);
void		test_puts(void);
void		test_memset(void);
void		test_memcpy(void);
void		test_strdup(void);
#endif

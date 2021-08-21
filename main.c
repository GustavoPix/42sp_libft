/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:05:04 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/19 20:05:04 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	test_isalpha(void);
void	test_isdigit(void);
void	test_isalnum(void);
void	test_isascii(void);
void	test_isprint(void);
int		test_strlen(void);
int		test_memset(void);
int		test_bzero(void);
int		test_memcpy(void);
int		test_memmove(void);
int		test_strlcpy(void);

int	main(void)
{
	test_isalpha();
	printf("\n");
	test_isdigit();
	printf("\n");
	test_isalnum();
	printf("\n");
	test_isascii();
	printf("\n");
	test_isprint();
	printf("\n");
	test_strlen();
	printf("\n");
	test_memset();
	printf("\n");
	test_bzero();
	printf("\n");
	test_memcpy();
	printf("\n");
	test_memmove();
	printf("\n");
	test_strlcpy();
	printf("\n");
	return (0);
}

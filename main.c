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

int	main(void)
{
	test_isalpha();
	printf("\n");
	test_isdigit();
	printf("\n");
	test_isalnum();
	printf("\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:55:36 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/26 18:39:57 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str);

static int	applyTest(char *str)
{
	int		so;
	int		sc;

	so = atoi(str);
	sc = ft_atoi(str);
	if (so != sc)
	{
		printf("ft_atoi: KO! ");
		printf("sended *%s*, expected *%d*, got *%d*", str, so, sc);
		return (0);
	}
	return (1);
}

int	test_atoi(void)
{
	if (!applyTest(" ---+--+1234ab567"))
		return (0);
	if (!applyTest("    ---123123ab567"))
		return (0);
	if (!applyTest("-   -  -1a"))
		return (0);
	if (!applyTest("- + -+ - + a 1 b"))
		return (0);
	if (!applyTest("\t -123"))
		return (0);
	if (!applyTest("\n -123"))
		return (0);
	if (!applyTest("\v -123"))
		return (0);
	if (!applyTest("\f -123"))
		return (0);
	if (!applyTest("\r -123"))
		return (0);
	if (!applyTest("\t\n\v\f\r\t -+-+123abc"))
		return (0);
	if (!applyTest("-123"))
		return (0);
	if (!applyTest(" 123"))
		return (0);
	if (!applyTest(" ---2147483648"))
		return (0);
	if (!applyTest(" 2147483647"))
		return (0);
	printf("ft_atoi: OK!");
	return (1);
}
